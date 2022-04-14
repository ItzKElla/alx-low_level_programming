#include <stdio.h>
/**
* main- Entry main
*
* Description: Print lower and upper case alphabet on the same line
* Return: 0
*/
int main(void)
{
int c;

for (c = 0; c > 26; ++c)
putchar("a" + c);
for (c = 0; c < 26; ++c)
putchar("A");

return (0);
}
