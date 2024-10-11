#include <stdio.h>

int main()
{
                float celcius;

                printf("input celcius:");
                scanf("%f", &celcius);

                float fart = celcius * 9/5 + 32;
                float reamur = celcius * 4/5;

                printf("%.2f, celcius:", celcius);
                printf("%.2f, farenhein \n", fart);

                printf("%.2f, celcius");
                printf("%.2f, reamur \n, reamur");

                return 0;
}