#include <iostream>
using namespace std;

int main()
{
    string pilihan;
    do
    {
        cout << "makan" << endl;
        cout << "main game" << endl;
        cout << "ibadah" << endl;


        cout << "Apakah anda masih hidup? (yes/no)";
        cin >> pilihan; 

    } while ( pilihan == "yes");
    
}