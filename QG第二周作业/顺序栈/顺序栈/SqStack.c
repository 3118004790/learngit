#include"SqStack.h"
#include<stdio.h> 
#include<stdlib.h>
//顺序栈(基于数组的)

Status initStack(SqStack *s,int sizes)  {
	s->elem=(ElemType *)malloc(sizes *sizeof(ElemType));
    if(s->elem==NULL) 
	 return ERROR;  
    s->top=-1;
    s->size=sizes;
     return SUCCESS;
}   //初始化栈 

Status isEmptyStack(SqStack *s)  {
	if(s->top==-1)
     return SUCCESS;
    else
     return ERROR;
}   //判断栈是否为空

Status getTopStack(SqStack *s,ElemType *e)  {
	if(s->top==NULL||s->top==-1)
     return ERROR;
    else    
     e=s->elem[s->top];
}   //得到栈顶元素

Status clearStack(SqStack *s)  {
	s->top=-1;
	 return SUCCESS;	
}   //清空栈

Status destroyStack(SqStack *s)  {
	s->top=-1;
	free(s);
	 return SUCCESS; 
}   //销毁栈

Status stackLength(SqStack *s,int *length)  {
	length=s->top+1;
}   //检测栈长度

Status pushStack(SqStack *s,ElemType data)  {
	if(s->top==NULL||s->top==s->size-1)
	 return ERROR;
	s->top++;
	s->elem[s->top]=data;
	 return SUCCESS; 
}   //入栈

Status popStack(SqStack *s,ElemType *data)  {
	if(s->top==NULL||s->top==-1)
	 return ERROR;
	data=s->elem[s->top];
	s->top--;
	 return SUCCESS; 
}   //出栈


