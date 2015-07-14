#include <stdio.h>
#include <stdlib.h>
#include "seqlist.h"

static int insert_seqlist(struct seqlist * l, int data, int weizhi)
{
   int j;
    
    if(weizhi > MAXSIZE) {
        printf("溢出!\n");
        return -1;
    }else if (weizhi < 1  || weizhi > l->last +1) {
        printf("位置不对!\n");
        return -2;
    }   
    
    for(j=l->last-1;j>=weizhi-1;j--)
        l->data[j+1] = l->data[j];
    l->data[weizhi-1] = data;
    l->last = l->last + 1;

    return 0;
}


static int change_seqlist(struct seqlist *l, int data, int weizhi)
{   
    if(weizhi > MAXSIZE) {
        printf("溢出!\n");
        return -1;
    }else if (weizhi < 1  || weizhi > l->last) {
        printf("位置不对!\n");
        return -2;
    }

    l->data[weizhi-1] = data;
    return 0;
}



static int search_seqlist(struct seqlist *l, int data)
{
    int j;
    for(j = 0; j <= l->last - 1; j++) {
        if(l->data[j] == data)
            return j+1;
    }
    return -1;
}


static int del_seqlist(struct seqlist *l, int weizhi)
{
    int j;

     if(weizhi > MAXSIZE){
           printf("超出线性表范围。\n");
            return -1;
    } else if(weizhi<1||weizhi>l->last) {
            printf("该节点不存在。\n");
            return -2;
    }


    for(j=weizhi-1; j<l->last-1;j++)
        l->data[j]  = l->data[j+1];
    l->last--;
    return 0;
}

static void prf_seqlist(struct seqlist *l)
{
    int j;
    for(j=1;j<=l->last;j++)
        printf("%d   ", l->data[j-1]);
    printf("\n");
}

void seqlist_init(struct seqlist_opt * s_opt)
{
	s_opt->my_seqlist = NULL;
	s_opt->insert = insert_seqlist;
	s_opt->change = change_seqlist;
	s_opt->search = search_seqlist;
	s_opt->del = del_seqlist;
	s_opt->prf = prf_seqlist;
}

void seqlist_destory(struct seqlist_opt * s_opt)
{	
	free(s_opt->my_seqlist);
	free(s_opt);
}

