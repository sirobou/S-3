#include <stdio.h>
int main(void)
{
	int a,b;
	printf("二つの整数値を入力してください。:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("和は%d 差は%d 積は%d 商は%d 剰余は%dです。",a+b,a-b,a*b,a/b,a%b);
	return 0;
}
