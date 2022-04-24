
#include <iostream>


void calculator( char op,double num1 , double num2) {


        if (op == '+') {

            std::cout << num1 + num2;
        } else if (op == '-') {

            std::cout << num1 - num2;

        } else if (op == '/') {

            if (num2 == 0) {
                std::cout << "You cannot divide by 0 sorry";

            } else std::cout << num1 / num2;

        } else if (op == '*') {
            std::cout << num1 * num2;
        }

    }






int main(){
    std::string cont;
    char oper;
    double number1;
    double number2;


    std:: cout << "Do you want to calculate \n";
    std:: cin >> cont;

    while (cont == "yes" ||cont == "Yes" || cont == "y" || cont == "Y" ) {

        std::cout << "\nEnter the operator, first number and second number:\n";
        std:: cin >> oper >> number1 >> number2;

        calculator(oper,number1,number2);

        std:: cout << "\nDo you want to calculate \n";
        std:: cin >> cont;

    }




    return 0;
}


