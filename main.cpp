#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;
    int board[4][4] = {};   
    class game{
         
        public:
        void addUp(){
            int counter = 4;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;
            int val2 = 0;

           // increases position in table
                for(val1 = 0; val1<counter; val1++){
                    // increases second position in which will be added
                        
                        board[row1][val1] += board[row2][val1]; // places values in one box one the table in row 1
                        board[row2][val1] += board[row3][val1]; // places values in one box one the table in row 2
                        board[row3][val1] += board[row4][val1]; // places values in one box one the table in row 3}      
                }
           }

        void addRowsRt(){
            int counter = 4;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;
            int val2 = 0;

                // increases position in table
                for(val1 = 0; val1<counter; val1++){
                    // increases second position in which will be added
                    for(val2 = 1; val2<=3; val2++){
                        board[row1][val1] += board[row1][val2]; // places values in one box one the table in row 1
                        board[row2][val1] += board[row2][val2]; // places values in one box one the table in row 2
                        board[row3][val1] += board[row3][val2]; // places values in one box one the table in row 3
                        board[row4][val1] += board[row4][val2]; // places values in one box one the table in row 4
                    }
                }
            }
        void addRowsLf(){
            int counter = 4;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;
            int val2 = 1;

                // increases position in table
                for(val1 = 0; val1<counter; val1++){
                    // increases second position in which will be added
                    for(val2 = 1; val2<=3; val2++){
                        board[row1][val1] += board[row1][val2]; // places values in one box one the table in row 1
                        board[row2][val1] += board[row2][val2]; // places values in one box one the table in row 2
                        board[row3][val1] += board[row3][val2]; // places values in one box one the table in row 3
                        board[row4][val1] += board[row4][val2]; // places values in one box one the table in row 4
                    }
                }
       }
        void addRowsDn(){
            int counter = 4;
            int row2 = 1;
            int row1 = 0;
            int row3 = 2;
            int row4 = 3;
            int val1 = 0;
            int val2 = 0;
            // counter is set to equal 4, and also serves as the number of times the position of the boxes will increase in a proxy place
                for(val1 = 0; val1<counter; val1++){
                    // increases second position in which will be added
                        board[row1][val1] += board[row1][val2]; // places values in one box one the table in row 1
                        board[row2][val1] += board[row3][val2]; // places values in one box one the table in row 2
                        board[row3][val1] += board[row4][val2]; // places values in one box one the table in row 3
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
            showG();
            i = 0;
            while(i <2){
                x = rand() % 4;
                y = rand() % 4;
                cout << "x:" << x << "  y:" << y << endl;
                board[x][y] = 1;
                showG();
                i++;
            }
            cout << "finish while loop in randpos" << endl;
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
    int i = 10;
    //the purpose of this code is to see if works at least
    while(i>0){
        grid.addUp();
        Sleep(1000 * 3);
        grid.showG();
        grid.addRowsRt();
        Sleep(1000 * 3);
        grid.showG();
        grid.addRowsDn();
        Sleep(1000 * 3);
        grid.showG();
        grid.addRowsLf();
        Sleep(1000 * 3);
        grid.showG();
    }
    return 0;
}

