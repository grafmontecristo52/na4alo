#include <stdio.h>
int main() {
	char simv;
	printf("Это пульт управления роботом. Вводите по одному символу для управления.\n");
	scanf(" %c",&simv);

	switch (simv) {
	  case 'w':
	    printf("Робот идет вперед.\n");
	    break;
	  case 's':
            printf("Робот идет назад.\n");
            break;
	  case 'a':
            printf("Робот повернул влево.\n");
            break;
	  case 'd':
            printf("Робот повернул вправо.\n");
            break;
	  default:
	    printf("Команда не распознана.\n");
	    break;
	}   
	  return 0; 
}	
                    
