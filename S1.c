#include <stdio.h>
int kawase(int);
int changed(int[4]);
int keisan(int[4],int[4]);
int num[4];
int num2[4];
int syori =0;
int numbe =0;
int c = 0;
int d = 1;
int goukei1= 0;
int goukei2 = 0;
int hold =0;
int main(void)
{
    printf("四桁の入力");
    scanf("%d",&numbe);
    
    
    while(numbe ==0 || numbe == 6174)
    {
        kawase(numbe);
        changed(num);
        keisan(num2,num);
        syori++;   
    }
    printf("%d回の処理",syori);
    return 0;
}

int kawase(int a)
{
    num[0] = (numbe /1000)%10;
    num[1] = (numbe /100)%10;
    num[2] = (numbe /10)%10;
    num[3] = (numbe*1) %10; 

    return 0;
}

int changed(int b[4])
{
    while(1)
    {
    if(b[0]>b[1]&&b[1]>b[2]&&b[2]>b[3])
    break;
    if(b[c]<b[d])
    hold = b[c];
    b[c] = b[d];
    b[d] = hold;
    c++;
    d++;
    if(d == 4)
    {
        c -= 3;
        d -= 3;
    }

    }

    hold =0;
    c = 0;
    d = 1;
    num2[0] = b[0];
    num2[1] = b[1];
    num2[2] = b[2];
    num2[3] = b[3];

     while(1)
    {
    if(b[0]<b[1]&&b[1]<b[2]&&b[2]<b[3])
    break;
    if(b[c]>b[d])
    hold = b[c];
    b[c] = b[d];
    b[d] = hold;
    c++;
    d++;
    if(d == 4)
    {
        c -= 3;
        d -= 3;
    }
    }


}

int keisan(int x[4],int y[4])
{
    goukei2 = num2[0] * 1000;
    goukei2 = num2[1] * 100;
    goukei2 = num2[2] * 10;
    goukei2 = num2[3];

    goukei1 = num[0] * 1000;
    goukei1 = num[1] * 100;
    goukei1 = num[2] * 10;
    goukei1 = num[3];

    numbe = goukei2 - goukei1;
    printf("%d",numbe);
    return numbe;
     
}