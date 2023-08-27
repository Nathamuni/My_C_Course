#include<stdio.h>
int main(){
enum Day{sun=99,mon,tue,wed,thu,fri,sat};
enum Day d=wed;
printf("Day : %d\n",d);
return 0;
}

// default value will start from 0 , unless we specify as sun=1
