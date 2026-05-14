#include <stdio.h>

void tekst();
int main(){
	tekst();

	return 0;
}


void tekst(){
char *arr[] = {"Если я сдамся, то в чем смысл?\n",
	      "Я смог\n",
		"Только тот кто осознает свою привлекательность , становится привлекательным для других. Гете\n"};
int index = 0;
	printf("Введите номер индекса от нуля до 2.\n");
	scanf("%d",&index);
	if (index == 1){
	index = 1;
	}
	if (index == 2){
	index = 2;
	}
	printf("%s",arr[index]);

}	
