#include<stdio.h>
int main()
{
	struct check
	{
	}ck;
	printf("%d", sizeof(ck));
}
//The size of an empty structure that without having any members will occupies 1 byte.
