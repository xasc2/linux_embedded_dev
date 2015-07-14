//宏定义，函数声明，数据类型声明
#pragma once


#define MAXSIZE 20

typedef struct seqlist {
    int data[MAXSIZE];
    int last;
}seqlist;

struct seqlist_opt {
	seqlist * my_seqlist;
	int (*insert)(struct seqlist * , int , int );
	int (*change)(struct seqlist *l, int data, int weizhi);
	int (*search)(struct seqlist *l, int data);
	int (*del)(struct seqlist *l, int weizhi);
	void (*prf)(struct seqlist *l);	
	
};

//构造函数：初始化
void seqlist_init(struct seqlist_opt *);


//析构函数：
void seqlist_destory(struct seqlist_opt *);

/*
int insert_seqlist(struct list * , int , int );
int change_seqlist(struct list *l, int data, int weizhi);
int search_seqlist(struct list *l, int data);
int del_seqlist(struct list *l, int weizhi);
void prf_seqlist(struct list *l);
*/



