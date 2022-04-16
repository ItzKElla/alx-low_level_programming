#include <stdio.h>
/**
* print_alphabet - Prints the alphabet in lower, followed by a new line
*/
void print_alphabet(void)
{
char letter;

for(letter = "a"; letter <= "z"; letter++)
putchar(letter);

putchar("\n");
}
