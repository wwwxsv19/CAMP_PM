// 어떤 10진수가 입력되면 재귀를 통해 2진수로 변환 출력해 보자.

#include <stdio.h>

int f(int n){
	if(n==0) return 0;
	f(n/2);
	printf("%d", n%2);
}

int main(){
	int n;

	scanf("%d", &n);
	f(n);
	
	return 0;
}
