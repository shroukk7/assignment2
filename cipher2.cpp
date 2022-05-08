#include <iostream>
using namespace std;

string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", inverse = "ZYXWVUTSRQPONMLKJIHGFEDCBA", encrypt,decrypt, message;
int x,index;


void encryption(){
encrypt = "";
for (int i = 0; i < message.length(); i++){
    if(message[i]!= ' '){
        index = alpha.find(message[i]);
        encrypt += inverse[index];}
    else{
        encrypt += ' ';
        }
    
}
cout<<"encrypt " << encrypt<<endl;
}

void decryption(){
decrypt = "";
for (int i = 0; i < message.length(); i++){
    if(message[i]!= ' '){
        index = inverse.find(message[i]);
        decrypt += alpha[index];}
    else{
        decrypt += ' ';
        }
}
cout << "decrypt " << decrypt<<endl;
}

int main()
{
while (true){
cout<< "\n1-Encrypt a message" << endl << "2-Decrypt a message" << endl << "3-End\n";
cin >> x;
cout <<"Enter your message";
cin >> message;
if(x == 1){
    encryption();
}
else if (x == 2){
    decryption();
}
else if (x == 3){
    break;
}
}
}
