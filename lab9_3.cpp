
#include<iostream>
using namespace std;
int main(){

int age,high,bou;
cout << "Enter your age: ";
cin >> age;
    if(age <= 25){
   cout << "Enter your height: ";
    cin >> high;
    if(high < 100){
    cout << "Your character = Chopper";
    }
    else if(high < 180){
     cout << "Your character = Usopp";
     }
     else{
    cout << "Enter your bounty: ";
    cin >> bou;
        if(bou > 1100000000){
        cout << "Your character = Zoro";
        }
        else{
        cout << "Your character = Sanji";
        }
    }
    }
    else if(age <= 60){
    cout << "Enter your bounty: ";
    cin >> bou;
        if(bou > 500000000){
            cout << "Your character = Jinbe";
        }
        else{
        cout << "Your character = Franky";
        }
        }
        else{
        cout << "Your character = Brook";
        }
        }

        

