//cosinus
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
 
using namespace std;

int main()
{

unsigned int n=1000;
double x=0;

cout<<"Witaj w programie obliczajacym wartosc funkcji cos(x) w zakresie <-28 stopni, 28 stopni>"<<endl;
cout<<"Podaj x w stopniach"<<endl;
cin>>x;

while(x<-28 || x>28)
{
    cout<<"Podales zly x. Zakres to <-28,28>"<<endl;
    cin>>x;

}

double pi = 3.14159;
double cos=1;

    x = x*pi/180;

for(int i=1;i<=n;i++)
{

    cos *= (1-(4*x*x)/((pi*pi)*(2*i-1)*(2*i-1)) ) ;

}



cout<<"cos("<<x;
cout.precision(1);
cout<<") = "<<cos<<endl;

system("PAUSE");
return 0;
}
//cosinus

//srednia wazona
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <math.h>

using namespace std;


int main()
{
    int ilosc=0;
    float ocena=0;
    float srednia;
    float waga=0;
    double mianownik = 0;
    double licznik = 0;
   
        cout << "Podaj ilosc ocen";
        cin >> ilosc;
   
       
       
       
    for( int i = 1; i <= ilosc; i++ )
    {
       
        cout << "Podaj ocene nr " << i << ": ";
        cin >> ocena;
        cout << "Podaj wage";
        cin >> waga;
       
    }
   
    srednia = 0;
    for(int i =1; i <= ilosc; i++)
    {
        licznik += waga * ocena;
        mianownik += waga;
        }
   
    srednia = ( licznik / mianownik );
    cout << "Srednia wazona ocen wynosi = " << srednia << endl;

       
    getch();
    return(0);
    }
//srednia wazona

//dni
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;


// Program z uzyciem instrukcji wyboru switch dotyczący konkretnych dni


int main()
{
    int wybor=0;
   
    cout << "Podaj odpowiedni numer tygodnia aby dowiedziec sie jaki to dzien: " << endl;
    cin >> wybor;
   
    switch(wybor)
    {
        case 1:
            cout << "Poniedzialek" << endl;
            break;
        case 2:
            cout << "Wtorek" << endl;
            break;
        case 3:
            cout << "Sroda" << endl;
            break;
        case 4:
            cout << "Czwartek" << endl;
            break;
        case 5:
            cout << "Piatek" << endl;
            break;
        case 6:
            cout << "Sobota" << endl;
            break;
        case 7:
            cout << "Niedziela" << endl;
            break;
       
        default:
            cout << "Nie ma takiego dnia!" << endl;
            break;
   
   
   
   
   
   
   
   
   
    }





system("PAUSE");
}
//dni

// iloczyn skalarny wektorów
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    int wektor;
    int a[100];
    int b[100];
 
   
    cout << "Podaj wartosc n: ";
    cin >> n;
   
    while(n>100)
    {
        cout << "Wartosc n musi byc <= 100" << endl;
   
        }
   
   
    cout << "Podaj wspolrzedne wektora a: " << endl;
   
    for (unsigned int i=0; i<n; i++)
    {
           cin >> a[i];
       
    }
   
    cout << "Podaj wspolrzedne wektora b: " << endl;
    for (unsigned int i=0; i<n; i++)
    {
          cin>> b[i];
       
    }
   
   
   
   
   
    wektor= 0;
   
    for (unsigned int i=0; i<n; i++)
    {
           wektor += a[i] * b[i];
       
    }
   
    cout << "iloczyn skalarny wektorow wynosi: " << wektor << endl;
   
   
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
//iloczyn skalarny wektorów

//minimum i maksimum liczb a,b,c
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;


int minimum(int& a, int& b, int& c)
{
    int min;
    if(a<b)
    {
        min = a;
        }
        else
        {
            min = b;
            }
            if(c< min)
            {
                min = c;
                }

                int p = a;
                    a = c;
   
               
    return min;
}

int main()
{
    int a=0, b=0, c=0;

    cout << "Podaj liczbe 1, 2, i 3: " << endl;
    cin >> a >> b >> c;
   
    cout << endl;
    cout << "Podales (" << a << "," << b << "," << c << ")." << endl;
    cout << minimum(a,b,c) << endl;





system("Pause");
}
// minimum i maksimum liczb a,b,c

//min , max i srednia
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    int *tab = new int [n];
    int ilosc=0;
   
    cout << "Podaj ile liczb chcesz wpisac: " << endl;
    cin >> ilosc;
   
   

    for(int i = 0; i < ilosc; i++)
    {
        cout << "Podaj liczbe nr.  : " << i + 1;
        cin >> tab[i];
    }
   
    int min=0, max=0;
    float srednia = 0;
    min = max = tab[0];

    for(int i = 0; i < ilosc; i++){
        if(tab[i] > max){ max = tab[i]; }
        if(tab[i] < min){ min = tab[i]; }
        srednia += tab[i];
    }

    cout << "\nMin: " << min << "\nMax: " << max << "\nSrednia: " << srednia / ilosc;
    system("PAUSE");
    return 0;
}
//min, max i srednia

//wyznacznik macierzy 3x3
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double tablica[3][3];
    double wartosc = 1;
   
    cout << "Witaj w prgoramie obliczajacym wyznacznik macierzy 3x3" << endl << endl;
   
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout << "Wypelnij tablice dowolnymi liczbami: " << endl;
            cin >> wartosc;
            tablica[i][j] = wartosc;
       
        }
   
   
    }
   
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
            cout << tablica[i][j] << '\t';
        cout << endl;
    }

   

    cout << "Wyznacznik tej macierzy to: " << (**tablica * *(*(tablica+1)+1))-(*(*(tablica+1)) * *(*tablica+1)) <<endl;

system("PAUSE");
}
//wyznacznik macierzy 3x3

//funkcja na sume podana wg, wzoru
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double funkcja;
    double suma = 0;
   
    int n=0 , m=0, x=0;
    int i;

   
   
   

    cout << "Aby obliczyc sume podaj n: " << endl;
    cin >> n;
    cout << "Podaj rowniez x: " << endl;
    cin >> x;
   
    for(int i = 0; i< n; i++)
    {
     suma += (2*i*x);
   
    }
   
    cout << suma << endl << endl;

    cout << "Aby obliczyc iloczyn podaj m : " << endl;
    cin >> m;
   
    double iloczyn = 1;
    for(int i = 1; i <= m ; i++)
    {
        iloczyn *= x;
   
    }
   
    cout << iloczyn << endl << endl;
   
    funkcja = suma/iloczyn;
   
    cout << "Wartosc funkcji f(x) jest rowna : " << funkcja << endl;
   
system("pause");
}
//funkcja na sume podana wg wzoru

//obliczanie potegi o wykladniku naturalnym
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float a =0;
    unsigned int n =0;
   
    cout << "Podaj podstawe potegi: " << endl;
    cin >> a;
   
    cout << "Podaj wykladnik potegi: " << endl;
    cin >> n;
   
    if(n == 0) cout << "N nie moze byc rowne 0!" << endl;
   
    float potega = 1;
   
    for(int i = 0; i < n; i++)
    {
        potega *= a;
       
   
    }

    cout << endl << potega << endl << endl;


system("pause");
}
//obliczanie potegi o wykladniku naturalnym

//liczby parzyste i nie parzyste
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int ilosc=0, liczba=0;
   
   
    cout << "Podaj ile liczb chcesz wpisac: " << endl;
    cin >> ilosc;
    int lp =0;
    int lnp = 0;
   
    int k = 0;
    while(k < ilosc)
    {
        cout << "Podaj liczbe nr." << k + 1 << " " ;
        cin >> liczba;
   
        if(liczba !=0 && liczba%2==0)
        {
            cout << lp++;
       
        }
        else if(liczba !=0 && liczba%2 !=0)
        {
            cout << lnp++;
       
        }
   
        k++;
    }
    cout << endl;
    cout << "Ilosc liczb parzystych = " << lp << " a liczb nie parzystych = " << lnp << endl;





system("PAUSE");
}
//liczby parzyste i nie parzyste
 
   

