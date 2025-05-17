#include <stdio.h>

int main(void)
{
	int N, K;
	
	scanf("%d %d", &N, &K);
	
	int i, j;
	int A[N];
	int sum = 1;
	int num = 1;
	for(i = 0; i < N; i++){
		scanf("%d", &A[i]);
			sum *= A[i]; 
		for(j = 0; j < K; j++){
			num *= 10;
			if(sum > num){
				sum = 1;
			}
		}
	}
	
	printf("%d", sum);
	
	return 0;
}