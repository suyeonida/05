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
	
	}while(k !=answer); //k�� answer�� ��ġ���� ������ �ݺ��Ϸ� ���� �ö󰡶�. 
	
	printf("Congratulations, number of trials is %d",trial); 
	
	return 0;
	
}
