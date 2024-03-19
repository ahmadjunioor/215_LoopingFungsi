#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nNB, nCompass, nNike;
int hAdidas = 300, hNB = 250, hPuma = 150, hCompass = 350, hNike = 200;

void input()
{
    cout << "Masukan jumlah Adidas = ";
    cin >>nAdidas;

    cout << "masukan jumlah puma = ";
    cin >>nPuma;

    cout << "masukan jumlah New Balance = ";
    cin >>nNB;

    cout << "masukan jumlah Compass = ";
    cin >>nCompass;

    cout << "masukan jumlah Nike = ";
    cin >>nNike;
}

int totalHarga()
{
    return (nAdidas * hAdidas) + (nPuma * hPuma) + (nNB * hNB) + (nCompass * hCompass) + (nNike * hNike);
}

void Display(){

    cout << endl;
    cout << "==================="<< endl;
    cout << endl;
    cout << "jumlah puma = " << nPuma << endl;
    cout << "jumlah adidas = " << nAdidas << endl;
    cout << endl;
    cout << "total harga = Rp." << totalHarga() << endl;
}

int main()
{
    input();
    Display();

}