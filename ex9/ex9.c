#include <stdio.h>

int main(int argc,char *argv[]){
	int i = 25;
	while( i > 0 ){
		printf("%d ", i);
		i--;
	}
	
	//Need this to add a new line
	printf("\n");
	return 0;
}