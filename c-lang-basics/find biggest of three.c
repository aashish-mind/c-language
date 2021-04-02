/// program to find biggest of three numbers
main()
{ int a,b,c;

printf("enter three numbers = \n");
scanf("%d%d%d",&a,&b,&c);

if(a>b&&a>c)
   { printf("a is bigger = %d",a);
   }
else
    if(b>c)
     { printf("b is bigger = %d",b);}
     else
        printf("c is bigger = %d",c);

}
