int Add(int a, int b){
return a+b;
}
int main(){
// pointer to function that should take
// (int, int) as argument/ parameter and return int
int (*p)(int,int);

p = &Add; // we can also (p= Add;) so [FUNCTION RETURN ADDRESS]

int c =(p)(2,5);
printf("%d",c);
}
