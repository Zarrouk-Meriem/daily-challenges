#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,p,a,b,c,m;

    cin >> n;
    int va[n],vb[n],vc[n],vp[n];
    for (int i = 0; i < n; i++) {
        cin>>p;
        vp[i]=p;
    }
    for (int i = 0; i < n; i++) {
        cin >> a ;
        va[i]=a;
    }
    for (int i = 0; i < n; i++) {
        cin >> b;
       vb[i]=b;
    }
    cin >> m;
    deque<int> vp2;
    for (int i = 0; i <m; i++) {
        cin>>c;
        int mn=INT_MAX;
        bool flag=false;
        for (int j = 0; j < n; j++) {
            if ((va[j]==c||vb[j]==c) && (find(vp2.begin(), vp2.end(), vp[j]) == vp2.end())) {
                flag=true;
                if (vp[j]<mn ) {
                    mn=vp[j];
                }
            }
        }
        if (flag==true) {
            vp2.push_back(mn);
        }
        else {
            vp2.push_back(-1);
        }

    }
    for (int j = 0; j <m; j++) {
        cout << vp2[j] << " ";
    }


    return 0;
}
