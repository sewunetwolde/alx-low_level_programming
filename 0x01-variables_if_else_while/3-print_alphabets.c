#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print lower and upperalphabet no the line
 * Return: o
 */
int main(void)
{
int c

for (c =0; c < 26; ++c)
putchar('a' + c);
for (c = 0; c < 26; ++c)
putchar('A' + c);

putchar('\n');

return (0);
}
