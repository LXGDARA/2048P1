
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
    class game{
        public:
        int board[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
        void addUp(){
            int counter = 4;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int ind = -1;
            int val1 = -1;
            int val2 = 0;

            // counter is set to equal 4, and also serves as the number of times the position of the boxes will increase in a proxy place
            for(ind = -1;ind<counter;ind++){
                // increases position in table
                for(val1 = -1; val1<counter; val1++){
                    // increases second position in which will be added
                    for(val2 = 0; val2<counter; val2++){
                        board[row1][ind] = board[row1][val1] + board[row2][val2]; // places values in one box one the table in row 1
                        board[row2][ind] = board[row2][val1] + board[row3][val2]; // places values in one box one the table in row 2
                        board[row3][ind] = board[row3][val1] + board[row4][val2]; // places values in one box one the table in row 3
                    }
                }
            }
        }

        void addRowsRt(){
            int counter = 4;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int ind = 0;
            int val1 = 0;
            int val2 = 0;

            // counter is set to equal 4, and also serves as the number of times the position of the boxes will increase in a proxy place
            for(ind = 0;ind<counter;ind++){
                // increases position in table
                for(val1 = 0; val1<counter; val1++){
                    // increases second position in which will be added
                    for(val2 = 1; val2<counter; val2++){
                        board[row1][ind] = board[row1][val1] + board[row1][val2]; // places values in one box one the table in row 1
                        board[row2][ind] = board[row2][val1] + board[row2][val2]; // places values in one box one the table in row 2
                        board[row3][ind] = board[row3][val1] + board[row3][val2]; // places values in one box one the table in row 3
                        board[row4][ind] = board[row4][val1] + board[row4][val2]; // places values in one box one the table in row 4
                    }
                }
            }
        }
        void addRowsLf(){
            int counter = 4;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int ind =0;
            int val1 = 0;
            int val2 = 1;

                // counter is set to equal 4, and also serves as the number of times the position of the boxes will increase in a proxy place
            for(ind = -1;ind<counter;ind++){
                // increases position in table
                for(val1 = -1; val1<counter; val1++){
                    // increases second position in which will be added
                    for(val2 = 0; val2<counter; val2++){
                        board[row1][ind] = board[row1][val1] + board[row1][val2]; // places values in one box one the table in row 1
                        board[row2][ind] = board[row2][val1] + board[row2][val2]; // places values in one box one the table in row 2
                        board[row3][ind] = board[row3][val1] + board[row3][val2]; // places values in one box one the table in row 3
                        board[row4][ind] = board[row4][val1] + board[row4][val2]; // places values in one box one the table in row 4
                    }
                }
            }
        }
        void addRowsDn(){
            int counter = 4;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int ind = 0;
            int val1 = 0;
            int val2 = 0;
            // counter is set to equal 4, and also serves as the number of times the position of the boxes will increase in a proxy place
            for(ind = 0;ind<counter;ind++){
                // increases position in table
                for(val1 = 0; val1<counter; val1++){
                    // increases second position in which will be added
                    for(val2 = 0; val2<counter; val2++){
                        board[row4][ind] = board[row3][val1] +  board[row4][val2]; // places values in one box one the table in row 1
                        board[row3][ind] = board[row2][val1] +  board[row3][val2]; // places values in one box one the table in row 2
                        board[row2][ind] = board[row1][val1] +  board[row2][val2]; // places values in one box one the table in row 3
                    }
                }
            }
        }
        void ShowG(){
            for(int i = 0; i <4; i++){
                for(int j = 0; j < 4; j++){
                    cout << board[i][j];
                }
            cout << endl;
        }
    }
        void boardinit(){
            int i = 0;
            while(i <2){
                int x = rand() % 4;
                int y = rand() % 4;
                board[x][y] = 2;
                i++;
            }
        }
};

int main()
{
    game grid;
    grid.boardinit();
    // randomizes positions to begin with or so it should
    int i = 1;
    //the purpose of this code is to see if works at least
    while(i == 1){
        grid.addUp();
        //Sleep(100 * 3);
        grid.addRowsRt();
        //Sleep(100 * 3);
        grid.addRowsDn();
        //Sleep(100 * 3);
        grid.addRowsLf();
        grid.ShowG();
    }
    return 0;
}
