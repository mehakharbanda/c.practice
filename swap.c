#include <stdio.h>
int main() {
    int x,y;
    printf("enter two integers: ");
    scanf("%d %d",&x,&y);
    printf("before swapping first variable=%d\n before swapping second variable=%d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swapping first variable=%d\n after swapping second variable=%d",x,y);
    return 0;
}
