#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define STACK_INIT_SIZE	20
#define STACK_INCREMENT	10
#define MAXBUFFER 		10

typedef char ElemType;
typedef struct
{
	ElemType *top;
	ElemType *base;
	int stackSize;
}sqStack;

int InitStack(sqStack *s)
{
	s->base = (ElemType*)malloc(STACK_INIT_SIZE * sizeof(ElemType));
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
		s->base = (ElemType*)realloc(s->base,(s->stackSize + STACK_INCREMENT) * sizeof(ElemType))
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
	ElemType c, str[MAXBUFFER];
	sqStack s;
	int i = 0;
	double a, b;
	
	InitStack(&s);
	
	printf("请输入逆波兰表达式，数据与运算符用空格隔开，以#表示结束！\n");
	scanf("%c",&c);

	while(c != '#'){
		
		while( isdigit(c) || c == '.'){
			str[i++] = c;
			str[i] = '\0';
			if( i >= 10)
				return -1;
			scanf("%c", &c);
			if(c == ' '){
				a = atof(str); // atof(): *str => float
				Push(&s, a);
				i = 0;
				break;
			}
		}
		
		switch (c){
			case '+':
				Pop(&s, &a);
				Pop(&s, &b);
				Push(&s, a+b);
				break;
			
			case '-':
				Pop(&s, &a);
				Pop(&s, &b);
				Push(&s, b-a);
				break;				
				
			case '*':
				Pop(&s, &a);
				Pop(&s, &b);
				Push(&s, a*b);
				break;
			
			case '/':
				Pop(&s, &a);
				Pop(&s, &b);
				if(a != 0)
					Push(&s, b/a);
				else
					return -1;
				break;
		}
		
	}
	
	Pop(&s, &a);
	printf("计算结果为：%d", a);
	
	return 0;
}
	
