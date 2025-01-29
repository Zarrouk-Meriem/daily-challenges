#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++) 
#define PB push_back
typedef long long ll;
 
bool checkMask(int num , int lucky){
    string numS = to_string(num) ; 
    string res ; 
    REP(i , 0 , numS.length()){
        if (numS[i] == '7' || numS[i] == '4'){
            res += numS[i] ; 
        }
    }
    if (res.length()!=0){
        num = stoi(res) ; 
    }
    if (num == lucky ){
        return true ; 
    }else{
        return false ; 
    }
}
 
int main (){
    int num , lucky ; 
    cin >> num >> lucky ; 
    
    if (checkMask(num , lucky)) num++ ; 
    
    while(!checkMask(num , lucky)){
        num++ ;
    }
    cout << num ; 
    
    return 0 ;
}
