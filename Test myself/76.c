#include<stdio.h>
int main()
{
	struct num 
	{
	int i, j, k, l;
	};
	struct num n = {1, 2, 3};
	printf("%d %d %d %d", i, j, k, l);
	//variable can only accessed by n.i
}
