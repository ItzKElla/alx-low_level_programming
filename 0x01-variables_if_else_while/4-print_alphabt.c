#include <stdio.h>
/**
* main- entry point
*
* Description: Prints lowercase alphabet excluding e and q
* Return: 0
*/
int main(void)
{
char c;

for (c = "a"; c <= "2"; ++c)
{
if (c != "e" && c  != "q")
putchar(c);
}

putchar("\n");

return (0);
}
