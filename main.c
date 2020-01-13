#include <stdio.h>
#include <stdlib.h>
//Mateusz N.
void dodawanie()
{

}
//Mateusz K.
void odejmowanie()
{
    int x,y;
    printf("Podaj 2 liczby:\n");
    scanf("%d",&x);
    scanf("&d",&y);
    printf("Wynik:");

}
//Dawid
void mnozenie()
{

}
//Eryk
void dzielenie()
{
    float x, y;
    printf("Wpisz prosze dzielna i dzielnik:");
    scanf("%f",&x);
    scanf("%f",&y);
    if(y==0) printf("Pamietaj cholero nie dziel przez 0!!!11");
    else printf("%f", x/y);
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
        mnozenie();
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
