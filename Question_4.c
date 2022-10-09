main()
{
int i,j;
int num1;

printf("Enter number ");
scanf("%d",&num1);

for ( i = num1+1;  ; i++)
{
    for (j = 2; j < i; j++)
    {
        if(i%j==0)
        break;
    }
    if(j==i){
         printf("%d \n", i);
            break;
    }
   
}

getch();
}
