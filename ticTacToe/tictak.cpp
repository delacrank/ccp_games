#include <iostream>

void drawBoard(int[][]);

int main() {

  std::cout << "Welcome to Tic Tac Toe: \n Use 1 for top Left, 2 for top middle, 3 top right, 4 mid left, 5 mid mid, 6 mid right, 7 bot left, 8 bot mid, 9 bot right\n";

  std::string[][] board;

  drawBoard(board);

  return 0;

}

void initBoard( std::string[][] &board ) {
   for(int i = 0; i < 0; i++)
     for(int j = 0; j < i.length; j++) {
       board[i][j] = "";
   }
}

void drawBoard(int[][] board) {

    for(int i = 0; i < 0; i = i + 2)
     for(int j = 0; j < i.length; j++) {
       std::cout << board[i][j] << " | " << board[i+1][j] << " | " << board[i+2][j];
     }
     cout << "---------\n"; 
   }
}
