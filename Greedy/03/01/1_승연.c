#include<stdio.h>
int main() {
	int i;
	int n = 1260;
	int count = 0;
	int coin[4] = { 500,100,50,10 };
	for (i = 0; i < 4; i++) {
		count += n / coin[i]; //2 2 1 1
		n %= coin[i]; //260 60 10 0
	}
	printf("%d\n", count);

	return 0;
}
