#include <stdio.h>
int main()
{
 int a = 6, b = 9, n;
 printf("Before swapping: a = %d, b = %d\n", a, b);
 n=a;
 a=b;
 n=b;
 printf("after swapping: a=%d,b=%d\n",a,b);
 return 0;

}
