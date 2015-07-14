//宏定义，函数声明，数据类型声明
#pragma once


#define MAXSIZE 20

typedef struct list {
    int data[MAXSIZE];
    int last;
}seqlist;


int insert_seqlist(struct list * , int , int );
int change_seqlist(struct list *l, int data, int weizhi);
int search_seqlist(struct list *l, int data);
int del_seqlist(struct list *l, int weizhi);
void prf_seqlist(struct list *l);




