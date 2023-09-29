int main(){
	int B[2][3]={{2,3,6},{4,5,8}};	
//	here int *p = B is X
// as the address B is a 1-dimentional array of 3 integers
// the type of the pointer matters only on dereferencing or on ptr arithmetic

int (*p) = B;
printf("%d %d\n",p,B);
printf("%d %d\n",p+1,B+1);


int (*q)[3] = B;
  printf("\nsame value q+1 = %d , B+1 = %d\n",q+1,B+1);
  
/*1*/   printf("%d %d\n",**B,B[0][0]); // B just points t

/*2*/  printf("%d %d\n",B+1,B[1]); // B[1] will print the address of the i 1 block B[1][0] only value

/*3*/  printf("*(B+1) , &B[1]  =  %d , %d\n",*(B+1),&B[1]); // here *(B+1),&B[1] no need for * and &

/*4*/  printf("*(B+1)+2 = %d which is (B + 4*3) + 2*4 \n",*(B+1)+2);

/*5*/   printf("%d\n",*(*B+1));  // *B => is 1'st 1-dimentional array 
// and +1 is next element inthat 1D array and dereference


}
