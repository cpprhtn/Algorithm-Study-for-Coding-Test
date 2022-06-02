#include <stdio.h>
#include <stdlib.h>



int main(void){
	int N,M,K; //M: 숫자가 더해지는 횟수, K: 초가 제한
	printf("N, K, M을 공백으로 구분하여 입력하시오.");
	scanf("%d %d %d",&N, &M, &K);
	
	int N_arr[N];// N: 배열의 크기
	
	int i, j, temp;
	int result = 0; 
	printf("%d개의 숫자를 공백으로 구분하여 입력해주세요:", N);
	// 배열에 원소 추가 
	for( i=0; i<N; i++){
		scanf("%d", &N_arr[i]);
	}
	
	//입력된 배열 확인 
	printf("입력된 수는");
	for(i=0; i<N; i++){
		
		printf("%d ", N_arr[i]);
	} 
	printf("입니다.\n");
	
	for(i =0; i<N; i++){
		for(j=i+1; j<N; j++){
			if(N_arr[i]>N_arr[j]) {
				temp = N_arr[i];
				N_arr[i]=N_arr[j];
				N_arr[j]=temp;
			}
		}
	} 
	
	 
	printf("정렬된 수는");
	for(i=0; i<N; i++){
		
		printf("%d ", N_arr[i]);
	} 
	printf("입니다.\n");
	
	printf("%d %d ", N_arr[N-1],N_arr[N-2]);
	while(1){
		for(i=0; i<K; i++){
			if(M==0){
				break;
			}
			M -=1;
			result += N_arr[N-1];
		}
		result += N_arr[N-2];
		
		M-=1;
		if(M==0){
			break;
		}
		
	}
	
	printf("%d",result);
	
	return 0;
	
	
	
}
