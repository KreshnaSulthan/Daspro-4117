#include <iostream>

using namespace std;

int main()
{
    //NO 4
   
   int x,i,y;
    for(int i = 1;i <= 20;i++){
    cout << i<< endl;
        x = x +i;
        y = x/i;
    } cout << "jumlah = " << x << endl;
    cout << "Rata-rata = " << y << endl;
    
    return 0;
}
