#include"LQueue.h"
#include<stdlib.h>
#include<stdio.h>

void main()  {
	LQueue *List=(LQueue *)malloc(sizeof(LQueue));
    int chose=0;
	int data; 
	while(chose!=9)  {
		printf("***********************\n");
        printf("* 1.    初始化队列    *\n");
     	printf("* 2. 判断队列是否为空 *\n");
	    printf("* 3.   查看队头元素   *\n");
	    printf("* 4.     清空队列     *\n");
	    printf("* 5.     销毁队列     *\n");
	    printf("* 6.   确定队列长度   *\n");
	    printf("* 7.       入队       *\n");
	    printf("* 8.       出队       *\n");
	    printf("* 9.     退出程序     *\n");
	    printf("***********************\n");
	    scanf("%d",&chose);
		switch(chose)  {
			case 1:  {
				InitLQueue(List);
				break;
			}
			
			case 2:  {
				IsEmptyLQueue(List);
				break;
			}
			
			case 3:  {
				printf("队头元素为：%d\n",data);
				break;
			}
			
			case 4:  {
				ClearLQueue(List);
				break;
			}
			
			case 5:  {
				DestoryLQueue(List);
				break;
			}
			
			case 6:  {
				printf("队列长度为：%d\n",LengthLQueue(List));
				break;
			}
			
			case 7:  {
				printf("请输入一个整数\n");
				scanf("%d",&data);
				EnLQueue(List,&data);
				break;
			}
			
			case 8:  {
				DeLQueue(List);
				break;
			}
			
			default:  {
				break;
			}
		} 
    }
}
