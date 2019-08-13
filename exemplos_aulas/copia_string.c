#include<stdio.h>

int main(){
	
	char s1[15],s2[15];
	int a,b;

	printf("%s %s",s1,s2);
	
	for(a=0;a<10;a++){
		for(b=0;b<10;b++){
			s2[b] = s1[a];
		}
	}

	printf("%s %s",s1,s2);
}