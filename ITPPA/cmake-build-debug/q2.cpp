/*

#include <iostream>

using namespace std;

int main(){

    double amountpaid;

    int category = 0;

    int quantities;

    cout << "how many quantities are you buying :\n";
    cin >> quantities;

   double  total = quantities * 99;

    if(quantities >= 10 && quantities <= 19 ){

        category = 1;

    }else if ( quantities >= 20 && quantities <= 49){
        category = 2;


    }else if ( quantities >= 50 && quantities <= 99 ){
        category = 3;


    }else if ( quantities >= 100 ){
        category = 4;
    }

    switch (category) {

        case 1:{

            amountpaid = total * 0.2;
            cout << "Without discout, it would've been " << total << endl;
            cout << "\nYou are paying : R" << total - amountpaid;
            cout << "\nyour discount is 20%";}
            break;
        case 2:{
            amountpaid = total * 0.3;
            cout << "Without discout, it would've been " << total << endl;
            cout << "\nYou are paying : R" << total - amountpaid;
            cout << "\nyour discount is 30%";}
            break;
        case 3:{
            amountpaid = total * 0.4;
            cout << "Without discout, it would've been " << total << endl;
            cout << "\nYou are paying : R" << total - amountpaid;
            cout << "\nyour discount is 40%";}
            break;

        case 4:{
            amountpaid = total * 0.5;
            cout << "Without discout, it would've been " << total << endl;
            cout << "\nYou are paying : R" << total -amountpaid;
            cout << "\nyour discount is 50%";}
            break;

            default : cout << "you get no discout";
            break;

    }



}
*/