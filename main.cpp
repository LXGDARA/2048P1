#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
using namespace std;
    int board[4][4] = {};
    class game{

        public:
        // adds up
        void addUp(){
            int counter = 3;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;

            // increases position in table
            for(val1 = 0; val1<counter; val1++){
                // makes sure that values are equal so that it can add up
                if(board[row1][val1] == board[row2][val1] && board[row1][val1] > 0){
                    board[row1][val1] ++;
                }
                // makes sure that value in colum is 0 so it can move everything up
                if(board[row1][val1] == 0){
                        board[row1][val1] = board[row2][val1];
                        board[row2][val1] = 0;
                }
                // makes sure that values are equal so that it can add up
                if(board[row2][val1] == board[row3][val1] && board[row2][val1] > 0){
                    board[row2][val1] ++;
                }
                // makes sure that value in colum is 0 so it can move everything up
                if(board[row2][val1] == 0){
                    board[row2][val1] = board[row3][val1];
                    board[row3][val1] = 0;
                }
                // makes sure that values are equal so that it can add up
                if(board[row3][val1] == board[row4][val1] && board[row3][val1] > 0){
                    board[row3][val1] ++;
                }
                // makes sure that value in colum is 0 so it can move everything up
                if(board[row3][val1] == 0){
                    board[row3][val1] = board[row4][val1];
                    board[row4][val1] = 0;
                }
           }
        }
        // adds right
        void addRowsRt(){
            int counter = 3;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;
            int val2 = 0;

            // increases position in colum
            for(val1 = 0; val1<counter; val1++){
                // increases second position in colum
                for(val2 = val1+1; val2<=3; val2++){
                    // makes sure that values are equal so that it can add right
                    if(board[row1][val2] == board[row1][val1] && board[row1][val2] > 0){
                        board[row1][val2] ++;
                    }
                    // makes sure that value in colum is 0 so it can move everything left
                    if(board[row1][val2] == 0){
                        board[row1][val2] = board[row1][val1];
                        board[row1][val1] = 0;
                    }
                    // makes sure that values are equal so that it can add right
                    if(board[row2][val2] == board[row2][val1] && board[row2][val2] > 0){
                        board[row2][val2] ++;
                    }
                    // makes sure that value in colum is 0 so it can move everything left
                    if(board[row2][val2] == 0){
                        board[row2][val2] = board[row2][val1];
                        board[row2][val1] = 0;
                    }
                    // makes sure that values are equal so that it can add right
                    if(board[row3][val2] == board[row3][val1] && board[row3][val2] > 0){
                        board[row3][val2] ++;
                    }
                    // makes sure that value in colum is 0 so it can move everything left
                    if(board[row3][val2] == 0){
                        board[row3][val2] = board[row3][val1];
                        board[row3][val1] = 0;
                    }
                    // makes sure that values are equal so that it can add right
                    if(board[row4][val2] == board[row4][val1] && board[row4][val2] > 0){
                        board[row4][val2] ++;
                    }
                    // makes sure that value in colum is 0 so it can move everything left
                    if(board[row4][val2] == 0){
                        board[row4][val2] = board[row4][val1];
                        board[row4][val1] = 0;
                    }
                }
            }
        }
        //adds left
        void addRowsLf(){
            int counter = 3;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;
            int val2 = 1;

            // increases position in colum
            for(val1 = 0; val1<counter; val1++){
                // increases second position in the colum
                for(val2 = val1+1; val2<=3; val2++){
                    if(board[row1][val1] == board[row1][val2] && board[row1][val1] > 0){
                        board[row1][val1] ++; // places values in one box one the table in row 1
                    }
                    // makes sure that value in colum is 0 so it can move everything left
                    if(board[row1][val1] == 0){
                        board[row1][val1] = board[row1][val2];
                        board[row1][val2] = 0;
                    }
                    // makes sure that values are equal so that it can add down
                    if(board[row2][val1] == board[row2][val2] && board[row2][val1] > 0){
                        board[row2][val1] ++;
                    }
                    // makes sure that value in colum is 0 so it can move everything left
                    if(board[row2][val1] == 0){
                        board[row2][val1] = board[row2][val2];
                        board[row2][val2] = 0;
                    }
                    // makes sure that values are equal so that it can add down
                    if(board[row3][val1] == board[row3][val2] && board[row3][val1] > 0){
                        board[row3][val1] ++;
                    }
                    // makes sure that value in colum is 0 so it can move everything left
                    if(board[row3][val1] == 0){
                        board[row3][val1] = board[row3][val2];
                        board[row3][val2] = 0;
                    }
                    // makes sure that values are equal so that it can add left
                    if(board[row4][val1] == board[row4][val2] && board[row4][val1] > 0){
                        board[row4][val1] ++;
                    }
                    // makes sure that value in colum is 0 so it can move everything left
                    if(board[row4][val1] == 0){
                        board[row4][val1] = board[row3][val2];
                        board[row4][val2] = 0;
                    }
                }
            }
        }
        //add down
        void addRowsDn(){
            int counter = 3;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;

            // increases the position in the colums
            for(val1 = 0; val1<counter; val1++){
                    // makes sure that values are equal so that it can add down
                    if(board[row4][val1] == board[row3][val1] && board[row4][val1] > 0){
                        board[row4][val1] ++;
                    }
                    // makes sure that value in colum is 0 so it can move everything down
                    if(board[row4][val1] == 0){
                        board[row4][val1] = board[row3][val1];
                        board[row3][val1] = 0;
                    }
                    // makes sure that values are equal so that it can add down
                    if(board[row3][val1] == board[row2][val1] && board[row3][val1] > 0){
                        board[row3][val1] ++;
                    }
                    // makes sure that value in colum is 0 so it can move everything down
                    if(board[row3][val1] == 0){
                        board[row3][val1] = board[row2][val1];
                        board[row2][val1] = 0;
                    }
                    // makes sure that values are equal so that it can add down
                    if(board[row2][val1] == board[row1][val1] && board[row2][val1] > 0){
                        board[row3][val1] ++;
                    }
                    // makes sure that value in colum is 0 so it can move everything down
                    if(board[row2][val1] == 0){
                        board[row2][val1] = board[row1][val1];
                        board[row1][val1] = 0;
                    }
                    // makes sure that values are equal so that it can add down
                    if(board[row1][val1] == board[row2][val1] && board[row1][val1] > 0){
                        board[row2][val1] ++;
                    }
            }
        }
        // shows current status of all blocks
        void showG(){
            for(int i = 0; i <4; i++){
                for(int j = 0; j < 4; j++){
                    cout << "\t\t" << board[i][j] << "   ";
                }
            cout << endl;
            }
        }
        // randomizes two positions to begin the game with
        void randpos(){
            int i;
            int y;
            int x;
            i = 0;
            for(i = 0; i<2; i++){
                x = rand() % 4;
                y = rand() % 4;
                board[x][y] = 1;
            }
        }
        // fills random spaces so the game can progress
        void spcfill(){
            int y;
            int x;
            x = rand() % 4;
            y = rand() % 4;
            if(board[x][y] == 0){
                board[x][y] = 1;
            }
        }
        // checks if we're at 2^36
        void gamechk(){
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;

            for(int i = 0; i <=3; i++){
                    switch(board[row1][i]){
                        case 36 :
                             cout << "Game over you win!";
                    }
            }
        }
        // checks if all the spaces are filled and unequal to the ones below, above or beside them
        void gamovr(){
            for(int i = 0; i<=3; i++){
                for(int j = 0; j<=3; j++){
                    if(board[i][j] != board[i + 1][j]){
                    system("PAUSE");
                    cout << "game over!!";
                    }
                }
            }
        }
        // initializes board , so all values are equal to 0
        void boardinit(){
            int counter = 4;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;
            int val2 = 0;
            // counter is set to equal 3, and also serves as the number of times the position of the boxes will increase in a proxy place
            for(val1 = 0;val1<counter;val1++){
                board[row1][val1] = 0;
                board[row2][val1] = 0;
                board[row3][val1] = 0;
                board[row4][val1] = 0;
            }
        }
   };

int main()
{
    srand (time(NULL));// reinitializes board

    game grid; // creates the object in which relates to functions to be called
    grid.boardinit(); //initializes all values to 0
    grid.randpos(); //sets two random positions to 1
    cout << "\t\t" << "Welcome to 2048!!!" << endl << "\t\t" << "The game plays itself, so sit back and watch!" << endl << endl;

    int i = 1;
    //the purpose of this code is to have the game play by itself
    while(i>0){

    int j;
    j = rand() % 4;// determines the way the grid will add. 0 = up, 1 = right, 2 = down, 3 = left

    switch(j){
    case 0 :
    Sleep(100 * 3);// delays so we can understand the what's going on
    grid.addUp();// adds up
    grid.showG();// shows the current status of the board
    grid.gamechk();// checks if the game is over(if we've attained a value above 2^36)
    grid.spcfill();// randomly puts 2^1 in a random spot
    cout << endl << "\t\t" << "^" << endl << "|" << endl << "|" << endl;// indicates direction that's occouring
    break;

    // everything beyond here should be self-explanitory

    case 1:
    Sleep(100 * 3);
    grid.addRowsRt();
    grid.showG();
    grid.gamechk();
    grid.spcfill();
    cout << endl << "\t\t" << "-" << "-" << ">" << endl;

    case 2:
    Sleep(100 * 3);
    grid.addRowsDn();
    grid.showG();
    grid.gamechk();
    grid.spcfill();
    cout << endl << "\t\t" << "|" << endl << "|" << endl << "v" << endl;

    case 3:
    Sleep(100 * 3);
    grid.addRowsLf();
    grid.showG();
    grid.gamechk();
    grid.spcfill();
    cout << endl << "\t\t" << "<" << "-" << "-" << endl;

    }

    }
    return 0;
}
