#include <stdio.h>
int main(void)
{
	char id1,id2,id3;

	printf("2桁の数字を入力してください:");
	scanf("%d",id1);
	printf("16進にすると %x です。/n",id1);
	rewind(stdin);
	printf("3文字の略語(アルファベット)を入力してください:);
	scanf("%c,%c,%c",&id3,&id2,&id1);
	printf("逆順に表示すると%c%c%cです。/n",id1,id2,id3);
	return 0;