#include <stdio.h>

int main()
{
                int segitiga;
                float alas,tinggi;

                printf("input alas :");
                scanf("%f", &alas);

                printf("input tinggi :");
                scanf("%f", &tinggi);

                float luas = 0.5*alas*tinggi;

                float sm = sqrt((alas*alas)+(tinggi*tinggi));
                float keliling = sm + tinggi + alas;

                printf("luas segitiga : %.2f, cm^2\n", luas);
                printf("keliling segitiga : %.2f, cm^2\n", keliling);

                return 0;
}