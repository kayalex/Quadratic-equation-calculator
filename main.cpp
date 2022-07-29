#include <iostream>
#include <cmath>

int main(){
    int a;
    int b;
    int c;
    double x1;
    double x2;
    // enter value for a
    std::cout <<"Enter the value of a: ";
    std::cin >> a;

    // enter value for b
    std::cout <<"Enter the value of b: ";
    std::cin >> b;
    // enter value for c
    std::cout <<"Enter the value of c: ";
    std::cin >> c;
    float root = std::sqrt(((b*b)-(4*a*c)));

    if(c==0 || b==0){
        std::cout <<"The values of c or b must not be zero.";
        return;
    }

    x1 = (-b + root)/(2*a);
    x2 = (-b - root)/(2*a);

    std::cout << "Either x = " << x1 << std::endl;
    std::cout << "or x = " << x2 << std::endl;
    
    return 0;
}