
#include <iostream>
#include <regex>
using namespace std;

bool validtime(string str){
regex timevalid("[0-2][0-9][:][0-6][0-9][:][0-6][0-9]");
return regex_match(str,timevalid);
}



int main(){
    int x=3600,total=0;
    string time,tdigit;
    cout<<"Please enter a valid time in hh:mm:ss format: ";
    cin>>time;
    if(validtime(time)){
        for(int i =0;i<time.length();i+=3){ 
            tdigit = time.substr(i,2);
            total+= (x * stoi(tdigit));
            x = x /60; 
        }
    cout<<total<<endl;
    }else{
        cout<<"Invalid input, please try again.\n";
    }
    
}