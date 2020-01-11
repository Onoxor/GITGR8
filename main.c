#include <stdio.h>
#include <stdlib.h>
//Mateusz N.
void dodawanie(int a, int b)
{

}
//Mateusz K.
void odejmowanie(int a, int b)
{

}
//Dawid
void mno¿enie(int a, int b)
{

}
//Eryk
void dzielenie(double a, double b)
{

}
int main()
{
    int x;
    printf("Wybierz dzialanie matematyczne ktore chcesz wykonac\n\n(1:Dodawanie  2:Odejmowanie  3:Mnozenie  4:dzielenie)\n\n:");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        dodawanie();
        break;
    case 2:
        odejmowanie();
        break;
    case 3:
        mno¿enie();
        break;
    case 4:
        dzielenie();
        break;
    default:
        printf("No i zle nacisnales");
        break;
    }
    return 0;
}
