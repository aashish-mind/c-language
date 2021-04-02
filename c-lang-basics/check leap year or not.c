/// program to find whether a year is leap year or not

main()
{
    int y;

    printf("enter a year = ");
    scanf("%d",&y);

    if(y%100==0)
    {  if(y%400==0)
         printf("%d is a leap year",y);
      else
         printf("%d is not a leap year ",y);
    }
    else
        { if(y%4==0)
          printf("%d is a leap year",y);
          else
            printf("%d is not a leap year",y);

        }
}
