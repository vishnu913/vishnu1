#include <stdio.h>
int main()
{
    char c;
    printf("\n ");
    scanf("%c",&c);
    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("alphabet.",c);
    else
        printf("no",c);
    return 0;
}
