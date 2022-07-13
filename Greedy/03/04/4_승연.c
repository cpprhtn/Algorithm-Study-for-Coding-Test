//코테 102페이지
 
#include<stdio.h>

int main() {
	int n, k, result=0;
	scanf("%d %d", &n, &k);
	while (1) {
		int target = (n / k) * k;
		result += (n - target);
		n = target;
		if (n < k) break;
		result += 1;
		n /= k;
	}
	result += (n - 1);
	printf("%d", result);
	return 0;
}
