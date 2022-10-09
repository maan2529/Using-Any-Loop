main()
{
int i,j;
int num1;

printf("Enter  number ");
scanf("%d",&num1);

for ( i = 2; i <= num1; i++)
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
