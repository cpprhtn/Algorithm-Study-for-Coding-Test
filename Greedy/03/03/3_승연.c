//���� 98������
 
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
			scanf("%d", &a); //%d�ڿ� ���� �ϸ� �ȵ�(�Է��ϳ����޾ƾ� ��µǱ� ������) 
			if (min > a) {
				min = a;
				arr[j] = min;
			}
		}
		for (k = 0; k < m; k++) {
			if (arr[j] <= arr[k]) max_of_min = arr[k];
		}
	}
	
	//�׽�Ʈ 
	/*for(i=0;i<m;i++){
		printf("%d ", arr[i]); //1 1 2
	}*/

	printf("\n%d\n", max_of_min); //�� 0? ->�ذ�:<=��� 

	return 0;
}

