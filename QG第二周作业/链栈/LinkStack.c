#include"LinkStack.h"
#include<stdio.h>
#include<stdlib.h>
//链栈(基于链表的)

Status initLStack(LinkStack **s)  {
	(*s)->top=(LinkStackPtr)malloc(sizeof(struct StackNode));
	if(NULL==(*s)->top)
		return ERROR;
	(*s)->top->next=0;
	(*s)->count=0;	
	return SUCCESS; 
}   //初始化
 
Status isEmptyLStack(LinkStack *s)  {
	if(s->top)
        return SUCCESS;
    else
        return ERROR;
}   //判断链栈是否为空

Status getTopStack(LinkStack *s,ElemType *e)  {
	if(s->count==0)
        return ERROR;
    else    
        e=s->top->data;
		return SUCCESS;
}   //得到栈顶元素

Status clearStack(LinkStack *s)  {
	LinkStackPtr p;
    while(s->top){
        p=s->top;
        s->top=s->top->next;
        s->count--;
        free(p);
    }
    return SUCCESS;	
}   //清空栈

Status destroyStack(LinkStack *s)  {
	clearStack(s);
	free(s);
	return SUCCESS;
}   //销毁栈

Status stackLength(LinkStack *s,int *length)  {
	length=s->count;
}   //检测栈长度

Status pushStack(LinkStack *s,ElemType data)  {
	LinkStackPtr p=(LinkStackPtr)malloc(sizeof(struct StackNode));
    p->data=data;
    p->next=s->top;
    s->top=p;
    s->count++;
    return SUCCESS;
}   //入栈

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
}   //出栈

