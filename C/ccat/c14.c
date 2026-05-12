#include <stdio.h>
int main() {
	char simvol;
	printf("Введите ваш символ: ");
	scanf(" %c",&simvol);
	if (simvol >= '0' && simvol <= '9') {
	printf("Это цифра.\n");
      } else if (simvol == 'a' || simvol == 'e' || simvol == 'i' || simvol == 'o' || simvol == 'u') {
	printf("Это гласная.\n");
      } else {
        printf("Это другой символ.\n");
      }
	return 0;	
}
