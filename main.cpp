#include <iostream>

int product(int num1, int num2){
    return num1 * num2;
}


int main(){
    int firstNumber {3};
    float secondNumber {7};
    std::cout << product(firstNumber, secondNumber);
    return 0;
}