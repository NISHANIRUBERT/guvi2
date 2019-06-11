#include <stdio.h>
#include<string.h>
int main(void) {
	int num,number;
	long long int fact=1;
	scanf("%d",&num);
	for(number=1;number<=num;number++)
	fact=fact*number;
	printf("%lld",fact);
	
	return 0;
}
