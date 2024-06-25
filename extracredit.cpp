#include <iostream>
using namespace std;
int main() {
	//declaration of variables
    int number_of_donuts,dozens,remaining;
    //Specify the quantity of donuts desired by the user.
    cout << "How many donuts are you going to eat?\n";
    cin >> number_of_donuts;
    dozens = number_of_donuts / 12;
    remaining = number_of_donuts - 12*dozens;
    //gives the output
    cout<<"This is "<<dozens<<" dozen plus "<<remaining<<" single donuts.\n";
    // output remarks on the basis of number of donuts
    if (number_of_donuts == 0){
        cout << "On a diet or something?";
    }
    else if (2 >= number_of_donuts){
        cout << "You don't seem very hungry today.";
    }
    else if (6 >= number_of_donuts){
        cout << "Just an appetizer for you?";
    }
    else if (9 >= number_of_donuts){
        cout << "What's for dessert...cinnamon rolls?";
    }
    else if (12 >= number_of_donuts){
        cout << "You're a donut freak.";
    }
    else{
        cout << "Mmmmmmm......donuts!";
    }
 
    return 0;
}

