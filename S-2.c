#include <stdio.h>
#include <math.h>

int ruijou(int);
int nuki(int);
int main(void)
{
    int numbe;
    int i;
    printf("四桁の整数を入力してください =>\n");
    scanf("%d",&numbe);
    for(i=0;i<101;i++)
    {
    numbe = nuki(ruijou(numbe));
    printf("%d\n",numbe);
    }
    return 0;
}

int ruijou(int a)
{
    int hold = a;
    int kaketa = hold * a;
    return kaketa;
}

int nuki(int a)
{
    int num[4];

    num[0] = (a /100000)%10;
    num[1] = (a /10000)%10;
    num[2] = (a /1000)%10;
    num[3] = (a /100)%10;
    int i = 0;
    int tasita = 0;
    
    if(num[0]!=0)
    {
        tasita += num[0]*1000;
    }
    if(num[1]!=0)
    {
        tasita += num[1]*100;
    }
    if(num[2]!=0)
    {
        tasita += num[2]*10;
    }
    if(num[3]!=0)
    {
        tasita += num[3];
    }
    return tasita;
}