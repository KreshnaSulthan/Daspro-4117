#include <iostream>

using namespace std;

int main()
{
   
    //NO 2
    
    for(int i = 100;i >= 0;i--){
        if(i % 2 == 1){
            continue;
        }cout << i << endl;
    }
  
    return 0;
}
