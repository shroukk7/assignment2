
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
    cin>>time;
    if(validtime(time)){
        for(int i =0;i<time.length();i+=3){ //21:33:21
            tdigit = time.substr(i,2);
            total+= (x * stoi(tdigit));
            x = x /60; 
        }
    cout<<total<<endl;
    }else{
        cout<<"shrouk\n";
    }
    // cout << "enter hours: ";
    // cin >> hour;
    // cout << "enter minutes: ";
    // cin >> min;
    // cout << "enter onds: ";
    // cin >> ;
    // total = 3600*hour+60*min+;
    // cout << "Total time in onds is: " <<total;

}