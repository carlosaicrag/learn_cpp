#include <iostream>
#include <string>
using namespace std;

int main() {
  int earthWeight;
  string planet;

  std::cout << "What is your earth weight?\n";
  std::cin >> earthWeight;

  std::cout << "What planet do you want to fight one?\n";
  std::cin >> planet;

  if(planet == "Mercury"){
    //double mercuryGravity = .38;
    std::cout << "Mercury Weight " << .38 * earthWeight;
  } else if (planet == "Venus"){
    //double venusGravity = .91;
    std::cout << "Venus Weight " << .91 * earthWeight;
  } else if (planet == "Mars"){
    //double marsGravity = .38;
    std::cout << "Mars Weight " << .91 * earthWeight;
  } else if (planet == "Jupiter"){
    //double jupiterGravity = 2.34;
    std::cout << "Jupiter Weight " << 2.34 * earthWeight;
  } else if (planet == "Saturn"){
    //double saturnGravity = 1.06;
    std::cout << "Saturn Weight " << 1.06 * earthWeight;
  }
  
}
