#include <stdio.h>
 
void main()
{
    int num;
 
    printf("\n");
    scanf("%d", &num);
    if (num > 0)
        printf("%d  positive\n", num);
    else if (num < 0)
        printf("%dnegative \n", num);
    else
        printf(" zero");
}
