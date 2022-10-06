#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    // genap
    /*if (x % 2 == 0){
        cout << "genap" << endl;
    } else if(x % 2 == 1){
        cout << "ganjil" << endl;
    }
    switch (x < 5){
            case 1:
                cout << "satu" << endl; break;
            case 2:
                cout << "dua" << endl; break;
            case 3:
                cout << "tiga" << endl; break;
            default:
                cout << "undefined" <<endl; break;
            }*/

            /*for (int i = 0; i <= 10; i = i + 2){
                    cout << i << "\nI LOVE U<3";
            }*/
                /*int i = 0;
                    while (i < 5) {
                    cout << i << "\n";
                    i++;
                    }*/
        int i = 0;
            do {
            if (i % 5 == 0) {
            cout << i << endl;
            }
            i++;
            }while (i <=100);


    return 0;
}
