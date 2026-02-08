#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int hash[256] = {0};
    
    cout << "Enter the string: ";
    cin >> str;
    
    
    for(int i = 0; i < str.length(); i++){
        hash[str[i]]++;   
    }
    
    int max_val = 0;
    int min_val = str.length();
    char a = ' ', b = ' '; 

    
    for(int k = 0; k < 256; k++){
        if(hash[k] > 0){
           
            if(hash[k] > max_val){
                max_val = hash[k];
                a = (char)k;
            }

            
            if(hash[k] < min_val){
                min_val = hash[k];
                b = (char)k;
            }
        }
    }
    
    cout << "Max -> " << a << ": " << max_val << "\n";
    cout << "Min -> " << b << ": " << min_val << endl;

    return 0;
}