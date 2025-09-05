#include <stdio.h>
int main() {
    int p1,p2,p3,l1,b1,l2,b2,l3,b3,max;
     printf("Enter length and breadth of first rectangle \n");
     scanf("%d %d",&l1,&b1);
     printf("Enter length and breadth of second rectangle \n");
     scanf("%d %d",&l2,&b2);
     printf("Enter length and breadth of third rectangle \n");
     scanf("%d %d",&l3,&b3);
     p1=2*(l1+b1);
     p2=2*(l2+b2);
     p3=2*(l3+b3);
     max=( p1>p2 && p1>p3) ? p1 : ((p2>p1 && p2>p3) ? p2 : p3);
     if(max==p1)
     printf("greatest perimeter is of first one %d",p1);
     else if(max==p2)
     printf("greatest perimeter is of second one %d",p2);
     else
     printf("greatest perimeter is of third one %d",p3);
     return 0;
}