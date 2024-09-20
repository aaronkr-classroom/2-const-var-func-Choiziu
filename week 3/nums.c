//nums.c

#include <stdio.h>

int main(void) {
	int decimal = 42; //10柳过
	int octal = 052; // 8柳过
	int hex = 0x2A; // 16柳过
	int binary = 0b101010; //2柳过

	printf("Decimal: %d\n", decimal);
	printf("Octal: %o (Prefix 0: 0%o) = %d\n",
		octal, octal, octal);
	printf("Hexadecimal: %x (Prefix 0x: 0x%x) = %d\n",
		hex, hex, hex);
	printf("Binary (manual): 0b101010 = %d\n", binary);
}