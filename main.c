#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=59;
	int k, trial;
		
	do {
		 printf("input a number:");
		scanf("%d",&k);
		
		if(answer>k)
			printf("low!\n");
		else if(answer<k)
			printf("high!\n");
		
		trial++;
	
	}while(k !=answer); //k가 answer과 일치하지 않으면 반복하러 위로 올라가라. 
	
	printf("Congratulations, number of trials is %d",trial); 
	
	return 0;
	
}
