#include <iostream.h>
#include <conio.h>
int persegi(int);

int main()
{
   int number, hasil;
   cout << "Masukan angka yang akan diakarkan: ";
   cin >> number;
   hasil = persegi (number);
   cout << number << " Hasilnya adalah " << hasil << endl;
   getch();
   return 0;
}



int persegi(int number)
{
return number * number;
}