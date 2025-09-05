#include <stdio.h>
int main() {
 char name;
 int age;
 printf("Enter name");
 scanf("%c", &name);

 printf("Enter age");
 scanf("%d", &age);
  
 printf("Hello %c\n",name);
 printf("You are %d years old.\n",age);

 return 0;
}