#include <stdio.h>
#define tam 5

int main(){
	int x[tam],a,b,vet,aux;

	for(a = 0;a<tam;a++){
		scanf("%d",&x[a]);
	}

	for(a =0; a<tam;a++){
		for(b = 0;b<tam;b++){
			if(x[a]<x[b]){
				aux = x[a];
            	x[a] = x[b];
            	x[b] = aux;
			}

		}
	}

	printf("Vetor ordernado:\n");

	for(a=0;a<tam;a++){
		printf("%d\n",x[a]);
	}

	return 0;
}
