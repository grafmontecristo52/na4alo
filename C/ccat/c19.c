#include <stdio.h>


void privet();
int sum();
int xxx();
int dele();
int um();
char simvol();
int main(){
	privet();
	int summ = sum(3331231, 412412);
	printf("%d\n",summ);
	int minu = xxx(100, 22);
	printf("%d\n",minu);
	int del = dele(100,2);
	printf("%d\n",del);
	int umo = um(22, 34);
	printf("%d\n",umo);
	char sis = simvol(A);
	scanf(" %c", sis);
	printf(" %c", sis);
	return 0;
}
void privet(){
	printf ("Всем привет!\n");
}
int sum(int a,int b){
	int res = a + b;
	return res;
}
int xxx(int a,int b){
	int res = a - b;
	return res;
}
int dele(int a, int b){
	int res = a / b;
	return res;
}
int um(int a, int b){
	int res = a * b;
	return res;
}
char simvol(char sikl){

	char sikl = 'A';
	return sikl;
}
