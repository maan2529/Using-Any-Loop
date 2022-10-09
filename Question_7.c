main()
{
int getFNum, getSNum;
printf("Enter two number ");
scanf("%d%d",&getFNum, &getSNum);

//---------------------If any of  Number is 0----------------------
if(getFNum==0)
  {
    printf("LCM of %d and %d is %d ", getFNum, getSNum , getSNum);
  }
else if(getSNum==0)
  {
    printf("LCM of %d and %d is %d ", getFNum, getSNum , getFNum);
  }
//------------------------------------------------------------------

for (int i = (getFNum>getSNum?getFNum:getSNum); i <= getFNum * getSNum ; i=i+(getFNum>getSNum?getFNum:getSNum))
 {

    if(i%getFNum==0 && i%getSNum==0)\
    {
        printf("LCM of %d and %d is %d ", getFNum, getSNum , i);
        break;
    }
        
 }

getch();
}