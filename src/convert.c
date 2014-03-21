#include <stdio.h>
#include "convert.h"

void convert(){
	int value;
	char *buffer = "123456";
	sscanf(buffer,"%d",&value);
	printf("%d",value);
	scanf("%c",&value);
}