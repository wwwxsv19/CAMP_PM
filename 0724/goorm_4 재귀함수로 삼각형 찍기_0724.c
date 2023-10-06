// 재귀함수로 별 찍기 구현

#include <stdio.h>
// '*'을 k 개 만큼 찍는 함수
void star(int k){ 
	if(k==0) return;
	printf("*");
	star(k-1);
}

// n줄 삼각형을 완성하는 재귀함수
void lprint(int n, int k){ 
	if(n==0) return; // 종료 조건 지정 (n--로 n개의 줄 완성 중)
  	star(k);   // 재귀함수 호출
	printf("\n");    // 줄바꿈
	lprint(n-1, k+1); // 재귀 호출 (n-- : n개의 줄 / 줄마다 별 개수 증가 = k++)
}

int main(){
	int n, k = 1;
	scanf("%d",&n);

	lprint(n, k);
	
	return 0;
}