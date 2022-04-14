#include <stdio.h>

/**
* main-  Entry point
*
* Description: Print the lowercase alphabet in reverse then new line
* Return: 0
*/
int main(void)
{
char c;

for (c = "z"; c >= "a"; ++c)
putchar(c);

putchar("\n");

return (0);
}
