//given number is prime or not 
 main()
{
int i,num;
printf("Enter any number except  ");
scanf("%d",&num);
for (i = 2; i < num; i++)
{
    if (num%i==0)
       break;
}
if(i==num)
printf("number is prime");
else 
printf(" number is not prime ");


getch();
}