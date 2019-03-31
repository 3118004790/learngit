#include"SqStack.h"
#include<stdio.h> 
#include<stdlib.h>
//˳��ջ(���������)

Status initStack(SqStack *s,int sizes)  {
	s->elem=(ElemType *)malloc(sizes *sizeof(ElemType));
    if(s->elem==NULL) 
	 return ERROR;  
    s->top=-1;
    s->size=sizes;
     return SUCCESS;
}   //��ʼ��ջ 

Status isEmptyStack(SqStack *s)  {
	if(s->top==-1)
     return SUCCESS;
    else
     return ERROR;
}   //�ж�ջ�Ƿ�Ϊ��

Status getTopStack(SqStack *s,ElemType *e)  {
	if(s->top==NULL||s->top==-1)
     return ERROR;
    else    
     e=s->elem[s->top];
}   //�õ�ջ��Ԫ��

Status clearStack(SqStack *s)  {
	s->top=-1;
	 return SUCCESS;	
}   //���ջ

Status destroyStack(SqStack *s)  {
	s->top=-1;
	free(s);
	 return SUCCESS; 
}   //����ջ

Status stackLength(SqStack *s,int *length)  {
	length=s->top+1;
}   //���ջ����

Status pushStack(SqStack *s,ElemType data)  {
	if(s->top==NULL||s->top==s->size-1)
	 return ERROR;
	s->top++;
	s->elem[s->top]=data;
	 return SUCCESS; 
}   //��ջ

Status popStack(SqStack *s,ElemType *data)  {
	if(s->top==NULL||s->top==-1)
	 return ERROR;
	data=s->elem[s->top];
	s->top--;
	 return SUCCESS; 
}   //��ջ


