#include <iostream>
#include <cmath>

 double powersum(double count, double base){
    int sum = 0;
    for(int i = 1; i <= count; i++){
        double a = pow(base, i);
        sum = sum + a;
    }
    return sum;



 }
 
int main(){
    std::cout << powersum(5,3);
}

