#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if((a * 60) + b >= (c * 60) + d){
		printf("Yes");
	}
	else{
		printf("No");
	}
	
	return 0;
} 