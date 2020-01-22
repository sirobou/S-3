#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char retsu[10];

	scanf("%s",&retsu);
	if(isalnum(retsu[10]))
	{
	printf("‚Ü‚¿‚ª‚¢");
	}
	else
	{
	printf("³‰ğ");
	}
	

	return 0;
}
