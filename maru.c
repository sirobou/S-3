#include <stdio.h>
int main(void)
{
	char suuzi, moji;

	printf("キーボードから数字を二つ入力してください:");
	scanf("%d %c",&suuzi, &moji);
	printf("一つ目は、数値%dとしました。16進で表示すると%02xです。/n",suuzi,suuzi);
	printf("二つ目は、文字%cとしました。16進で表示すると%02xです。/n",moji,moji);

	return 0;
}