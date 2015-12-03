

 #include <iostream>

 #include <conio.h>

  

using namespace std;

 

int main()

 {

   int r;

     float pi=3.14;      

    cout << "Pole kola\n";

     cout << "Podaj dlugosc promienia: ";

     cin >> r;

   cout << "\n"; 

   int p_kola(pi * (r * r));

   cout << "Pole wynosi: " << p_kola;

getch();

    return 0;

}

   

