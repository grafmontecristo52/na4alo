#include<stdio.h>
int main() {
	char *otvet;
		printf("Привет!Сыграем в камень ножницы бумага?\n");
		printf("Напиши да , если хочешь сыграть или нет , если хочешь выйти.\n");
		scanf("%s", otvet);
		
		
		if (otvet == "да" || otvet == "Да") {
		printf("Начинаем!");
		}
		else {
		}



return 0;
}
