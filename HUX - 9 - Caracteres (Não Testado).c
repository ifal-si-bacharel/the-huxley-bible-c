#include <stdio.h>

int main(){
	int i,n;
	char nome[10000];
	
	scanf("%d",&n);
	
	while(n !=(-1)){
	    scanf("%s",&nome);
	
		for(i=n-1;i>=0;i--){
		    printf("%c",nome[i]);
		}
	
	    printf("\n");	
	    scanf("%d",&n);
	}
}
