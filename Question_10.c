#include<stdio.h>
int main()
{
 int j;
 int getNum;

 printf("Enter two number ");
 scanf("%d",&getNum);

 printf("The prime factor of %d is ",getNum);
 for(int i=2;i<=getNum;i++)
  {
    if(getNum%i==0)
     {
      for (j = 2; j <=i-1; j++)
       {
         if(i%j==0)
         {
         break;
         }
       }
    
     (j<=i-1)?:printf("%d, ", i);

    }
  }
 return 0;
}