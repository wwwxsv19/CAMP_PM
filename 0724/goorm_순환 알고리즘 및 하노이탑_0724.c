#include <stdio.h>
// 하노이탑 코드 시작 줄 : 54

/*
// 순환 1
int sum(int n){
	printf("%d\n", n);
	if(n<1) return 1;
	else return (n+sum(n-1));
}

// 순환 2 
int recursive(int n){
	printf("%d\n", n);
	if(n<1) return 2;
	else return (2 * recursive(n-1)+1);
}

// 순환 3
int recursive(int n){
	printf("%d\n", n);
	if(n<1) return -1;
	else return (recursive(n-3)+1);
} 

// 순환 4
int f(int a){
	if(a==1) return 1;
	if(a==0) return 1;
	return f(a-1)+f(a-2);
} 

// 순환 5
int asterisk(int i){
	if(i>1){
		asterisk(i/2);
		asterisk(i/2);
	}
	printf("*");
} 

// main 
int main(){
	// sum(5); // 순환 1
	// recursive(5); // 순환 2 
	// recursive(10); // 순환 3 
	//printf("%d", f(3)); // 순환 4 
	asterisk(5); // 순환 5 
	
	return 0;
}
*/

int count=0;

void hanoi(int n, char a, char b, char c){
	if(n==1){
		printf("%d : %c -> %c\n", ++count, a, c);
	}
	else{
		hanoi(n-1, a, c, b);
		printf("%d : %c -> %c\n", ++count, a, c);
		hanoi(n-1, b, a, c);
	}
}

int main(){
	int n = 4;
	hanoi(n, 'A', 'B', 'C');
	
	return 0;
}
