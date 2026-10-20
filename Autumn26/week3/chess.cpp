#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
std::srand(std::time(NULL));
int row = std::rand() % 6 + 2;
int col = std::rand() % 6 + 2;
std::cout << "Current Position:" << row << "," << col<< std::endl;
//move variables
int row1 , col1;
int n = 1;
while(n < 2){
    std::cout <<"Input row and column" << std::endl;
    std::cin >> row1 >> col1;
        if((row1<1 || row1>8) ||(col1<1||col1>8)){
        std::cout << "Enter a Valid Position" << std::endl;
        }
        else if((abs(row - row1) == 2)&& (abs(col-col1)==1) || (abs(row - row1) == 1)&& (abs(col-col1)==2)){
        std::cout<< "New Position:" << row1 << "," << col1 <<std::endl;
        row = row1;
        col = col1;
        if(((row == 1)||(row ==8))&&((col == 1)||(col ==8)))
            n = n + 1;
        }
        else{
            std::cout << "Enter a Valid Position" <<std::endl;
        }
    }
std::cout << "You've reached the corner";
    

    
}






