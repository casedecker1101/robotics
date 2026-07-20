// demonstrates the difference between pass-by-value
// and pass-by-reference functions.
#include <iostream>
using namespace std;

void func1(int var1, int var2){
    int temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}

void func2(int &var1, int &var2){
    int temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}

double average( int list[], int length ) {
    // It is correct syntax to omit the array length on the array itself
    double total = 0;
    // return type double which indicates that a decimal is being returned

    int count;
    for( count = 0; count < length; count++ ) {
        total += double(list[count]);
    };
    return (total / length);
}

void add_lists(int first[], int second[], int total[], int length) {
    // return type void which indicates that nothing is returned
    int count;
    for ( count = 0; count < length; count++) {
        total[count] = first[count] + second[count];
    };
}

// doesn't allow modifying of arrays
void add_lists( const int first[], const int second[], int total[], int length ) {
    // return type void which indicates that nothing is returned
    int count;
    for ( count = 0; count < length; count++ ) {
        total[count] = first[count] + second[count];
    };
}

int main(){
    int num1 = 2;
    int num2 = 3;

    func1(num1, num2);
    cout << "results of func1: " << endl;
    cout << "num1: " << num1 << ", num2: " << num2 << endl;
    func2(num1, num2);
    cout << "results of func2: " << endl;
    cout << "num1: " << num1 << ", num2: " << num2 << endl;

    return 0;
}