#include<stdio.h>

int main() {
	int N, M, K;
	int i, j;
	int tmp=0;
	int num[1000] = { 0, };
	int result=0;
	scanf("%d %d %d", &N, &M, &K);
	for(i=0;i<N;i++){
		scanf("%d", &num[i]);
	}
	for (i = 0; i < N; i++) {
		for(j=i+1;j<N;j++){
			if(num[i]<=num[j]) {
			tmp=num[i];
			num[i]=num[j];
			num[j]=tmp;
			}
		}
	}
	while(1){
		for(i=0;i<K;i++){
			if(M==0) break;
			result+=num[0];
			M-=1;
		} //18 41
		if(M==0) break; //5 1
		result+=num[1]; //23 46
		M-=1; //4 0
	}
	printf("%d\n", result);
	
	return 0;
}
