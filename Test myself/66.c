void fun (int i){
	if(i<4){
		main(++i);
	}
}
int main(int args){
	printf("%d ",args);
	fun(args);
	return 0;
}

// In default the function argument is 1 for main();
