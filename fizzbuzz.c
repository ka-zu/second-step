#include <stdio.h>

int main(){
	int i=0;
	
	for(i=0; i<=50; i++){
		if( i%3==0 && i%5==0 ){
			printf("%2d: fizzbuzz\n",i);
		}
		else if( i%3==0 ){
			printf("%2d: fizz\n",i);
		}
		else if( i%5==0 ){
			printf("%2d: fizz\n",i);
		}
		else{
			printf("%2d:\n",i);
		}
	}
	
	return 0;
}
