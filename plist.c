#include <stdio.h>
#include <stdlib.h>
#include "plist.h"


//头插：从链表的头部插入数据。
static int list_add_head(struct list *list, int data)
{
	struct node * node = (struct node *)malloc(sizeof(struct node));
	
	if(node == NULL) {
		printf("内存分配失败\n");
		return -1;
	}
	
	//初始化节点
	node->data = data;
	node->next = next;	
	
	struct node * cur = list->head;
	if(list->head == NULL) {
		list->head = node;
		node->next = list->head;
	} else {
		node->next = list->head;
		for(;cur->next != list->head; cur = cur->next){}
		cur->next = node;
		list->head = node;		
	}
	
	return 0;
}

static int list_add_tail(struct list *list, int data){
    struct node * node = (struct node *)malloc(sizeof(struct node));

    if(node == NULL) {
        printf("内存分配失败\n");
        return -1;
    }

    //初始化节点
    node->data = data;
    node->next = next;

    struct node * cur = list->head;
    if(list->head == NULL) {
        list->head = node;
        node->next = list->head;
	} else {
        for(;cur->next != list->head; cur = cur->next){}
        cur->next = node;
        node->next = list->head;
    }

    return 0;
}

static void list_for_each(struct list * list)
{
	if(list->head == NULL) {
		printf("链表为空，不需要遍历\n");
		return -1;
	}
	
	struct node * cur = list->head;
	
	for(;cur->next != list->head; cur = cur->    next)
	{
		printf("%d   ", cur->data);		
	}	
	
	printf("%d\n", cur->data);	
		
}

static int list_search(struct list *list, int data)
{
    if(list->head == NULL) {
        printf("链表为空，不需要遍历\n");
        return -1; 
    }   
    
    struct node * cur = list->head;
	int i = 1;
	   
    for(;cur->next != list->head; cur = cur->next, i++)
    {
		if(cur->data == data)
			return i;
//        printf("%d   ", cur->data);    
    }   
		
	if(cur->data == data)
		return i;           
//   printf("%d\n", cur->data);
}

static void list_del(struct list *list, struct node *node)
{
	if(list->head == NULL) {
	}
	
	struct node *cur = list->head;	
    if(node == list->head) {
        list->head = node->next;
		node->next = NULL;
		free(node);
		return;
    }
	

	for(;cur->next != node;cur=cur->next) {
		if(cur->next == list->head) {
			printf("该节点不存在\n");
			return;
		}
	}
	
	cur->next = node->next;
	node->next = node;
	free(node);	
}
