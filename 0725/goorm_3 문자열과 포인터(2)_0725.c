#include <stdio.h>
unsigned int myStrlen(const char* str){
	int i;
	for(i=0; *(str+i)!='\0'; i++){}
	return i;
}

int main() {
	char* arr; //문자형 포인터 변수 선언
	arr = (char*)malloc(100); // 최대 100byte 동적할당	
	
	printf("문자열을 입력하세요 : \n");
	scanf("%s", arr);
	printf("문자열의 길이는 %d 입니다.\n", myStrlen(arr));
	
	return 0;
}