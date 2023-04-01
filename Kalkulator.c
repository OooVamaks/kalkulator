#include<stdio.h>


int main(void)
{

    double LiczbaNr_1, LiczbaNr_2, Wynik;
    int LiczbaNr_1_Reszta, LiczbaNr_2_Reszta, Wynik_reszta;
    char Znak;

    printf("Pierwsza liczba:");
    scanf_s("%lf", &LiczbaNr_1);
    while (getchar() != '\n') continue;
    printf("Wybierz dzialanie:");
    scanf_s("%c", &Znak);
    printf("Druga Liczba:");
    scanf_s("%lf", &LiczbaNr_2);





    switch (Znak) {
    case'+':
        Wynik = LiczbaNr_1 + LiczbaNr_2;
        printf("Wynik %lf", Wynik);
        break;
    case'-':
        Wynik = LiczbaNr_1 - LiczbaNr_2;
        printf("Wynik %lf", Wynik);
    case'*':
        Wynik = LiczbaNr_1 * LiczbaNr_2;
        printf("Wynik %lf", Wynik);
        break;
    case'/':
        if (LiczbaNr_2 != 0) {
            Wynik = LiczbaNr_1 / LiczbaNr_2;
            printf("Wynik %lf", Wynik);
        }
        else {
            printf("ERROR");
        }


        
        break;
    case '%':
        if (LiczbaNr_2 != 0)
        {
            LiczbaNr_1_Reszta = (int)LiczbaNr_1;
            LiczbaNr_2_Reszta = (int)LiczbaNr_2;
            Wynik_reszta = LiczbaNr_1_Reszta % LiczbaNr_2_Reszta;
            printf("Reszta: %d", Wynik_reszta);
        }
        else
        {
            printf("Error");
        }





    }
}
    






                

                 
        
            












