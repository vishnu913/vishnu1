#include <stdio.h>
 
int main()
{
   int n, reverse = 0, t;
 
   scanf("%d", &n);
 
   t = n;
 
   while (t != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + t%10;
      t = t/10;
   }
 
   if (n == reverse)
      printf("yes\n", n);
   else
      printf("no\n", n);
 
   return 0;
}

