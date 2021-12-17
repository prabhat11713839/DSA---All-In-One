#include <iostream>

using namespace std;

bool EvenOdd(int num){
   
   if(num&1){
       return false;
   }
   
   return true;
}

int main()
{
    int num;
    cout<< " enter num "<<endl;
    cin>> num;
    
    bool ans=EvenOdd(num);
    if(ans){
        cout<< "Even";
    }
    else{
        cout<<"Odd";
    }

    return 0;
}
