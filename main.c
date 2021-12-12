#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	printf("I have in mind a number in between 1 and 100, can you find it?\n");
	int n = rand() % 100;
	int e = 0;
	scanf("%d",&e);
	while(n != e){
		if(e < n){
			printf("The number to guess is higher\n");
			scanf("%d",&e);
		}
		else if(e > n){
			printf("The number to guess is lower\n");
			scanf("%d",&e);
		}
	}
	printf("You just found the number, it was indeed %d\n", n);
	return 0;
}