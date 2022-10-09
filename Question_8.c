 main()
{
int getFNum,getSNum;
printf("Enter two number ");
scanf("%d%d",&getFNum,&getSNum);
for(int i=getFNum>getSNum?getSNum:getFNum; i>=1; i--)
    if(getFNum%i ==0 && getSNum%i==0)
    {
         printf("HCF of %d and %d is %d ",getFNum,getSNum,i );
         break;
    }
   
getch();
return 0;
}