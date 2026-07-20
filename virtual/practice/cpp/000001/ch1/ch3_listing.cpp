#include <iostream>
using namespace std;

int main(){
// 1
    int counter = 1;

    while (counter <= 5) {
        cout << "Hello, World" << endl;
        counter = counter + 1;
    }

// 2
    for (int i = 0; i < 10; i++){
        cout << i << "second hello world test" << endl;
    }

// 3 - Squares the numbers in range 5
    for (int i = 0; i < 5; i++) {
        cout << i * i << " "; 
    }

// 4 
    for (int counter = 0; counter < 4; counter++) {
        cout << counter * 2 <<  " ";
    }
    
    return 0;
}