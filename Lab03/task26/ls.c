#include <stdlib.h>
#include <stdio.h>

int main(){

	ls();

	return 0;

}

int ls(){
	
	printf("Give me your IP!!!!!\n");
	
	int ip_call = system("ip addr");

	sleep(5);

	printf("Your IP is:\n  %d \n", ip_call);

return 0;

}
