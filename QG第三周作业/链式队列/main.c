#include"LQueue.h"
#include<stdlib.h>
#include<stdio.h>

void main()  {
	LQueue *List=(LQueue *)malloc(sizeof(LQueue));
    int chose=0;
	int data; 
	while(chose!=9)  {
		printf("***********************\n");
        printf("* 1.    ��ʼ������    *\n");
     	printf("* 2. �ж϶����Ƿ�Ϊ�� *\n");
	    printf("* 3.   �鿴��ͷԪ��   *\n");
	    printf("* 4.     ��ն���     *\n");
	    printf("* 5.     ���ٶ���     *\n");
	    printf("* 6.   ȷ�����г���   *\n");
	    printf("* 7.       ���       *\n");
	    printf("* 8.       ����       *\n");
	    printf("* 9.     �˳�����     *\n");
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
				printf("��ͷԪ��Ϊ��%d\n",data);
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
				printf("���г���Ϊ��%d\n",LengthLQueue(List));
				break;
			}
			
			case 7:  {
				printf("������һ������\n");
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
