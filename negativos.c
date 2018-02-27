//Negativos, ceros y positivos
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,j,aux,c = 0;
	int arr[20];
	printf("Ingrese los numeros y cuando termine ponga un 0 \n");
	for (i=0;i<20;i++){
		scanf("%d",&arr[i]);
		c++;
		if (arr[i] == 0)
		   break;		
	}	
	for(i=1; i<c; i++) {
 			 j = i;
			 aux = arr[i];
			 while(j>0 && aux<arr[j-1]) {
			 		   arr[j] = arr[j-1];
					   j=j-1;
  			   }		
	   arr[j] = aux;
		  }
     printf("Los elementos del arreglo son: \n");
	 for(i=0; i<c; i++) {
	 		  printf("%d\t",arr[i]);
      }		
	return 0;
}
