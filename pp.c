#include<stdio.h>
int main(void) {
    int a,i=1,sum=0;
    while (i<=5) {
        scanf("%d",&a);
        i++;
        sum+=a;
    }
    printf("sum=%d",sum);
    double average=(double)sum/5;//sum和5都是int，先做整数除法再转double（double）必不可少
    printf("average is %.2f",average);
    return 0;

}
