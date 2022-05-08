/*
Problem 5
The user enters the current time in the format hh:mm:ss and reject invalid 
inputs. Then calculate the seconds passed since the last midnight.
Author: Shrouk Tarek Ibrahim
Date: 22-3-2022
Version: 1.0
*/

#include <iostream>
#include <regex>
using namespace std;

//this check if the time is valid in hh:mm:ss format
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
            //split the time into hours, minutes and seconds by taking each 2 digits
            tdigit = time.substr(i,2);
            //then convert the time from string to int and convert all time to seconds by dividing by 60
            total+= (x * stoi(tdigit));
            x = x /60;
        }
    cout<<total<<" seconds elapsed since last midnight"<<endl;
    }else{
        cout<<"Invalid input, please try again.\n";
    }
    
}