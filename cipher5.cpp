/*
Simple Substitution Cipher
The user enters the key to cipher a message and the same key to decipher the
message. The cipher alphabet is built by adding the remaining 21 letters in order after the key
letters.
 Author: Shrouk Tarek Ibrahim
 Date: 22-3-2022
 Version: 1.0
*/
#include <iostream>

using namespace std;

string alpha = "abcdefghijklmnopqrstuvwxyz", cphieralpha,key ,message,encrypt,decrypt;
int index,y;

//this function to check if the letters that in the message in the key or not
//and then put the letters that not in the key after it in cipheralpha
void alphacipher(){
	for (int i = 0; i < alpha.length(); i++)
    {
        if(key.find(alpha[i])>500){ 
            cphieralpha += alpha[i];
        }
    }
}
void decryption(){
	decrypt = "";
	alphacipher();
    for (int i = 0; i < message.length(); i++)
    {
        //if it is a letter then will find the index of this letter in cipheralpha and put it in index
        if(message[i]!= ' '){
        index = cphieralpha.find(message[i]);
        //and then will see which letter it is in alpha by index and put the letter in decrypt
        decrypt += alpha[index];
        }
        //if it is space then it will remain space
        else{
            decrypt += ' ';
        }

    }
	cout<<"decrypt "<<decrypt<<endl;
}

   

void encrpytion(){
	encrypt = "";
    alphacipher();
    

    for (int i = 0; i < message.length(); i++)
    {
        //if it is a letter then will find the index of this letter in alpha and put it in index
        if(message[i]!= ' '){
        index = alpha.find(message[i]);
        //and then will see which letter it is in cipheralpha by index and put the letter in encrypt
        encrypt += cphieralpha[index];
        }
        else{
            //if it is space then it will remain space
            encrypt += ' ';
        }
	}
	cout<<"encrypt "<<encrypt<<endl;
}
int main()
{
	while (true){
    cout<< "\n1-Encrypt a message" << endl << "2-Decrypt a message" << endl << "3-End\n";
	cin >> y;
	//if the user chooses 1 then will encrypt a message
	if (y == 1){
		cout << "Please enter a key: " ;
    cin>>key;
    cphieralpha = key;
    cout<<"Please enter your message: ";
    cin.ignore(); 
    getline(cin,message);
		encrpytion();
	}
    //if the user chooses 2 then will decrypt a message
	else if (y == 2){
		cout << "Please enter a key: " ;
    cin>>key;
    cphieralpha = key;
    cout<<"Please enter your message: ";
    cin.ignore(); 
    getline(cin,message);
		decryption();
	}
    
    //if the user chooses 3 then it will end
    else if (y == 3){
        break;
    }
    //if the user chooses other numbers they will not be available
    else {
		cout<<"not available";
	}
    }
    
}