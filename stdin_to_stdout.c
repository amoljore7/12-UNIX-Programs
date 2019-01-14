// By running this program whatever we typed through standard input device
// (keyboard) gets printed on standard output device (console).

#include <stdio.h>

int main(void)
{
int c;

while ((c = getc(stdin)) != EOF)
{
	putc(c, stdout);
}

return 0;;
}