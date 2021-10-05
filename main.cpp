#include<stdio.h>
#define pi 3.14

int main()
{
char num1='hai',num2='bye',temp;

temp=num1;
num1=num2;
num2=temp;


printf("Num1 : %c", num1);
printf("\nNum2 : %c", num2);

return 0;


}
