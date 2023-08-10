#include<stdio.h>
void main(){
int x=3 , y=3 ;
while(--x , y--)
{
	--x;
	printf("%d,%d\n" ,x,y);
}
printf("%d,%d" ,x,y);
}

//in loop it only checks for right most condition truthness
//but it will exec left statements
