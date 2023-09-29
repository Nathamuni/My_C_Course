#include<stdio.h>
int main()
{
	int i[3] = {1, 4, 0};
	while(i[2] == i[3])
	{
		if(i[3])
	    printf("Loop ");
		else
		break;
	}
	return 0;
}
//default value of extra elements are 0;
