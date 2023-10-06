// 자연수 n 번째의 피보나치 수열 출력

#include <stdio.h>

int a[201]; // 전역 변수 선언

int f(int n){   
	if (a[n]!=0) return a[n]; // 0 여부 검사
	if (n<=2) return 1; //n=1, 2일 때 1 반환
	return a[n] = (f(n-1) + f(n-2)) % 10009; // 각각 n-1, n-2 호출 
}

int main(){   
	int n;
    
	scanf("%d", &n);
    printf("%d", f(n));
    
	return 0;
}