#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char *argv[]){
	srand(time(NULL));
	if(argc == 1){
		printf("I have in mind a number in between 1 and 100, can you find it?\n");
		int n = rand() % 100;
		int e = 0;
		scanf("%d",&e);
		while(n != e){
			if(e > 0 && e <= 100){
				if(e < n){
					printf("The number to guess is higher\n");
					scanf("%d",&e);
				}
				else if(e > n){
					printf("The number to guess is lower\n");
					scanf("%d",&e);
				}
			}
			else{
				printf("Invalid argument\n");
				return 1;
			}
			
		}
		printf("You just found the number, it was indeed %d\n", n);
		return 0;
	}
	else if(atoi(argv[1])!=0){
		int n = rand() % atoi(argv[1]);
		int e = 0;
		printf("I have in mind a number in between 1 and %d, can you find it ?\n",atoi(argv[1]));
		scanf("%d",&e);
		while(n != e){
			if(e > 0 && e <= atoi(argv[1])){
				if(e < n){
					printf("The number to guess is higher\n");
					scanf("%d",&e);
				}
				else if(e > n){
					printf("The number to guess is lower\n");
					scanf("%d",&e);
				}
			}
			else{
				printf("Invalid argument");
				return 1;
			}
		}
		printf("You just found the number, it was indeed %d\n", n);
			return 0;
	}
}
