#include <stdio.h>
int main(){
	int i, n;
	for(i=1;i<=10;i++){
		printf("\n Bang cuu chuong %d\n", i);
		for(n=1;n<=10;n++){
			printf("%d * %d = %d\n", i, n, i*n);
		}
	}
	return 0;
}
