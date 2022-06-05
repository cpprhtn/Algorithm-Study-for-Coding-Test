#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int n, m, k, cnt;
int result = 0;
int* v;

int compare(const void* a, const void* b) {
	return (*(int*)a) - (*(int*)b) >= 0 ? ((*(int*)a) - (*(int*)b) == 0 ? 0 : 1) : -1;
}

int main()
{
	scanf("%d %d %d", &n, &m, &k);
	v = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
	qsort(v, n, sizeof(int), compare);

	cnt = (m / (k + 1)) * k;
	cnt += m % (k + 1);

	result += cnt * v[n - 1];
	result += (m - cnt) * v[n - 2];

	printf("%d\n", result);

	free(v);
}