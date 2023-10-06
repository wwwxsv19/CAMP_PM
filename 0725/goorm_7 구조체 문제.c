#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	int stnb;
	int sc1;
	int sc2;
	int sum;
	double avg;
}sc;

int main() {
	int n;
	scanf("%d", &n);
	
	sc* score = (sc*)malloc(sizeof(sc)*n); // 구조체 배열 선언 시 이런 식으로...
	
	for(int i=0; i<n; i++){
		scanf("%d %d %d", &score[i].stnb, &score[i].sc1, &score[i].sc2); // 배열을 포인터로 가리킬 땐 화살표(->) 말고 온점(.)!
		score[i].sum = score[i].sc1 + score[i].sc2;
		score[i].avg = score[i].sum/2.0;
	}
	
	for(int i=0; i<n; i++){
		printf("%d %d %.1f\n", score[i].stnb, score[i].sum, score[i].avg);
	} 

	return 0;
}
