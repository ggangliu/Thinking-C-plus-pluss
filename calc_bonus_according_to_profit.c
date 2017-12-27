#include <stdio.h>
#include <stdlib.h>

float calc_bonus_according_profit(int *profit, int limit, float ratio)
{
	float bonus = 0;
	if (*profit > limit) {
		 bonus  = (*profit - limit) * 1000 * ratio / 100;
		*profit -= limit;	
	}

	return bonus;
}
 
int main(int argc, char** argv){
	int  profit = 0; 
	float bonus = 0;
	
	printf("Please input your profit value (W): ");
	(void)scanf("%d", &profit);
	if (profit <=0 ) printf("Please check your profit value(%d), it is an invalid value.", profit);
	
	bonus += calc_bonus_according_profit(&profit, 100, 1);
	bonus += calc_bonus_according_profit(&profit,  60, 1.5);
	bonus += calc_bonus_according_profit(&profit,  40, 3);
	bonus += calc_bonus_according_profit(&profit,  20, 5);
	bonus += calc_bonus_according_profit(&profit,  10, 7.5);
	bonus += calc_bonus_according_profit(&profit,   0, 10);
	
	printf("\nIt's bonus should be %.2f.\n", bonus);
	#if 0 /*help to understand the above code thinking*/ 
		switch (profit){
			case (profit > 100):
				bonus  += (profit - 100) * 0.01;
				profit -= 100;
			case (profit > 60):
				bonus  += (profit - 60) * 0.015;
				profit -= 60;
			case (profit > 40):
				bonus  += (profit - 60) * 0.015;
				profit -= 60; 
			case (profit > 20):
				bonus  += (profit - 60) * 0.015;
				profit -= 60;
			case (profit > 10):
				bonus  += (profit - 60) * 0.015;
				profit -= 60;
			case (profit > 0):
				bonus  += (profit - 60) * 0.015;
				profit -= 60;
			default:
				return 0;
		}
	#endif 
	
	return 0;
}
