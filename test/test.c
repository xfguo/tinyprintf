#include <stdio.h>
#include "tinyprintf.h"
void xputc ( void* p, char c)
{
	putchar(c);
}
int main() {
	init_printf(NULL, xputc);
	tfp_printf("jwofj%d %x %s wofj\n", 333, 333, "111");
	return 0;
}
