#include <iostream>
#include <random>

int compOutput(int, int);

int main() {

    std::cout << "enter a selection 1 rock, 2 paper, 3 scissors\n";
    std::cout << "press 0 to quit\n";
    std::default_random_engine generator;
    std::uniform_int_distribution<int> dist3(1, 3);



    int x;
    int wins = 0;
    int losses = 0;
    int ties = 0;
    int outcome = 0;
    
    while (std::cin >> x) {
        switch (x) {
        case 0:
            break;
        case 1: 
	  std::cout << "You entered rock\n";  outcome = compOutput(dist3(generator), 1); if ( outcome > 0 ) wins++; else if( outcome == 0 ) ties++; else losses++;  break;
        case 2:
	 std::cout << "You entered paper\n";  outcome = compOutput(dist3(generator), 2); if ( outcome > 0 ) wins++; else if( outcome == 0 ) ties++; else losses++; break;
        case 3:
	 std::cout << "You entered scissors\n";  outcome = compOutput(dist3(generator), 3); if ( outcome > 0 ) wins++; else if( outcome == 0 ) ties++; else losses++; break;
        default:
          std::cout << "Invalid entry please try again\n;";  break;
        }
        if (x == 0) break;
    }

    std::cout << "Total wins : " << wins << " Total losses: " << losses << " Ties: " << ties;

    return 0;
}

int compOutput(int computer, int player) {
    int val = 0;
    switch (computer) {
    case 1:
        switch (player) {
        case 1:
            std::cout << "Computer entered Rock. Rock ties Rock. Try again\n"; break;
        case 2:
            std::cout << "Computer entered Rock. Rock loses to Paper. You win\n"; val++; break;
        case 3:
            std::cout << "Computer entered Rock. Rock beats Scissors. You Lose\n"; val--; break;
        default:
            break;
        }
	break;
    case 2:
        switch (player) {
        case 1:
            std::cout << "Computer entered Paper . Paper beats Rock. You Lose\n"; val--; break;
        case 2:
            std::cout << "Computer entered Paper . Paper ties to Paper. Try again\n"; break;
        case 3:
            std::cout << "Computer entered Paper . Paper loses Scissors. You Win\n"; val++; break;
        default:
            break;
        }
	break;
    case 3:
        switch (player) {
        case 1:
            std::cout << "Computer entered Scissors. Scissors loses Rock. You Win\n"; val++; break;
        case 2:
            std::cout << "Computer entered Scissors. Scissors beats paper You Lose\n"; val--; break;
        case 3:
            std::cout << "Computer entered Scissors. Scissors ties scisssors. Try again\n"; break;
        default:
            break;
        }
	break;
    default: break;
    }
    return val;
}
