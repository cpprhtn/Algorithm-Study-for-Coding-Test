#include <stdio.h>
#include <stdlib.h>
int main(void){
	int count, n, coin;
	count = 0;
	scanf("%d", &n);
	

	int arCoins[4]={500,100,50,10};
	for(int i=0; i<sizeof(arCoins)/sizeof(arCoins[0]); i++){
		coin = arCoins[i];  // 500, 100
		count += n/coin;    // 돈 1260/500 = 2
		n %= coin;			// 1260%500 = 260
		
	}
	
	printf("%d", count);
	
	// 8000원을 받았고 거슬러줄 잔돈으로 500 400 100 이있을때
	// 500 100 100 을 거슬러주는 것이 아닌 400 400을 거슬러주게 하는 알고리즘은? 
	
	
	
	
	
	
}
