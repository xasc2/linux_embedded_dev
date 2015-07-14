#pragma once


struct node {
	int data;
	struct node *next;
};

struct list {
	struct node *head;
	int (*add_head)(struct list *, int);
	int  (*add_tail)(struct list * list, int data);
	void (*for_search)(struct list *list);
	int (*search)(struct list * list, int data);
	void (*del)(struct list * list, struct node *node);
};

void plist_init(struct list *);
void plist_destory(struct list *);

