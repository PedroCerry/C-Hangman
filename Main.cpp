#include <iostream>
#include <string>
using namespace std;

const string PALAVRA_SECRETA = "Melancia";


bool letra_existe(char chute){
   // for(int i = 0; i < PALAVRA_SECRETA.size(); i++){
   //     if(chute == PALAVRA_SECRETA[i]){
            // return true;
        // }
    // } 

    for(char letra : PALAVRA_SECRETA){
        if(chute == letra){
            return true;
        }
    }
    return false; 
}

int main () {
    cout << PALAVRA_SECRETA << endl;

    bool nacertou = true;
    bool nenforcou =  true;
    
    while(nacertou && nenforcou){
        char chute;
        cin >> chute;

        if(letra_existe(chute)){

        }
    }
}