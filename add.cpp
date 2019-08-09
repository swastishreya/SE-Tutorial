#include <bits/stdc++.h>

using namespace std;

int main(){
    float a, b;
    int choice;

    cout << "1.Add two numbers\n2.Multiply two numbers\n3.Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    while(choice != 3){
        cout << "Enter number 1: ";
        cin >> a;
        cout << "Enter number 2: ";
        cin >> b;
        if(choice == 1){
            cout << "Result: " << a+b << endl; 
        }
        else if(choice == 2){
            cout << "Result: " << a*b << endl; 
        }
        cout << "1.Add two numbers\n2.Multiply two numbers\n3.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    }

    return 0;
}