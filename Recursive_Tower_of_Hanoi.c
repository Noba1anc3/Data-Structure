#include <stdio.h>

//将 n 个盘子从 x 经过 y 移动到 z 上
void move(int n, char x, char y, char z){
	if(n == 1)
		printf("%c->%c\n", x, z);
	else{
		move(n - 1, x, z, y);
		printf("%c->%c\n", x, z);
		move(n - 1, y, x, z);
	}
}
