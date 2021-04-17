#include <iostream>
using namespace std;

int main() {
  string yearInput;
  int yearInt;
  std::cout << "Please input a year \n";
  std::cin >> yearInput;

  if (yearInput.length() >= 4){
    yearInt = stoi(yearInput);
    std::cout << yearInt;

    if (yearInt % 4 == 0){
      std::cout << "This is a leap year";
    } else {
      if (yearInt % 100 == 0 && yearInt % 400 != 0)
      {
        std::cout << "This is not a leap year";
      }
      else if (yearInt % 400 == 0)
      {
        std::cout << "This is a leap year";
      }
      else
      {
        std::cout << "This is not a leap year";
      }
    }
  }  
}
