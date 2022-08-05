#include<stdio.h>
#include<math.h>
int main()
{
    int R,A,S;
    printf("enter the radius of circle");
    scanf("%d",&R);
    S=pow(R,2);
    A=3.14*S;
    printf("AREA OF CIRCLE IS %d HAVING RADIUS %d",A,R);
    printf("\n");
    return 0;
}