#include <stdio.h>
#include "list.h"

struct node {
	char * name;
	int score;
	struct list_head list;
};

struct tnode {
	char * name;
	int zhili;
	int minjie;
	int liliang;
	struct list_head list;
}


int main(void) 
{
	LIST_HEAD(head);
	struct node s[] = {
		{"Tom", 50},
		{"Jack", 80},
		{"Sand", 100},
		{"李强", 98},
		{"陈娜娜", 98},
		{"Tim", 12},
		{"凤姐", 2},
	};

	int n = sizeof(s)/sizeof(struct node);
	int i = 0;
	for(;i<n; i++) {
		INIT_LIST_HEAD(&(s+i)->list);
		list_add_tail(&(s+i)->list, &head);
	}
	
	struct node * pnode = NULL;
	struct list_head * cur = NULL;	
	
	list_for_each(cur, &head) {
		pnode = list_entry(cur, struct node, list);
		printf("%s, %d\n", pnode->name, pnode->score);
	}

	printf("删除小于60分\n");
	
	struct list_head *tmp = NULL;
	list_for_each_safe(cur, tmp, &head) {
		pnode = list_entry(cur, struct node, list);
		if(pnode->score < 60) {
			list_del(&pnode->list);
		}
	}
	
    list_for_each(cur, &head) {
        pnode = list_entry(cur, struct node, list);
        printf("%s, %d\n", pnode->name, pnode->score);
    }


	return 0;
}








