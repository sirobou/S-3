#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char retsu[10];

	scanf("%s",&retsu);
	if(isalnum(retsu[10]))
	{
	printf("�܂�����");
	}
	else
	{
	printf("����");
	}
	

	return 0;
}
