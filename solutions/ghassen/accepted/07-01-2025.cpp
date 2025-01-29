// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <string>

string Mask(int x) {
    string ch;
    int s;
  while (x!=0 && (to_string(x).find('7')!= string::npos+1 || to_string(x).find('4')!= string::npos+1)){
      
      s=x%10;
       if (s==7 || s==4){
          ch=to_string(s)+ch;
      }
      x=x/10;
     
  }
  return ch;
}

int main() {
    int a;
    string b;
    cin>>a>>b;
    a=a+1;
    while (Mask(a)!=b){
        a++;
    }
    if (Mask(a)==b){
        cout<<a;
    }
   
}
