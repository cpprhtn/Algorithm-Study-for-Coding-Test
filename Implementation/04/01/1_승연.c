//���� 112������

#include<stdio.h>
int main(){
	
	int n, x=1, y=1, i, j, nx=0, ny=0;
	char plan[100]={0,};
	scanf("%d\n", &n);
	for(i=0;i<100;i++){ // = gets(plan); (���־�Ʃ����� gets_s(plan); 
		scanf("%c", &plan[i]);
		if(plan[i]=='\n') break; // ����Ű  �Է½� �Է¹ޱ� ���� 
	}
	
	int dx[4]={0,0,-1,1};
	int dy[4]={-1,1,0,0};
	char move[4]={'L','R','U','D'};
	
	for(i=0;i<sizeof(plan)/sizeof(char);i++){ //sizeof�̿��ؼ� plan�迭 ũ�⸸ŭ = strlen(plan) 
		//printf("%c", plan[i]);
		for(j=0;j<4;j++){
			if(plan[i]==move[j]){
				nx=x+dx[j];
				ny=y+dy[j];
			}
		}
		if(nx<1 || ny<1 || nx>n || ny>n) continue;
		x=nx, y=ny;
	}
	printf("\n%d %d\n", x, y);
	return 0;
}
