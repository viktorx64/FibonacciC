#include <stdio.h>


int preNum = 0;
int newNum = 1;
int num;
int i = 1;
int max;

int main() {

	printf("input how long it shall be:");
	scanf("%d", &max);
	while(i<=max) {
		num = (preNum + newNum);
		preNum = newNum;
		newNum = num;
		printf("%d", num);
		printf(", ");
		i++;
	}
	return 0;
}
