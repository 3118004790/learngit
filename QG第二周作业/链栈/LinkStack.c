#include"LinkStack.h"
#include<stdio.h>
#include<stdlib.h>
//��ջ(���������)

Status initLStack(LinkStack **s)  {
	(*s)->top=(LinkStackPtr)malloc(sizeof(struct StackNode));
	if(NULL==(*s)->top)
		return ERROR;
	(*s)->top->next=0;
	(*s)->count=0;	
	return SUCCESS; 
}   //��ʼ��
 
Status isEmptyLStack(LinkStack *s)  {
	if(s->top)
        return SUCCESS;
    else
        return ERROR;
}   //�ж���ջ�Ƿ�Ϊ��

Status getTopStack(LinkStack *s,ElemType *e)  {
	if(s->count==0)
        return ERROR;
    else    
        e=s->top->data;
		return SUCCESS;
}   //�õ�ջ��Ԫ��

Status clearStack(LinkStack *s)  {
	LinkStackPtr p;
    while(s->top){
        p=s->top;
        s->top=s->top->next;
        s->count--;
        free(p);
    }
    return SUCCESS;	
}   //���ջ

Status destroyStack(LinkStack *s)  {
	clearStack(s);
	free(s);
	return SUCCESS;
}   //����ջ

Status stackLength(LinkStack *s,int *length)  {
	length=s->count;
}   //���ջ����

Status pushStack(LinkStack *s,ElemType data)  {
	LinkStackPtr p=(LinkStackPtr)malloc(sizeof(struct StackNode));
    p->data=data;
    p->next=s->top;
    s->top=p;
    s->count++;
    return SUCCESS;
}   //��ջ

Status popStack(LinkStack *s,ElemType *data)  {
	LinkStackPtr p;
    if(s->count==0)
	    return ERROR;
	data=s->top->data;    
    p=s->top;
    s->top=s->top->next;
    s->count--;
    free(p);
    return SUCCESS;
}   //��ջ

