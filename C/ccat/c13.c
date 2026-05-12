#include<stdio.h>
int main() {
int sump;
	printf ("Здравствуйте! Я помогу вам рассчитать скидку исходя из суммы вашей покупки! Введите сумму на которую вы приоберли товары:");
	scanf ("%d",&sump);
	if (sump < 1000 && sump >= 1) {
	 printf("Скидки нет.\n");
      } else if (sump >= 1000 && sump <= 5000) {
	 printf("Скидка 5%%.\n");
      }	else if (sump > 5000) {
         printf("Скидка 10%%.\n");
      } else if (sump <= 0) {
         printf("Ваша сумма равна 0 или отрицательна.\n");
      }	else {
	 printf("Ошибка!\n");
      } return 0;
}
