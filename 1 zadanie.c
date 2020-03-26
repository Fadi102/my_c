#include <stdio.h>
#include <stdlib.h>

int count_digits(char* c)
{
int p, l, cs = 0;
char b[11];

for(p = 0; p < 10; p++) b[p] = p + '0';

for(p = 0; c[p] != 0; p++)
for(l = 0; l < 10; l++)
if(c[p] == b[l]) cs++;
return cs;
}

int main()
{
char b[31];

printf("\nEnter text:");
scanf("%30s", b);
printf("\nYour text: %s", b);
printf("\nDigits count in your text: %d", count_digits(b));

return 0;
}