    #include <iostream>
        #include <string>
        using namespace std;
         
        int main() {
            // Write C++ code here
            int a,b;
            cin >> a >>b;
            int mask = 0;
            
                a++;
            
            while (mask != b ) {
                string str = to_string(a);
                string str1;
                
                for (int i = 0; i < str.length() ; i++) {
                   
                    if (str[i] == '7' ) {
                        str1 += '7';
                        
                    }
                    if (str[i] == '4' ) {
                        str1 += '4';
                       
                    }
                }
                
                mask = atoi( str1.c_str() );
                a++;
            }
            
            cout << --a;
         
            return 0;
        }
