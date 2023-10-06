#include <stdio.h>
#include <stdlib.h>

int maxh(int* num, int n){
	int maxn = -1;
	for(int i=0; i<n; i++){
		if(maxn <= *(num+i))
			maxn = *(num+i);
	}
	return maxn;
}

int main(){
	int n;
	int* num;
	scanf("%d", &n);
	
	num = (int*)malloc(sizeof(int)*n);
	
	for(int i=0; i<n; i++){
		scanf("%d", (num+i));
	}

	printf("%d\n", maxh(num, n));
	free(num);
	
	return 0; 
}