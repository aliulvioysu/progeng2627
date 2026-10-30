#include<iostream>
int gcd(int a, int b){
    int divisor;
    int active_gcd;
    
    for(divisor = 1; divisor <= a || divisor <= b; divisor++){
        if((a % divisor == 0) && (b % divisor == 0)){
            active_gcd = divisor;
        }


    }
    
    return active_gcd;
}
int eulers_totient(int a){
    int count = 0;
    for(int i = 1; i <= a; i++){
        if( gcd(i,a) == 1){
            count = count + 1;
        }
    }
    return count;
}

int main(){
int a, b;
std::cin >> a >> b;
std::cout << eulers_totient(a) << std::endl;

}
