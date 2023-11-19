#include <iostream>

void drawBoard(std::string[3][3]);
void initBoard(std::string[3][3]);
void promptMove(int, std::string[3][3]);
bool winCondition(std::string[3][3], std::string);

int main() {

  std::cout << "Welcome to Tic Tac Toe: \n Use 1 for top Left, 2 for top middle, 3 top right, 4 mid left, 5 mid mid, 6 mid right, 7 bot left, 8 bot mid, 9 bot right\n Or use 0 to quit\n\n";
  
  std::string board[3][3];

  initBoard(board);
  drawBoard(board);
  promptMove(0, board);


  return 0;
}

void promptMove(int order, std::string board[3][3]) {

    int move = 0;
    while (std::cin >> move) {
        switch (order) {
        case 0:
            switch (move) {
            case 1: if(board[0][0] == " ") { board[0][0] = "x"; board[2][2] = "o"; } break; 
            case 2: if(board[0][1] == " ") { board[0][1] = "x"; board[1][1] = "o"; } break; 
            case 3: if(board[0][2] == " ") { board[0][2] = "x"; board[2][0] = "o"; } break; 
            case 4: if(board[1][0] == " ") { board[1][0] = "x"; board[1][1] = "o"; } break; 
	    case 5: if(board[1][1] == " ") { board[1][1] = "x"; board[2][0] = "o"; } break; 
            case 6: if(board[1][2] == " ") { board[1][2] = "x"; board[1][1] = "o"; } break; 
            case 7: if(board[2][0] == " ") { board[2][0] = "x"; board[0][2] = "o"; } break; 
            case 8: if(board[2][1] == " ") { board[2][1] = "x"; board[1][1] = "o"; } break; 
            case 9: if(board[2][2] == " ") { board[2][2] = "x"; board[0][0] = "o"; } break; 
            default: break;
            }
            break;
        default: break;
        }
        drawBoard(board);
	if(winCondition(board, "x")) { std::cout << "Player wins\n\n"; break; }
	if(winCondition(board, "o")) { std::cout << "Computer wins\n\n"; break; }
        std::cout << "\n\nUse 1 for top Left, 2 for top middle, 3 top right, 4 mid left, 5 mid mid, 6 mid right, 7 bot left, 8 bot mid, 9 bot right\n Or use 0 to quit\n\n";
        if (move == 0) break;
    }

}


void initBoard( std::string board[3][3] ) {
   for(int i = 0; i < 3; i++)
     for(int j = 0; j < 3; j++) {
       board[i][j] = " ";
   }
}


void drawBoard( std::string board[3][3]) {
  std::cout << "drawing board:\n\n";
  for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
	std::cout << board[i][j];
	if(j < 2) std::cout << " | ";
     }
     if(i < 2) std::cout << "\n---------\n";
  }
  std::cout << "\n\n";
}


bool winCondition( std::string board[3][3], std::string player ) {
  // top left
  if(board[0][0] == board[0][1] && board[0][0] == board[0][2] && board[0][0] == player) return true;
  if(board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] == player) return true;
  if(board[0][0] == board[1][0] && board[0][0] == board[2][0] && board[0][0] == player) return true;
  // top mid
  if(board[0][1] == board[1][1] && board[0][1] == board[1][2] && board[0][1] == player) return true;
  // top right
  if(board[0][2] == board[1][2] && board[0][2] == board[2][2] && board[0][2] == player) return true;
  if(board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] == player) return true;
  // mid left
  if(board[1][0] == board[1][1] && board[1][0] == board[1][2] && board[1][0] == player) return true;
  return false;
}





















  

  
