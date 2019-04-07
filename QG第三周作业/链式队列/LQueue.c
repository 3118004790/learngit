#include"LQueue.h"
#include<stdlib.h>
#include<stdio.h>
 
/**
 *  @name        : void InitLQueue(LQueue *Q)
 *  @description : ��ʼ������
 *  @param       : Q ����ָ��Q
 *  @notice      : None
 */
void InitLQueue(LQueue *Q)  {
	Node *node=(Node *)malloc(sizeof(Node));
    if(!node) //����Ƿ�����ʧ��
    {
        printf("�ڴ����ʧ�ܣ�\n");
    }
    node->next=NULL;
    Q->rear=node;
    Q->front=Q->rear;
    Q->length=0;
    printf("��ʼ���ɹ�\n");
} 

/**
 *  @name        : void DestoryLQueue(LQueue *Q)
 *  @description : ���ٶ���
 *  @param       : Q ����ָ��Q
 *  @notice      : None
 */
void DestoryLQueue(LQueue *Q)  {
	ClearLQueue(Q);
	free(Q->front);
	printf("�����ٶ��������³�ʼ��\n");
} 

/**
 *  @name        : Status IsEmptyLQueue(const LQueue *Q)
 *  @description : �������Ƿ�Ϊ��
 *  @param       : Q ����ָ��Q
 *  @return      : ��-TRUE; δ��-FALSE
 *  @notice      : None
 */
Status IsEmptyLQueue(const LQueue *Q)  {
	if(Q->length==0)  {
		printf("����Ϊ��\n");
		return TRUE;
	}
	else   {
		printf("���в�Ϊ��\n");
		return FALSE;
	}
} 
																					
/**
 *  @name        : Status GetHeadLQueue(LQueue *Q, int *e)
 *  @description : �鿴��ͷԪ��
 *  @param       : Q e ����ָ��Q,��������ָ��e
 *  @return      : �ɹ�-TRUE; ʧ��-FALSE
 *  @notice      : �����Ƿ��
 */
Status GetHeadLQueue(LQueue *Q, int e)  {
	if(Q->length==0)  {
		printf("����Ϊ�գ�\n");
		return FALSE;
	}
	else  {
		e=Q->front->data; 
		printf("��ͷԪ��Ϊ��%d\n",e); 
		return e;
	}
} 

/**
 *  @name        : int LengthLQueue(LQueue *Q)
 *  @description : ȷ�����г���
 *  @param       : Q ����ָ��Q
 *  @return      : �ɹ�-TRUE; ʧ��-FALSE
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
 *  @description : ��Ӳ���
 *  @param       : Q ����ָ��Q,�������ָ��data
 *  @return      : �ɹ�-TRUE; ʧ��-FALSE
 *  @notice      : �����Ƿ�Ϊ��
 */
Status EnLQueue(LQueue *Q, int data)  {
	Node *node=(Node *)malloc(sizeof(Node));
	if(!node)  {
		printf("�ڴ����ʧ�ܣ�\n");
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
	    printf("��ӳɹ�\n");
     	return TRUE;
	}
} 

/**
 *    @name        : Status DeLQueue(LQueue *Q)
 *    @description : ���Ӳ���
 *    @param       : Q ����ָ��Q
 *    @return      : �ɹ�-TRUE; ʧ��-FALSE
 *    @notice      : None
 */
Status DeLQueue(LQueue *Q)  {
	if(Q->length==0)  {
		printf("����Ϊ�գ�\n");
		return FALSE;
	}
	else  {
		Node *node=(Node *)malloc(sizeof(Node));
		node=Q->front;
		Q->front=node->next;
		free(node);
		Q->length--;
		printf("���ӳɹ�\n");
		return TRUE;
	}
} 

/**
 *  @name        : void ClearLQueue(AQueue *Q)
 *  @description : ��ն���
 *  @param       : Q ����ָ��Q
 *  @notice      : None
 */
void ClearLQueue(LQueue *Q)  {
	Node* node=(Node *)malloc(sizeof(Node));
	node=Q->front;//��ͷԪ��
	while (node)
	{
    	Q->front=node->next;//ָ���µĶ�ͷ���
		if (Q->rear==node)//��ɾ�����Ƕ�βԪ��ʱ������βָ��ָ��ͷ���
		{
			Q->rear=Q->front;
		}
		free(node);//�ͷžɵĶ�ͷ���
		node=Q->front->next;
	}
	Q->length=0;
	printf("����ն���\n");
}
