#include <stdio.h>
#include "convert.h"

int convert(char *buffer){
	int value;
	sscanf(buffer,"%d",&value);
	printf("%d",value);
	return value;
}