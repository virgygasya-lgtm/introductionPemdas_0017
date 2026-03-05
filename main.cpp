#include <iostream>
using namespace std;

int panjang, Lebar;

void input()
{
    cout << "Masukan Panjang :";
    cn >> panjang;
    cout << "Masukan Lebar :":
    cin >> lebar;
}

    int luasPersegi(int a, int b)
    {
        return 2 * (a + b);
    }

    int kelilingpersegi(int a, int b)
    {
        return 2 * (a * b)
    };
    
    void output()
    {
        cout << "Luasnya : " << luasPersegi(panjang, lebar) << endl;
    }

        int main()
{
            input();
            output();
            cout << "Kelilingnya : " << kelilingpersegi(panjang, Lebar);
}

    
