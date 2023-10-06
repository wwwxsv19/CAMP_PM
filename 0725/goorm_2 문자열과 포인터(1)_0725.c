/*
#include <stdio.h>
int main() {
	char* s = "world";
	printf("%08X %08X %08X %s\n", &s, s, &s[0], s); // 각각 s의 주소, s 가 가리키는 주소 1, 2, s의 값
	for(int i=0; s[i]!='\0'; i++){
		printf("%08X %c\n", &s[i], s[i]); // 'w' 'o' 'r' 'l' 'd' 의 각 주소와 값
	}

	return 0;
}
*/

#include <stdio.h>
void outputArray(int* p, int n){
	for(int i=0; i<n; i++){
		printf("%d %d\n", p[i], *(p+i)); //size만큼 array 의 i번째 인덱스의 값을 배열ver 과 포인터ver 로 출력
	}
}

int main(){
	int array[3] = {10, 20, 30};
	int size = sizeof(array) / sizeof(array[0]); // array 의 요소 개수 추출 방법
	
	outputArray(array, size); // array[0] & array 요소 개수
	
	return 0;
}