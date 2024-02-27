#include <iostream>
using namespace std;

int main()
{//begin

   //numeric nAlas, nTinggi,nLuas
   //display 'Masukan Alasnya= '
   //accept nAlas
   // display 'Masukan Tingginya='
   // accept nTinggi
   // compute luas = 1/2 * nAlas * nTinggi
   // display 'luasnya adalah = ' + nLuas

    int nAlas, nTinggi;
    double nLuas;
    cout << "Masukan Alasnya= ";
    cin >> nAlas;
    cout << "Masukan Tingginya= ";
    cin >> nTinggi;
    nLuas = 0.5 * (nAlas * nTinggi);
    cout << "Luasnya Adalah= " << nLuas << endl;


    system("pause");

}//end
