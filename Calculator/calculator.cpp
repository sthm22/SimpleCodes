#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
/*
    Code by Matheus Almeida
*/
int main(){

    long long int n1 = 0, n2 = 0;
    int operation = 0;
    choose_operation:
    cout << "============ Integer Calculator ============\n";
    cout << "Choose an operation above: \n" << endl;
    cout << "\t1 - Adition | 2 - Subtraction | 3 - Multiplication | 4 - Division\n-> "; 
    cin >> operation;
    if(operation <= 0 || operation > 4){
        cout << "Invalid Operation!!!\nChoose a valid option\n";
        Sleep(1850);
        system("cls");
        goto choose_operation;
    }
    cout << "Provide the numbers:\nNumber 1 -> ";
    cin >> n1;
    cout << "Number2 -> ";
    cin >> n2;
    switch(operation){
        case 1:
            cout << "\nSum: " << n1 << " + " << n2 << " = " << (n1+n2);
        break;
        case 2:
            cout << "\nSubtraction: " << n1 << " - " << n2 << " = " << (n1-n2);
        break;
        case 3:
            cout << "\nMultiplication: " << n1 << " x " << n2 << " = " << (n1*n2);
        break;
        case 4:
            cout << "\nDivision: " << n1 << " / " << n2 << "\n";
            cout << "Quotient: " << (n1/n2) <<" - Remainder: " <<(n1%n2) << endl;
        break;
        default:
            cout << "ERROR: Restart the program";
        break;
    }   
    retry_calculator:
    cout << "\nDo you wanna to calculate another number? [1- Yes/2 - No]\n-> ";
    cin >> operation;
    if(operation == 1){
        cout << "\n";
        goto choose_operation;
    }else if(operation == 2){
        return 0;
    }else{
        cout << "Choose a valid option!";
        goto retry_calculator;
    }
}