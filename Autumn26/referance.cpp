#include <iostream>

int smallest_factor(int n){
    for(int i = 2; i <= n; i++){
        if((n % i) == 0){
            return i;
        }
           
    }
    return 0;
}
int main(){
    int a , b;
    std::cin >> a >> b;
    int smallnum, bignum;
    if(a < b){
        smallnum = a;
        bignum = b;
    }
    else{
        smallnum = b;
        bignum = a;
        
    }
    for(smallnum; smallnum <= bignum; smallnum++){
        if (smallest_factor(smallnum) == smallnum){
            std::cout << smallest_factor(smallnum) << "\t";
        }
            

    }
    

    

}