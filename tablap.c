#include <stdio.h>
#include <stdlib.h>

int main (){
	int i, j, n;
	puts("Introduce hasta que numero para multiplicar");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++)
			printf("%d\t",i*j);
		puts("");
	}
	return 0;
}

