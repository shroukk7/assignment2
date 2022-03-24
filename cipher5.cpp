
#include <iostream>

using namespace std;

string alpha = "abcdefghijklmnopqrstuvwxyz", cphieralpha,key ,message,encrypt,decrypt;
int index,y;

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
        if(message[i]!= ' '){
        index = cphieralpha.find(message[i]);
        decrypt += alpha[index];
        }
        else{
            decrypt += ' ';
        }

    }
	cout<<alpha<<endl<<cphieralpha<<endl<<"decrypt "<<decrypt<<endl;
}

    // cout<<message.find('z');

    
   

void encrpytion(){
	encrypt = "";
alphacipher();
    

    for (int i = 0; i < message.length(); i++)
    {
        if(message[i]!= ' '){
        index = alpha.find(message[i]);
        encrypt += cphieralpha[index];
        }
        else{
            encrypt += ' ';
        }
	}
	cout<<alpha<<endl<<cphieralpha<<endl<<"encrypt "<<encrypt<<endl;
}
int main()
{
	while (true){
    cout<< "\n 1-Encrypt a message" << endl << "2-Decrypt a message" << endl << "3-End\n";
	cin >> y;
	
	if (y == 1){
		cout << "Please enter a key: " ;
    cin>>key;
    cphieralpha = key;
    cout<<"Please enter your message: ";
    cin.ignore(); 
    getline(cin,message);
		encrpytion();
	}
	else if (y == 2){
		cout << "Please enter a key: " ;
    cin>>key;
    cphieralpha = key;
    cout<<"Please enter your message: ";
    cin.ignore(); 
    getline(cin,message);
		decryption();
	}
	else if (y == 3) {
		break;
	}else{
		cout<<"not available";
	}
	}
}