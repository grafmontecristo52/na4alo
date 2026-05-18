#include <stdio.h>
int main(){

	double a, b;
	char oper;

	printf("Введите числа и операцию , чтобы получить нужный результат!\n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf(" %c",&oper);
	switch (oper){
		case '+':
	double resp = a + b;
	printf("%.2lf\n",resp);
	break;
		case '-':
	double resm = a - b;
	printf("%.2lf\n",resm);
	break;
		case '*':
	double resy = a * b;
	printf("%.2lf\n",resy);
	break;
		case '/':
	double resd = a / b;
	printf("%.2lf\n",resd);
	break;
		default:
	printf("Не распознано.\n");
	break;
	}

	return 0;
}
