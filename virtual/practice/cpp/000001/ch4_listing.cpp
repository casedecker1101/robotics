#include <iostream>
using namespace std;

// function that multipliese a number by 2
int timesTwo(int num) {
    /* return type int which indicates that an integer is being returned */
return num * 2;
}

// function that multiplies a number by 2
// except it does not do anything, it only outputs to the console
void timesTwoVoid(int num) {
    /* return type void which indicates that an nothing is being returned */
    cout << num * 2 << endl;
}

// Newtons Method of Finding Square Roots
double squareroot(double n) {
    double root = n / 2;

    for (int i = 0; i < 20; i++) {
        root = (.5) * (root + (n / root));
    }

    return root;
}

// returns number of steps walked
void dogWalk(int steps){
    for (int step = 0; step < steps; step++) {
        cout << "dog walked " << step << " steps!" << endl;
    }
}

void functionExample( int inputVar ) { /*return type void which indicates that nothing is being returned*/

    int nextVar = inputVar * 2;
    inputVar = 4;

    cout << "nextVar = " << nextVar << " inputVar = " << inputVar;
}

void callingFunction() { /*return type void which indicates that nothing is being returned*/ 
    int myVar = 10;
    functionExample( myVar );
    cout << " myVar = " << myVar;}

// swap_values() function definition
// Interchanges the values located by variable1 and variable2

// Notice that this function does not return anything!
void swap_values(int &variable1, int &variable2) {
    int temp;       // temporary storage for swap

    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

int main() {
    /* return trype int which indicates that an integer is being returned */
    cout << "Normal Int Function" << endl;
    cout << timesTwo(5) << endl;
    
    cout << "Void Function" << endl;
    timesTwoVoid(5);

    cout << "Newton's Method" << endl;
    cout << squareroot(9) << endl;
    cout << squareroot(45643) << endl;

    cout << "Dog Walk" << endl;
    dogWalk(11);
    callingFunction();

    int first_num, second_num;
    first_num = 7;
    second_num = 8;

    cout << "\nTwo numbers before swap function: 1) " << first_num << " 2) " << second_num << endl;
    swap_values(first_num, second_num);
    cout << "The numbers after swap function: 1) " << first_num << " 2) " << second_num << endl;
    
    return 0;



}