#include <bits/stdc++.h>
using namespace std;

string InvertirTexto(string str);
string ArmarFrase(string frase);

int main(){
    string f ;
    
    cout<<"Ingrese secreto: ";
    getline(cin,f);
    
    cout<<ArmarFrase(f);
    
    return 0;
}

string ArmarFrase(string frase){
    string str=" " , nueva=" ";
    
    for(int i=0 ; i < frase.size(); i++){
        
        if(frase[i] == '('){
            while(frase[i]!= ')'){
                str += frase[i];
                i++;
            }
            str += frase[i]; 
            nueva += InvertirTexto(str);
        }
        else{
            nueva += frase[i];
        }
    }
    return nueva;
}
string InvertirTexto(string str){
    reverse(str.begin(), str.end();
    return str;
}
