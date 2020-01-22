#include <stdio.h>
int keisan(int,int[4]);
int tasizan(int[4]);
int hikizan(int[4]);
int kekka;
int kekka2;
int i = 0;
int x;
int high;
int low;

int sh = 1;
int sl = 0;


int main(void) 
{
    scanf("%d", &x);
    printf("%d",x);

    while (x != 0 && x != 6174) 
    {
        
        int num[4];
        
        num[0] = (x /1000)%10;
        num[1] = (x /100)%10;
        num[2] = (x /10)%10;
        num[3] = x %10; 

        printf("%d",x);
        high = keisan(sh,num);
        low = keisan(sl,num);

        x = kekka - kekka2;
        printf("%d",x);
        i++;
    }

    printf("%d\n", i);

    return 0;
}

int change(int numbe) {
    int b[4];
    b[0] = (numbe /1000)%10;
    b[1] = (numbe /100)%10;
    b[2] = (numbe /10)%10;
    b[3] = numbe %10; 
}

int keisan(int check,int z[4]) {
    int migawari[4];
    int p;
    for (int p = 0; p < 4; p++) {
        migawari[p] = z[p];
        printf("%d",migawari[p]);
    }
    if(check ==1)
    {
    kekka = tasizan(migawari);
    }
    else
    {
    kekka2 = hikizan(migawari);
    }

}

int tasizan(int h[4])
{
    int c = 0;
    int d = 1;
    int hold = 0;
    int kei;
    while(1)
    {
        if(h[0]>h[1]&&h[1]>h[2]&&h[2]>h[3])
        break;
        if(h[c]<h[d])
        {
        hold = h[c];
        h[c] = h[d];
        h[d] = hold;
        c++;
        d++;
        }
        if(d == 4)
        {
            c -= 3;
            d -= 3;
        }
    }

    kei += h[0] * 1000;
    kei += h[1] * 100;
    kei += h[2] * 10;
    kei += h[3];
    return kei;
}

int hikizan(int l[4])
{
    int j = 0;
    int k = 1;
    int hold2 = 0;
    int kei2;
    while(1)
    {
        if(l[0]<l[1]&&l[1]<l[2]&&l[2]<l[3])
        break;
        if(l[j]>l[k])
        {
        hold2 = l[j];
        l[j] = l[k];
        l[k] = hold2;
        j++;
        k++;
        }
        if(k == 4)
        {
            j -= 3;
            k -= 3;
        }
    }

    kei2 += l[0] * 1000;
    kei2 += l[1] * 100;
    kei2 += l[2] * 10;
    kei2 += l[3];
    return kei2;
}