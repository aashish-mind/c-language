main()
{
int a[10],i,sum=0,avg;
printf("enter 10 numbers");
for (i=0;i<=9;i++)
scanf("%d",&a[i]);

for(i=0;i<=9;i++)
sum = sum+a[i];
printf("sum is %d\n",sum);
avg= sum/10;
printf("avg is %d",avg);
getch();

}
