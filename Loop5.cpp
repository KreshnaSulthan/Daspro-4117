#include <iostream>

using namespace std;

int main()
{
    int x;
    for(int x = 0; ;x++){
        cout << "masukkan angka : ";
        cin >> x;
        if(x == -99){
            cout << "keluar karena ankga -99";
         break;}
    }
    return 0;
}
