#include <stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Enter the coordinates of the first point \n");
    scanf("%d %d",&x1,&y1);
    printf("Enter the coordinates of the second point \n");
    scanf("%d %d",&x2,&y2);
    printf("Enter the coordinates of the third point \n");
    scanf("%d %d",&x3,&y3);
    if((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2))
    printf("Collinear points ");
    else
    printf("Not collinear points");
    return 0;

}