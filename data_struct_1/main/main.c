#include <stdio.h>
#include <stdlib.h>
#include "seqlist.h"

int main()
{
	seqlist *s = (seqlist *) malloc(sizeof(seqlist));

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
                result = insert_seqlist(s, data, weizhi);
                if(result == 0) {
                    printf("插入成功\n");
                } else if(result < 0)
                    printf("插入失败\n");    
                break;
            case 2:
                printf("请输入要删除的位置:\n");
                scanf("%d", &weizhi);
                result = del_seqlist(s, weizhi);
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
                result = change_seqlist(s, data, weizhi);
                if(result == 0) {
                    printf("修改成功\n");
                } else if(result < 0)
                    printf("修改失败\n");
                break;
            case 4:
                printf("请输入要查询的数据:\n");
                scanf("%d", &data);
                result = search_seqlist(s, data);
                if(result > 0) {
                    printf("该数据位置是 %d\n", result);
                } else if(result < 0)
                    printf("该数据不存在\n");
                break;
            case 5:
                prf_seqlist(s);
                break;
            case 6:
                return 0;
            default:
                printf("输入的操作不对!\n");
                break;
        }
    }
	
	return 0;
}

