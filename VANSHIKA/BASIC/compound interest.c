#include <stdio.h>
int main()
{
    int p,r,n,c;
    printf("enter principal amount:");
    scanf("%d",&p);
    printf("\n enter rate of interest:");
    scanf("%d",&r);
    printf("\n enter number of years:");
    scanf("%d",&n);
    c=p*(pow((1 + r / 100), n));
    printf("\n compound interest:%d ",c);
    return 0;
}
