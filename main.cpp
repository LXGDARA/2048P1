#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>
using namespace std;
    int board[4][4] = {};
    class game{

        public:
        void addUp(){
            int counter = 3;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;

            // increases position in table
            for(val1 = 0; val1<counter; val1++){
                // increases second position in which will be added
                if(board[row1][val1] == board[row2][val1]){
                    board[row1][val1] += board[row2][val1]; // places values in one box one the table in row 1
                    board[row2][val1] = 0;
                }
                if(board[row1][val1] == 0){
                        board[row1][val1] = board[row2][val1];
                        board[row2][val1] = 0;
                }
                if(board[row2][val1] == board[row3][val1]){
                    board[row2][val1] += board[row3][val1]; // places values in one box one the table in row 2
                    board[row3][val1] = 0;
                }
                if(board[row2][val1] == 0){
                    board[row2][val1] = board[row3][val1];
                    board[row3][val1] = 0;
                }
                if(board[row3][val1] == board[row4][val1]){
                    board[row3][val1] += board[row4][val1]; // places values in one box one the table in row 3}
                    board[row4][val1] = 0;
                }
                if(board[row3][val1] == 0){
                    board[row3][val1] = board[row4][val1];
                    board[row4][val1] = 0;
                }
           }
        }

        void addRowsRt(){
            int counter = 3;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;
            int val2 = 0;

            // increases position in table
            for(val1 = 0; val1<counter; val1++){
                // increases second position in which will be added
                for(val2 = val1+1; val2<=3; val2++){
                    if(board[row1][val2] == board[row1][val1]){
                        board[row1][val2] += board[row1][val1]; // places values in one box one the table in row 1
                    }
                    if(board[row1][val2] == 0){
                        board[row1][val2] = board[row1][val1];
                        board[row1][val1] = 0;
                    }
                    if(board[row2][val2] == board[row2][val1]){
                        board[row2][val2] += board[row2][val1]; // places values in one box one the table in row 2
                    }
                    if(board[row2][val2] == 0){
                        board[row2][val2] = board[row2][val1];
                        board[row2][val1] = 0;
                    }
                    if(board[row3][val2] == board[row3][val1]){
                        board[row3][val2] += board[row3][val1]; // places values in one box one the table in row 3
                    }
                    if(board[row3][val2] == 0){
                        board[row3][val2] = board[row3][val1];
                        board[row3][val1] = 0;
                    }
                    if(board[row4][val2] == board[row4][val1]){
                        board[row4][val2] += board[row4][val1]; // places values in one box one the table in row 4
                    }
                    if(board[row4][val2] == 0){
                        board[row4][val2] = board[row4][val1];
                        board[row4][val1] = 0;
                    }
                }
            }
        }
        void addRowsLf(){
            int counter = 3;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;
            int val2 = 1;

            // increases position in table
            for(val1 = 0; val1<counter; val1++){
                // increases second position in which will be added
                for(val2 = val1+1; val2<=3; val2++){
                    if(board[row1][val1] == board[row1][val2]){
                        board[row1][val1] += board[row1][val2]; // places values in one box one the table in row 1
                    }
                    if(board[row1][val1] == 0){
                        board[row1][val1] = board[row1][val2];
                        board[row1][val2] = 0;
                    }
                    if(board[row2][val1] == board[row2][val2]){
                        board[row2][val1] += board[row2][val2]; // places values in one box one the table in row 2
                    }
                    if(board[row2][val1] == 0){
                        board[row2][val1] = board[row2][val2];
                        board[row2][val2] = 0;
                    }
                    if(board[row3][val1] == board[row3][val2]){
                        board[row3][val1] += board[row3][val2]; // places values in one box one the table in row 3
                    }
                    if(board[row3][val1] == 0){
                        board[row3][val1] = board[row3][val2];
                        board[row3][val2] = 0;
                    }
                    if(board[row4][val1] == board[row4][val2]){
                        board[row4][val1] += board[row4][val2]; // places values in one box one the table in row 4
                    }
                    if(board[row4][val1] == 0){
                        board[row4][val1] = board[row3][val2];
                        board[row4][val2] = 0;
                    }
                }
            }
        }
        void addRowsDn(){
            int counter = 3;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;

            // counter is set to equal 4, and also serves as the number of times the position of the boxes will increase in a proxy place
            for(val1 = 0; val1<counter; val1++){
                    // increases second position in which will be added
                    if(board[row1][val1] == board[row2][val1]){
                        board[row2][val1] += board[row1][val1];
                    }
                    if(board[row2][val1] == 0){
                        board[row2][val1] = board[row1][val1];
                        board[row1][val1] = 0;
                    }
                    if(board[row2][val1] == board[row3][val1]){
                        board[row3][val1] += board[row2][val1]; // places values in one box one the table in row 3
                    }
                    if(board[row3][val1] == 0){
                        board[row3][val1] = board[row2][val1];
                        board[row2][val1] = 0;
                    }
                    if(board[row4][val1] == board[row4][val1]){
                        board[row4][val1] += board[row3][val1]; // places values in one box one the table in row 2
                    }
                    if(board[row4][val1] == 0){
                        board[row4][val1] = board[row3][val1];
                        board[row3][val1] = 0;
                    }
            }
        }
        void showG(){
            for(int i = 0; i <4; i++){
                for(int j = 0; j < 4; j++){
                    cout << "\t\t" << board[i][j] << "   ";
                }
            cout << endl;
            }
        }
        void randpos(){
            int i;
            int y;
            int x;
            i = 0;
            for(i = 0; i<2; i++){
                x = rand() % 4;
                y = rand() % 4;
                cout << "x:" << x << "  y:" << y << endl;
                board[x][y] = 1;
            }
            cout << "finish while loop in randpos" << endl;
        }
        void spcfill(){
            int y;
            int x;
            x = rand() % 4;
            y = rand() % 4;
            if(board[x][y] == 0){
                board[x][y] = 1;
            }
        }
        void gamechk(){
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;

           for(int i = 1; i<4; i++){
                if(board[row1][i] || board[row2][i] || board[row3][i] || board[row4][i] == 36){
                    break;
                    system("pause");
                    cout << "Congrats you reached 2^36 and beat Mr.shelby's highscore!!";
                }
            }
        }
        void gamovr(){
            for(int i = 0; i<=3; i++){
                for(int j = 0; j<=3; j++){
                    if(board[i][j] != board[i + 1][j]){
                    system("pause");
                    cout << "game over!!";
                    }
                }
            }
        }
        void boardinit(){
            int counter = 4;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;
            int val2 = 0;
            // counter is set to equal 4, and also serves as the number of times the position of the boxes will increase in a proxy place
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

    game grid;
    grid.boardinit();
    grid.randpos();
    // randomizes positions to begin with or so it should
    int i = 1;
    //the purpose of this code is to see if works at least
    while(i>0){

    int j;
    j = rand() % 4;

    switch(j){
    case 0 :
    Sleep(1000 * 3);
    grid.addUp();
    grid.showG();
    grid.gamechk();
    grid.spcfill();
    cout << endl << "^" << endl << "|" << endl << "|";
    break;

    case 1:
    Sleep(1000 * 3);
    grid.addRowsRt();
    grid.showG();
    grid.gamechk();
    grid.spcfill();
    cout << endl << "-" << "-" << ">";

    case 2:
    Sleep(1000 * 3);
    grid.addRowsDn();
    grid.showG();
    grid.gamechk();
    grid.spcfill();
    cout << endl << "|" << endl << "|" << endl << "v" ;

    case 3:
    Sleep(1000 * 3);
    grid.addRowsLf();
    grid.showG();
    grid.gamechk();
    grid.spcfill();
    cout << endl << "<" << "-" << "-";

    }

    }
    return 0;
}
