#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 100
typedef int element; //int를 element 로 정의

typedef struct STACK{
	int top;
	int data[MAX];
}stack;

stack s;

void initStack(){
	s.top = -1;
}

bool isEmpty(){
	return s.top == -1;
}
bool isFull(){
	return s.top == MAX-1;
}

void push(element item){
	if (isFull()) return ;
	else s.data[++s.top] = item; // top 의 초기값이 -1 이므로 증가 후에 대입
}

element pop(){ // pop 은 값 반환 후 해당 값을 제거한다
	if(isEmpty()) exit(1);
	else return s.data[s.top--]; // 해당 값 도출 후 값 제거를 위해 top 감소
}

element peek(){ // peek 은 값 반환만 수행한다
	if (isEmpty()) exit(1);
	else return s.data[s.top];
}

int main(){	
	push(1);
	push(2);
	push(3);

	printf("%d\n",pop());
	printf("%d\n",peek());
	printf("%d\n",pop());
	
	return 0;
}