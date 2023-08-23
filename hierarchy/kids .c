void main()
{
    int a, b ,max;
    printf("enter two numbers : ");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        max = a;

    }
    if(b>a)
    {
        max = b;

    }
    printf("%d is greater number",max);
}
