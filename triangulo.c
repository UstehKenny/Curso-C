#include <stdio.h>
#include <stdlib.h>

int es_o_no(int a, int b, int c){
	if ( (a+b)>c && (a+c)>b && (b+c)>a)
		printf("Es un triangulo\n");	
	else
		printf("No es un triangulo\n");

}

int main(){
	
	int a,b,c;
	printf("Introduce los lados del triangulo\n");
	scanf("%d%d%d",&a,&b,&c);
	es_o_no(a,b,c);
	
	
	
	return 0;
}
