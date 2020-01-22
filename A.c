#include <stdio.h>
int main(void)
{
    int pysibit;
    int i;
    pysibit = 0x01;

    for(i=1;i<10;i++)
    {
        printf("%d\n,%c\n,\n%x\n",pysibit,pysibit,pysibit);
        pysibit = pysibit << 1;
    }
}