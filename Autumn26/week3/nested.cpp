#include <iostream>

int main(){
    int n, count = 1, count2 = 1;
    std::cin >> n;
    while(count2 <= n){
        while(count <= n){
            std::cout << count * count2 << "\t";
            count = count + 1;
        }
        count = 1;
        count2 = count2 + 1;
        std::cout << std::endl;
        
    }

}
