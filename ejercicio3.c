#include "stdio.h"
#include "omp.h"

int main(){
	
	char palabra[9]="reconocer";
	int i=0;
	int f=8;
	int sw=1;
	
	
	#pragma omp parallel shared(sw,i,f,palabra)
	while (i<=f){
		if(palabra[i]!=palabra[f]){
			sw=0;
		}	
		i=i+1;
		f=f-1;
		
		//printf("%d %d %d\n", i,f,sw);
	}
	if(sw==1){
		printf("verdad\n");
	}else{
		printf("falso\n");
	}
	
}
