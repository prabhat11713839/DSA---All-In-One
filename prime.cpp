#include <iostream>

using namespace std;

bool Prime(int num){
   
  for(int i=2;i<num/2;i++){
      if(num%i==0){
          return false;
      }
  }
  return true;
}

int main()
{
    int num;
    cout<< " enter num "<<endl;
    cin>> num;
    
    bool ans=Prime(num);
    if(ans){
        cout<< "Prime";
    }
    else{
        cout<<"Not Prime";
    }

    return 0;
}
