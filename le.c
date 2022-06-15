#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef union Number 
{
	uint16_t integer;
	unsigned char byte[2];
} number;

int main()
{
	number num;
	num.integer = 0x1234;
	
	printf("int: %d\n char: %x %x\n", num.integer, num.byte[0], num.byte[1]);
}
