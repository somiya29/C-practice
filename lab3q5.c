#include <stdio.h>
int main() {
    int len,wid;
    printf("enter length and width of rectangle");
    scanf("%d %d", &len ,&wid);
    int area = len*wid;
    int peri = 2*len + 2*wid;
    printf("%d %d" , area, peri);
    return 0;
}