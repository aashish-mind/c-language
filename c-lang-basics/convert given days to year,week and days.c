/// to convert given days to year ,week and days
main()
{
    int noofdays,year,week,days;

    printf("enter total number of days = ");
    scanf("%d",&noofdays);

    year=noofdays/365;
    week=(noofdays%365)/7;
    days=(noofdays%365)%7;

    printf("year=%d, week=%d, days=%d",year,week,days);
}
