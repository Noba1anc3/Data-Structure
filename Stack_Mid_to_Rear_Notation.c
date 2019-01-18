#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define STACK_INIT_SIZE	20
#define STACK_INCREMENT	10
#define MAXBUFFER 	10

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
	ElemType c, e;
	sqStack s;
	
	InitStack(&s);
	
	printf("请输入中缀表达式，以#表示结束！\n");
	scanf("%c",&c);

	while(c != '#'){
		
		while( isdigit(c) ){
			printf("%c ", c);
			scanf("%c", &c);
			if( !isdigit(c) )
				printf(" ");
		}
		
		if( c == ')'){
			Pop(&s, &e);
			while(e != '('){
				printf("%c ", e);
				Pop(&s, &e);
			}
		}
		
		else if( c == '+' || c == '-'){
			if( !stackLen(s) ){
				Push(&s, c);
			}
			else{
				do{
					Pop(&s, &e);
					if( e == '(')
						Push(&s, e);
					else
						printf("%c ",e);
				}while( stackLen(s) && e != '(');
				Push(&s, c);
			}
		}
		
		else if( c == '(' || c == '*' || c == '/' )
			Push(&s, c);
		
		else if( c == '#')  //可能被69行屏蔽
			break;
		
		else
			return -1;
		
		scanf("%c", &c);
		
	}
	
	while( stackLen(s) ){
		Pop(&s, &e);
		printf("%c ", e);
	}
	
	return 0;
}
	
