#include<stdio.h>
int main()
{
int a;
int b;
char oper;
	printf("Введите первое число:");
	scanf("%d", &a);
	printf("Введите второе число:");
	scanf("%d", &b);
switch (oper) {
    case '+': 
        printf("%d", a + b); 
        break;
    case '-': 
        printf("%d", a - b); 
        break;
    case '*':
	printf("%d", a * b);
	break;
    case '/':
	printf("%d", a / b);
	break;	
}
return 0;
}
