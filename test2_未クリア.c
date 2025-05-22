#include <stdio.h>

int main(void)
{
    int N, K;
	int i;
    scanf("%d %d", &N, &K);

	long long A[N];
    for(i = 0; i < N; i++){
        scanf("%lld", &A[i]);
    }
	
	long long limit = 1;
    for(i = 0; i < K; i++){
        limit *= 10;
    }
	limit--;

        
    long long sum = 1;
	for(i = 0; i < N; i++){
        if(sum > limit / A[i]){
            sum = 1;
        }
        else{
            sum *= A[i];
        }
    }

    printf("%lld", sum);

    return 0;
}