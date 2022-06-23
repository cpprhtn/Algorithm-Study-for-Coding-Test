#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int N, K;
int cnt = 0;
int main() {
	scanf("%d %d", &N, &K);
	for (;;) {
		int t = (N / K) * K;
		cnt += N - t;
		N = t;
		if (N < K)
			break;
		cnt += 1;
		N /= K;
	}
	cnt += N - 1;
	printf("%d", cnt);
}