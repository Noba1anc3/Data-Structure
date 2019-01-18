#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define STACK_INIT_SIZE	20
#define STACK_INCREMENT	10

typedef char ElemType;
typedef struct
{
	ElemType *top;
	ElemType *base;
	int stackSize;
}sqStack;

int InitStack(sqStack *s)
{
	s->base = (ElemType *)malloc(STACK_INIT_SIZE * sizeof(ElemType));
	if( !s->base )
		return 0;
	s->top = s->base;
	s->stackSize = STACK_INIT_SIZE;
  	return 1;
}

int Push(sqStack *s, ElemType e)
{
	if(s->top - s->base >= s->stackSize)
	{
		s->base = (ElemType *)realloc(s->base,(s->stackSize + STACK_INCREMENT) * sizeof(ElemType))
		if(!s->base)
			return 0;
	}
	*(s->top) = e;
	s->top++;
  	return 1;
}

int Pop(sqStack *s, ElemType *e)
{
	if(s->top == s->base)
		return 0;
	*e = *--(s->top);
  	return 1;
}

int stackLen(sqStack s)
{
	return (s.top - s.base); //传非指针用点
}

int main()
{
	ElemType c;
	sqStack s;
	int len, i, sum = 0;
	
	InitStack(&s);
	
	printf("请输入二进制数，输入#表示结束！\n");
	scanf("%c",&c);
	while(c != '#')
	{
		Push(&s, c);
		scanf("%c",&c);
	}
	getchar();  //
	
	len = stackLen(s);
	printf("栈的当前容量是：%d\n", len);
	
	for(i = 0;i < len;i++)
	{
		Pop(&s,&c);
		sum += (c - 48) * pov(2,i);
	}
		
	printf("转化为十进制数为：%d\n", sum);

	return 0;
	
}
	
