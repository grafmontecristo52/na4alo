#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	char otvet = ' ';
	printf("Сыграем в SPS?(Y/N)\n");
	printf("Напиши Q для выхода.\n");
	scanf(" %c",&otvet);
	

	if (otvet == 'Y'){
	
	while (otvet != 'Q'){
	char vibor = ' ';
	printf("Ваш выбор?(S(tone),P(aper),Z(cissor)\n");
	scanf(" %c",&vibor);
	
	srand(time(NULL));
	int number = rand() % 101;
	
	
	if (vibor == 'Q'){
        printf("Вы покинули игру.\n");
        break;
	}


	if(number <= 33){
	printf("Computer choose Stone!\n");
	}
	
	else if (number <= 66){     
	printf("Computer choose Paper!\n");
	}
	
	else if (number <= 100){
	printf("Computer choose Scissors!\n");
	}
	

	if(vibor == 'S' && number > 33 && number < 66){
	printf("You lose!\n");
	}
	else if(vibor == 'S' && number <= 33){
	printf("Draw!\n");
	}
	else if (vibor == 'S' && number >= 66){
	printf("You win!\n");
	}
	


	if(vibor == 'P' && number > 66 && number < 100){
	printf("You lose!\n");
	}	
	else if(vibor == 'P' && number <= 66 && number >= 33){
	printf("Draw!\n");
	}
	else if (vibor == 'P' && number <= 33 ){
	printf("You win!\n");
	}
	

	if(vibor == 'Z' && number < 33){
	printf("You lose!\n");
	}
	else if(vibor == 'Z' && number > 66){
	printf("Draw!\n");
	}
	else if(vibor == 'Z' && number > 33 && number < 66){
	printf("You win!\n");
	}



	if (vibor == 'Q'){
	printf("Вы покинули игру.\n");
	break;
	}
	
	}
	
	}
	return 0;
}
