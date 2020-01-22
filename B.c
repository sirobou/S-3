#include <stdio.h>
int main (void)
{
char moji; 
char *mojip;

mojip = &moji;

*mojip = "A";
(*mojip+1) = "B";

*mojip = (*mojip+1);

printf("%c",*mojip);

return 0;
}