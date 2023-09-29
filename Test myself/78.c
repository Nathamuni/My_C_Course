#include<stdio.h>
int main()
{
	struct st 
	{
		int i;		
		static int si;
	};
	struct st s = {1, 2};
	printf("%d %d", s.i, s.si);
	return 0;
}

// no static allowed inside structure
