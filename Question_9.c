//find all factors of given number...

main()
{
   int getNum;

   printf("Enter  number ");
   scanf("%d", &getNum);

printf("Factor of %d is " , getNum);
for (int i = 1; i <=getNum ; i++)
{
if (getNum%i==0)
{
    printf("%d, ",i);
}

}

getch();

}