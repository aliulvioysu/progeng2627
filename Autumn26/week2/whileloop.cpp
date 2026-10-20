#include<iostream>

int main() {
    double a = 1 ,n, count = 0; 
    std::cin >> n;
    if(n != 0) 
        std::cout << "The Average So Far Is: " << n << std::endl;
        count = count + n;
    while(n != 0){
        a = a + 1;
        std::cin >> n;
        count = count + n;
        std::cout << "The Average So Far Is:" << count / a << std::endl;
        
    }
        
 }
    
    
    

        




    
    
