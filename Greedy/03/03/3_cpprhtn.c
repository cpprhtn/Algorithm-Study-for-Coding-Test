#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int N, M;
int** v;
int MAX = 0, MIN;

int main()
{
	scanf("%d %d ", &N, &M);
	v = (int**)malloc(sizeof(int*) * N);
	v[0] = (int*)malloc(sizeof(int) * M * N);

	for (int i = 1; i < N; i++) {
		v[i] = v[i - 1] + M;
	}

	for (int i = 0; i < N; i++) {
		MIN = 10000;
		for (int j = 0; j < M; j++) {
			scanf(" %d", &v[i][j]);
			MIN = MIN > v[i][j] ? v[i][j] : MIN;
		} 
		MAX = MAX < MIN ? MIN : MAX;
	}

	printf("%d\n", MAX);

	free(v[0]);
	free(v);
}