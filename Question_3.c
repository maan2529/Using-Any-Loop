main()
{
int i,j;
int num1,num2;

printf("Enter 2 number ");
scanf("%d%d",&num1,&num2);

for ( i = num1; i < num2; i++)
{
    for (j = 2; j < i; j++)
    {
        if(i%j==0)
        break;
    }
    if(j==i)
    printf("%d \n", i);
}

getch();
}


