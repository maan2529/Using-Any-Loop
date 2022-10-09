main()
{
   int getFNum;
   int getSNum;
   int i;

   
   printf("Enter two number ");
   scanf("%d%d", &getFNum,&getSNum);


for ( i = 2; i <=(getFNum>getSNum?getSNum:getFNum); i++)
{

   if (getFNum%i==0 && getSNum%i==0)
   {
      break;
   }
   
}


if (i<=(getFNum>getSNum?getSNum:getFNum))
{
   printf("Numbers %d and %d are not Co-prime ", getFNum,getSNum);
}
else
{
   printf("Numbers %d and %d are Co-prime ", getFNum,getSNum);
}



getch();
return 0;
}