#include <stdio.h>
#include <string.h>

int main(void) {
	
	const char *numIp = "192.168.0.1";

	int num1,num2,num3,num4;

	sscanf(numIp,"%d.%d.%d.%d",&num1,&num2,&num3,&num4);
	
	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%d\n", num4);

	return 0;
}
