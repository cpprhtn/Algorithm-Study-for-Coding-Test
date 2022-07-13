//코테 98페이지
 
#include<stdio.h>

int main() {
	int i,j,k;
	int n, m, a;
	int arr[100] = { 0, };
	int max_of_min = 0;
	scanf("%d %d", &n, &m);
	for (j = 0; j < m; j++) {
		int min = 10001, max = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &a); //%d뒤에 띄어쓰기 하면 안됨(입력하나더받아야 출력되기 때문에) 
			if (min > a) {
				min = a;
				arr[j] = min;
			}
		}
		for (k = 0; k < m; k++) {
			if (arr[j] <= arr[k]) max_of_min = arr[k];
		}
	}
	
	//테스트 
	/*for(i=0;i<m;i++){
		printf("%d ", arr[i]); //1 1 2
	}*/

	printf("\n%d\n", max_of_min); //왜 0? ->해결:<=사용 

	return 0;
}

