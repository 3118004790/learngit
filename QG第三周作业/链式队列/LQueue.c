#include"LQueue.h"
#include<stdlib.h>
#include<stdio.h>
 
/**
 *  @name        : void InitLQueue(LQueue *Q)
 *  @description : 初始化队列
 *  @param       : Q 队列指针Q
 *  @notice      : None
 */
void InitLQueue(LQueue *Q)  {
	Node *node=(Node *)malloc(sizeof(Node));
    if(!node) //检测是否申请失败
    {
        printf("内存分配失败！\n");
    }
    node->next=NULL;
    Q->rear=node;
    Q->front=Q->rear;
    Q->length=0;
    printf("初始化成功\n");
} 

/**
 *  @name        : void DestoryLQueue(LQueue *Q)
 *  @description : 销毁队列
 *  @param       : Q 队列指针Q
 *  @notice      : None
 */
void DestoryLQueue(LQueue *Q)  {
	ClearLQueue(Q);
	free(Q->front);
	printf("已销毁队列请重新初始化\n");
} 

/**
 *  @name        : Status IsEmptyLQueue(const LQueue *Q)
 *  @description : 检查队列是否为空
 *  @param       : Q 队列指针Q
 *  @return      : 空-TRUE; 未空-FALSE
 *  @notice      : None
 */
Status IsEmptyLQueue(const LQueue *Q)  {
	if(Q->length==0)  {
		printf("队列为空\n");
		return TRUE;
	}
	else   {
		printf("队列不为空\n");
		return FALSE;
	}
} 
																					
/**
 *  @name        : Status GetHeadLQueue(LQueue *Q, int *e)
 *  @description : 查看队头元素
 *  @param       : Q e 队列指针Q,返回数据指针e
 *  @return      : 成功-TRUE; 失败-FALSE
 *  @notice      : 队列是否空
 */
Status GetHeadLQueue(LQueue *Q, int e)  {
	if(Q->length==0)  {
		printf("队列为空！\n");
		return FALSE;
	}
	else  {
		e=Q->front->data; 
		printf("队头元素为：%d\n",e); 
		return e;
	}
} 

/**
 *  @name        : int LengthLQueue(LQueue *Q)
 *  @description : 确定队列长度
 *  @param       : Q 队列指针Q
 *  @return      : 成功-TRUE; 失败-FALSE
 *  @notice      : None
 */
int LengthLQueue(LQueue *Q)  {
	if(!Q)  {
		return FALSE;
	}
	else  {
		return Q->length;
	}

} 

/**
 *  @name        : Status EnLQueue(LQueue *Q, int *data)
 *  @description : 入队操作
 *  @param       : Q 队列指针Q,入队数据指针data
 *  @return      : 成功-TRUE; 失败-FALSE
 *  @notice      : 队列是否为空
 */
Status EnLQueue(LQueue *Q, int data)  {
	Node *node=(Node *)malloc(sizeof(Node));
	if(!node)  {
		printf("内存分配失败！\n");
		return FALSE;
	}
	else  {
		node->next=NULL;
	    node->data=data;
		if(Q->length==0)  {
			Q->front->next=node;
			Q->rear->next=node;
			Q->front=node;
			Q->rear=node;
		}
		else  {
			Q->rear->next=node;
	        Q->rear=node;
		}
	    Q->length++;
	    printf("入队成功\n");
     	return TRUE;
	}
} 

/**
 *    @name        : Status DeLQueue(LQueue *Q)
 *    @description : 出队操作
 *    @param       : Q 队列指针Q
 *    @return      : 成功-TRUE; 失败-FALSE
 *    @notice      : None
 */
Status DeLQueue(LQueue *Q)  {
	if(Q->length==0)  {
		printf("队列为空！\n");
		return FALSE;
	}
	else  {
		Node *node=(Node *)malloc(sizeof(Node));
		node=Q->front;
		Q->front=node->next;
		free(node);
		Q->length--;
		printf("出队成功\n");
		return TRUE;
	}
} 

/**
 *  @name        : void ClearLQueue(AQueue *Q)
 *  @description : 清空队列
 *  @param       : Q 队列指针Q
 *  @notice      : None
 */
void ClearLQueue(LQueue *Q)  {
	Node* node=(Node *)malloc(sizeof(Node));
	node=Q->front;//队头元素
	while (node)
	{
    	Q->front=node->next;//指向新的队头结点
		if (Q->rear==node)//当删除的是队尾元素时，将队尾指针指向头结点
		{
			Q->rear=Q->front;
		}
		free(node);//释放旧的队头结点
		node=Q->front->next;
	}
	Q->length=0;
	printf("已清空队列\n");
}
