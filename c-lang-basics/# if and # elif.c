#include<stdio.h>

#define age 17
void main()
{
#if age>=18
 printf("\neligible for vote");
 #else
 printf("not eligible for vote");
#endif // age

}
