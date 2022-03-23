#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // declare the variables.
    string operation;
    double real_number1, imaginary_number1, real_number2, imaginary_number2, result_real, result_imaginary;
    while (true){
        // input the required operation .
        cout << "enter the operation\n ";
        cin >> operation;
        // input the complex numbers.
        cout << "enter the first real part then imaginary part\n";
        cin >> real_number1 >> imaginary_number1;
        if(real_number1 == 0){
            cout<<"First number: "<< "("<<imaginary_number1 <<")"<<"i"<<endl;
        }
        else if( imaginary_number1 == 0){
            cout<<"First number: "<< real_number1 <<endl;
        }
        else{
            cout << "First number: " << real_number1 << "+" << "(" << imaginary_number1 << ")" << "i" << endl;
        }
        cout << "enter the second real part then imaginary part\n";
        cin >> real_number2>> imaginary_number2;
        if(real_number2 == 0){
            cout<<"Second number: "<< "("<<imaginary_number2 <<")"<<"i"<<endl;
        }
        else if( imaginary_number2 == 0){
            cout<<"Second number: "<< real_number2 <<endl;
        }
        else{
            cout << "Second number: " << real_number2 << "+" << "(" << imaginary_number2 << ")" << "i" << endl;
        }
        // addition part
        if(operation == "+") {
            result_real = real_number1 + real_number2;
            result_imaginary = imaginary_number1 + imaginary_number2;
            if(result_real == 0) {
                cout << "Answer is ="<< result_imaginary << "i"<<endl;
            }
            else if (result_imaginary == 0) {
                cout <<"Answer is ="<< result_real<<endl;
            }
            else {
                cout <<"Answer is ="<< result_real << "+" << "(" << result_imaginary << ")" << "i"<<endl;
            }

        }
        // subtraction part
        else if(operation == "-") {
            result_real = real_number1 - real_number2;
            result_imaginary = imaginary_number1 - imaginary_number2;
            if(result_real == 0) {
                cout << "Answer is ="<< result_imaginary << "i"<<endl;
            }
            else if (result_imaginary == 0) {
                cout <<"Answer is ="<<  result_real;
            }
            else {
                cout << "Answer is ="<< result_real << "-" << "(" << result_imaginary << ")" << "i"<<endl;
            }
        }
        // multiplication part
        else if(operation == "*") {
            result_real = (real_number1 * real_number2) - (imaginary_number2 * imaginary_number1);
            result_imaginary = (real_number1 * imaginary_number2) + (real_number2 * imaginary_number1);
            if (result_real == 0) {
                cout <<"Answer is ="<<  result_imaginary << "i"<<endl;
            }
            else if (result_imaginary == 0) {
                cout << "Answer is ="<< result_real<<endl;
            }
            else {
                cout << "Answer is ="<< result_real << "+" << "(" << result_imaginary << ")" << "i"<<endl;
            }
        }
        else if(operation == "/") {
            if (real_number1 == 0 && imaginary_number1 == 0) {
                cout << "0";
            }
            else if(real_number2 == 0 && imaginary_number2 == 0) {
                cout << "Mathematical error." << endl;
            }
            else if(real_number2 == 0){
                result_real = -(((real_number1*real_number2)+(imaginary_number2*imaginary_number1)) /
                              (pow(real_number2, 2)+pow(imaginary_number2, 2)));
                result_imaginary = -(((real_number2*imaginary_number1)-(real_number1*imaginary_number2)) /
                                   (pow(real_number2, 2)+pow(imaginary_number2, 2)));
                if(result_real == 0){
                    cout << "Answer is ="<<  "(" << result_imaginary << ")" << "i"<<endl;
                }
                else if(result_imaginary==0){
                    cout <<"Answer is ="<<  result_real <<endl;
                }
                else {
                    cout << "Answer is ="<< result_real << "+" << "(" << result_imaginary << ")" << "i" << endl;
                }
             }
            else {
                result_real =((real_number1 * real_number2) + (imaginary_number2 * imaginary_number1)) /
                              (pow(real_number2, 2) + pow(imaginary_number2, 2));
                result_imaginary =((real_number2 * imaginary_number1) - (real_number1 * imaginary_number2)) /
                                   (pow(real_number2, 2) + pow(imaginary_number2, 2));
                if(result_real == 0) {
                    cout << "Answer is =" << "(" << result_imaginary << ")" << "i" << endl;
                }
                else if(result_imaginary == 0) {
                    cout << "Answer is =" << result_real << endl;
                }
                else{
                    cout << "Answer is =" << result_real << "+" << "(" << result_imaginary << ")" << "i" << endl;
                }
            }
        }
        else if (operation == "exit"){
            break;
        }
    }
    return 0;
}