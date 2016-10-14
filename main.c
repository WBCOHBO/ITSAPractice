#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int hour1,min1,hour2,min2,Min,dollar,i,count;
	scanf("%d",&count);
	for(i=1;i<=count;i++){
	scanf("%d %d",&hour1,&min1);
	scanf("%d %d",&hour2,&min2);
	Min=((hour2*60)+min2)-((hour1*60)+min1);
	
	if((Min/30)<4){
		dollar=(Min/30)*30;
		printf("%d",dollar);
	}else if((Min/30)>4 && (Min/30)<8){
		dollar=120+(((Min-120)/30)*40);
		printf("%d",dollar);
	}else if((Min/30)>8){
		dollar=120+160+(((Min-240)/30)*60);
		printf("%d",dollar);
	}
	}
	
	
	
	return 0;
}
