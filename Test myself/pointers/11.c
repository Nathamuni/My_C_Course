#include<stdio.h>
int main(){
	int i = 3;
	int *j;
	int **k;
	j = &i;
	k = &j;
	k++;
	printf("%d ",**k);
	return 0;
}

//if we increment the value k++ it holds some garbage value where we can't reference as pointer 
// so RUNTIME ERROR ;
