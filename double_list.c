#include <stdio.h>
#include <stdlib.h>

#include "double_list.h"

struct dnode {
	int data;
	struct dnode * next;
	struct dnode * prev;
};

struct double_list {
	struct dnode * head;
	...
};

struct dnode * dnode_init(struct dnode * node)
{
	node->prev = node;
	node->next = node;
	return node;
}


struct dnode * __add(struct dnode * node, struct dnode * prev_node, struct dnode * next_node)
{
	prev_node->next = node;
	next_node->prev = node;
	node->prev = prev_node;
	node->next = next_node;
	
	return node;
}

//插入到双循环链表的头节点和头节点下一个节点之间
struct dnode * double_list_add_head(struct double_list * list, int data)
{
	struct dnode * node = (struct dnode *)malloc(sizeof(struct dnode));
	if(node == NULL) {
		printf("申请节点失败!\n");
		return -1;
	}
	
	node->data = data;
	dnode_init(node);
		
	return __add(node, list->head, list->head->next);
}

struct dnode * double_list_add_tail(struct double_list * list, int data)
{
    struct dnode * node = (struct dnode *)malloc(sizeof(struct dnode));
    if(node == NULL) {
        printf("申请节点失败!\n");
        return -1; 
    }
        
    node->data = data;
    dnode_init(node);
            
    return __add(node, list->head->prev, list->head);}

void double_list_for_each(struct double_list * list)
{
	struct dnode * cur = list->head->next;
	
	for(;cur != list->head; cur = cur->next) {
		printf("%d  ", cur->data);
	}	
	
	printf("\n");
}

void double_list_del_node(struct dnode * node)
{
	node->prev->next = node->next;
	node->next->prev = node->prev;
	dnode_init(node);
	free(node);
}

//返回值为1,空链表   返回值为0，非空链表
int list_is_empty(struct double_list *list)
{
	return list->head->next == list->head;
}

void double_list_del_data(struct double_list * list, int data)
{
	struct dnode * tmp = list->head;
	struct dnode * cur = list->head->next;
	
	for(;cur != list->head; cur=tmp->next) {
		if(cur->data == data) {
			double_list_del_node(cur);			
		} else { 
			tmp = cur;
		}
	}
}


struct dnode * search(struct double_list * list, int data)
{
	int count = 0;
	struct dnode * cur = list->head->next;
	for(;cur!=list->head; cur= cur->next) {
		count++;
		if(cur->data == data) {
			printf("找到了该节点，位于%d个节点\n", count);
			return cur;		
		}
	}
	
	return NULL;
}



