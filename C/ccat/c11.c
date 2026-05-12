#include <stdio.h>
int main(){
char *fraza[] = {
	"нормально напиши код.",
	"Пуджик с момом",
	"Террорист смертник!",
	"david goggins aura!",
	"usdt 300",
	"sp500 7000!\n"};


	char s;
	printf("Привет!	Тут я просто пишу код! Не знаю , что , но пишу!\n");
	scanf(" %c", &s);

	short index = 0;

	if (s == 'K' ){
	index = 1;
}
	else if (s == 'M'){
	index = 2;
}
	else if (s == 'T'){
        index = 3;
}
	else if (s == 'D'){
        index = 4;
}
	else if (s == 'U'){
        index = 5;
}
	else if (s == 'P'){
        index = 6;
}


	else{
	printf("чего чего блять?\n"); 
}
	printf("%s\n",fraza[index]);
	return 0;
}
