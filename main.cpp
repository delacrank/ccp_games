#include <iostream>
#include <random>

int main() {

  std::cout << "enter a selection 1 rock, 2 paper, 3 scissors\n";
  std::cout << "press 0 to quit";
  std::random_device ran;
  
  int x;
  
  while( cin >> x ) {
    switch(x) {
    case 1:
      std::cout << "You entered rock\n"; break;
    case 2:
      std::cout << "You entered paper\n"; break;
    case 3:
      std::cout << "You entered scissors\n"; break;
    default:
      std::cout << "Invalid entry please try again\n;"  break;
    }
    if(x == 0) break;
  }
  
  return 0;
}
