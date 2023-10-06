#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	int x;
	int y;
} pt;

int main() {
	pt* pt1 = (pt*)malloc(sizeof(pt));
	pt* pt2 = (pt*)malloc(sizeof(pt));
	
	double dtc;
	
	scanf("%d %d", &pt1->x, &pt1->y);
	scanf("%d %d", &pt2->x, &pt2->y);
	
	printf("(%d, %d)\n", pt1->x, pt1->y);
	printf("(%d, %d)\n", pt2->x, pt2->y);
	
	dtc = sqrt(pow((pt2->x - pt1->x), 2.0) + pow((pt2->y - pt1->y), 2.0));
	
	printf("%.2f", dtc);
	
	return 0;
}
