#include<stdio.h>
#include<string.h>

typedef struct{ // 전역에 구조체 정의
	char name[10];
	int age;
} Ps;

void inputData(Ps *p){
	scanf("%s", p->name);
	scanf("%d", &p->age);
}

void outputData(Ps *p){
	printf("%s, ", p->name);
	printf("%d\n", p->age);
} 

int main(){
	Ps p[3];
		
	for(int i=0; i<3; i++){
		inputData(&p[i]);
	}
	
	for(int i=0; i<3; i++){
		outputData(&p[i]);
	}

	return 0;
}