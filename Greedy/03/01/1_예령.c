#include <stdio.h>

int main(){
	
	int n = 1260;
	int count = 0;
	int i = 0;
	
	int coinTypes[4] = {500, 100, 50, 10};
	
	for(i = 0; i < 4; i++){
		int coin = coinTypes[i];
		count += n / coin;
		n %= coin;
	}

	printf("%d \n", count);
	
	return 0;
}
