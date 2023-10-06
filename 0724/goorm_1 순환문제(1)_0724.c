/* 

이 반복문을 재귀함수로 바꾸어 작성해 보자.

int sum=0;
for(int i=n; i>=1; i--){
   sum = sum + i;	
}

*/

#include <stdio.h>

int f(int n){
	if(n==1) return 1;
	else{
		return n + f(n-1);
	}
}

int main (){
   int n;
   
   scanf("%d", &n);
   printf("%d", f(n));

   return 0;
}