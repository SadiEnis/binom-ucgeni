#include <stdio.h>

int main()
{
    int satir, a = 1, bosluk,i,j;

    printf("Satir sayisini giriniz:");
    scanf("%d", &satir);

    for(i=0; i<satir; i++)
    {
        for(bosluk=1; bosluk<=satir-i; bosluk++)
            printf("  ");
        for(j=0;j<=i;j++)
        {
            if(i==0 || j==0)
                a = 1;
            else
                a = a*(i-j+1)/j;

            printf("%4d", a);
        }
        printf("\n");
    }

    
    return 0;
}
