main(){
int a[3][3],b[3][3],s[3][3],i,j;

printf("enter 9 numbers for first matrix\n");
for(i=0;i<=2;i++)
{ for(j=0;j<=2;j++)
{  scanf("%d",&a[i][j]);
}}

printf("enter 9 numbers for second matrix\n");
for(i=0;i<=2;i++)
{ for(j=0;j<=2;j++)
{  scanf("%d",&b[i][j]);
}}

printf("sum of matrices is\n");
for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
{
    s[i][j]=a[i][j]+b[i][j];
    printf(" %d",s[i][j]);

}
 printf("\n");

}
}


