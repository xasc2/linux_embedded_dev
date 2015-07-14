#include <stdio.h>
#include <stdlib.h>
#include "seqlist.h"
#include "plist.h"

void seqlist_test();
void plist_test();


int main(void)
{
	plist_test();
	return 0;
}

void plist_test()
{
	struct list *list = (struct list *)malloc(sizeof(struct list));
    if (!list) {
        printf("申请堆空间失败！\n");
    }   
    plist_init(list);

    struct node * tmp;
//  tmp = list->head;
    
    int cmd;
    int data;
    int weizhi;
    int i;

    while(1) {
        printf("请输入要操作的数:1.头插 2.尾插  3.删除 4.查询 5.打印 6.退出\n");
        scanf("%d", &cmd);
        switch (cmd) {
            case 1:
                printf("请输入要头插的数据:\n");
                scanf("%d", &data);
                list->add_head(list, data);
                break;
            case 2:
                printf("请输入要尾插的数据:\n");
                scanf("%d", &data);
                list->add_tail(list, data);
                break;
            case 3:
                tmp = list->head;
                printf("请输入要删除数据的位置:\n");
                scanf("%d", &weizhi);
                for(i=0;i<weizhi - 1;i++) tmp = tmp->next;
                list->del(list, tmp);
                break;
            case 4:
                printf("请输入要查询的数据：\n");
                scanf("%d", &data);
                printf("位置在%d\n", list->search(list,data));
                break;
            case 5:
                printf("链表的数据为:\n");
                list->for_search(list);
                break;

            case 6:
                plist_destory(list);
                return;
            default:
                break;
        }
    }
	return ;
}


#if 1
void seqlist_test()
{
//	seqlist *s = (seqlist *) malloc(sizeof(seqlist));
	struct seqlist_opt * s_opt = (struct seqlist_opt *)malloc(sizeof(struct seqlist_opt));
	seqlist_init(s_opt);
	s_opt->my_seqlist = (seqlist *)malloc(sizeof(seqlist));
	
    int cmd ;
    int data, weizhi;
    int result;
    while(1) {
        printf("请输入要操作的数:1.插入 2.删除 3.修改 4.查看 5.打印 6.退出\n");
        scanf("%d", &cmd);
        switch (cmd) {
            case 1:
                printf("请输入要插入的数据:\n");
                scanf("%d", &data);    
                printf("请输入要插入的位置:\n");
                scanf("%d", &weizhi);
                result = s_opt->insert(s_opt->my_seqlist, data, weizhi);
                if(result == 0) {
                    printf("插入成功\n");
                } else if(result < 0)
                    printf("插入失败\n");    
                break;
            case 2:
                printf("请输入要删除的位置:\n");
                scanf("%d", &weizhi);
                result = s_opt->del(s_opt->my_seqlist, weizhi);
                if(result == 0) {
                    printf("删除成功\n");
                } else if(result < 0)
                    printf("删除失败\n");    
                break;
            case 3:
                printf("请输入要修改的数据:\n");
                scanf("%d", &data);    
                printf("请输入要修改的位置:\n");
                scanf("%d", &weizhi);
                result = s_opt->change(s_opt->my_seqlist, data, weizhi);
                if(result == 0) {
                    printf("修改成功\n");
                } else if(result < 0)
                    printf("修改失败\n");
                break;
            case 4:
                printf("请输入要查询的数据:\n");
                scanf("%d", &data);
                result = s_opt->search(s_opt->my_seqlist, data);
                if(result > 0) {
                    printf("该数据位置是 %d\n", result);
                } else if(result < 0)
                    printf("该数据不存在\n");
                break;
            case 5:
                s_opt->prf(s_opt->my_seqlist);
                break;
            case 6:
				seqlist_destory(s_opt);
                return ;
            default:
                printf("输入的操作不对!\n");
                break;
        }
    }
	
	return ;
}
#endif
