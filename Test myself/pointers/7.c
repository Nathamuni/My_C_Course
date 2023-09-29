#include<stdio.h>
int SumOfElements(int*A){
	int i, sum = 0;
	int size = sizeof(A)/sizeof(A[0]);
	printf("sizeof(A) = %d , sizeof(A[0]) %d",sizeof(A),sizeof(A[0])); 
	
	for(i =0; i< size;i++){
		sum += A[i];
	}
	return sum;
}
int main()
{
	int A[] = {1,2,3,4,5,19};
	int total = SumOfElements(A);
	printf( "\nSum of elements = %d\n",total);
	printf("sizeof(A) = %d , sizeof(A[0]) %d",sizeof(A),sizeof(A[0])); 
}
