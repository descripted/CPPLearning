#include <iostream>

int main() {
  
  int y = 0;
  std::cout << "Enter the a year ";
  std::cin >> y;

  if( y < 1000 || y > 9999){
    std::cout << "Invalid Year\n";

  }
  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
    std::cout << y;
    std::cout << "Fails on a leap year. \n";

  }
  else{
    std::cout << y;
    std::cout << " is not a leap year.\n";
  }
