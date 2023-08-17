#include<stdio.h>
void tracerse(char *c){
//	c[2]='y';  if we pass the "char *c" as params then this statement will not work
	while(*c != '\0')
	 printf("%c",*c++);
}
int main()
{
//char c[4]="john";
char *c ="john";

tracerse(c);
}
