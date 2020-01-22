#include <stdio.h>
#include <string.h>
int main(void)
{
    int x = 1;
    int hold;
    int a = 0;
    int b = 1;
    char num2[4];
    scanf("%c%c%c%c",&num2[0],&num2[1],&num2[2],&num2[3]);
    printf("入力 => %c%c%c%c\n",num2[0],num2[1],num2[2],num2[3]);
    
    while(1)
    {
        if(num2[0] < num2[1]&&num[1] < num2[2]&&num2[2] < num2[3]){
            break;
        }
        if(num2[a] < num2[b])
        {
            a++;
            b++;
        }
        else
        {
            hold = num2[a];
            num2[a] = num2[b];
            num2[b] = hold;

            a++;
            b++;
        }

        if(b == 4){
            b -= 3;
            a -= 3;
            x++;
        }
        printf("%c%c%c%c\n",num2[0],num2[1],num2[2],num2[3]);
    
    }

    
}
    