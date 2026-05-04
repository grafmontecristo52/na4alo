#include <stdio.h>
int main()
{
    int gold = 52;
    int hp_goblin = 3;
    char action;

    printf("You attacked by goblin. 'A'ttack or 'R'un\n");
    
    action = getchar();
    
    while (action != 'r' && action != 'R')
    {
    {
     printf("You attacked goblin!\n");
     hp_goblin = hp_goblin - 1;
     printf("Goblin HP: %d\n", hp_goblin);
     hp_goblin = hp_goblin - 1;
     printf("You attacked goblin!\n");
     printf("Goblin HP: %d\n", hp_goblin);
     printf("You attacked goblin!\n");
     hp_goblin = hp_goblin - 1;
	    }
    if (hp_goblin == 0)
    {
	printf("Goblin dead..You earn %d\n", gold);
    	return 0;
    }
    else
    {
    printf("Goblin run away\n");
    }	    
    printf("Next move?\n");
    getchar();
	}
    printf("You run off..");
    return 0;
}
