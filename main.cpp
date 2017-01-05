#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

    class game{
    public:
    int row2 = 1;
    int row1 = 0;
    int row3 = 2;
    int row4 = 3;
    int counter = 4;
    int Size[4][4] = {
        {1, 1, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    void addUp(){
        int ind = -1;
        int val1 = -1;
        int val2 = 0;

        // counter is set to equal 4, and also serves as the number of times the position of the boxes will increase in a proxy place
        for(ind = -1;ind<counter;ind++){
            // increases position in table
            for(val1 = -1; val1<counter; val1++){
                // increases second position in which will be added
                for(val2 = 0; val2<counter; val2++){
                    Size[row1][ind] = Size[row1][val1] + Size[row2][val2]; // places values in one box one the table in row 1
                    Size[row2][ind] = Size[row2][val1] + Size[row3][val2]; // places values in one box one the table in row 2
                    Size[row3][ind] = Size[row3][val1] + Size[row4][val2]; // places values in one box one the table in row 3
                }
            }
        }
        system("CLS");
        cout << Size[row1][0] << " " << Size[row1][1] << " " << Size[row1][2] << " " << Size[row1][3] << endl;
        cout << Size[row2][0] << " " << Size[row2][1] << " " << Size[row2][2] << " " << Size[row2][3] << endl;
        cout << Size[row3][0] << " " << Size[row3][1] << " " << Size[row3][2] << " " << Size[row3][3] << endl;
        cout << Size[row4][0] << " " << Size[row4][1] << " " << Size[row4][2] << " " << Size[row4][3] << endl;
    }

    void addRowsRt(){
        int ind = 0;
        int val1 = 0;
        int val2 = 0;

        // counter is set to equal 4, and also serves as the number of times the position of the boxes will increase in a proxy place
        for(ind = 0;ind<counter;ind++){
            // increases position in table
            for(val1 = 0; val1<counter; val1++){
                // increases second position in which will be added
                for(val2 = 1; val2<counter; val2++){
                    Size[row1][ind] = Size[row1][val1] + Size[row1][val2]; // places values in one box one the table in row 1
                    Size[row2][ind] = Size[row2][val1] + Size[row2][val2]; // places values in one box one the table in row 2
                    Size[row3][ind] = Size[row3][val1] + Size[row3][val2]; // places values in one box one the table in row 3
                    Size[row4][ind] = Size[row4][val1] + Size[row4][val2]; // places values in one box one the table in row 4
                }
            }
        }

       system("CLS");
       cout << Size[row1][0] << " " << Size[row1][1] << " " << Size[row1][2] << " " << Size[row1][3] << endl;
       cout << Size[row2][0] << " " << Size[row2][1] << " " << Size[row2][2] << " " << Size[row2][3] << endl;
       cout << Size[row3][0] << " " << Size[row3][1] << " " << Size[row3][2] << " " << Size[row3][3] << endl;
       cout << Size[row4][0] << " " << Size[row4][1] << " " << Size[row4][2] << " " << Size[row4][3] << endl;

    }
    void addRowsLf(){

        int ind =0;
        int val1 = 0;
        int val2 = 1;

            // counter is set to equal 4, and also serves as the number of times the position of the boxes will increase in a proxy place
        for(ind = -1;ind<counter;ind++){
            // increases position in table
            for(val1 = -1; val1<counter; val1++){
                // increases second position in which will be added
                for(val2 = 0; val2<counter; val2++){
                    Size[row1][ind] = Size[row1][val1] + Size[row1][val2]; // places values in one box one the table in row 1
                    Size[row2][ind] = Size[row2][val1] + Size[row2][val2]; // places values in one box one the table in row 2
                    Size[row3][ind] = Size[row3][val1] + Size[row3][val2]; // places values in one box one the table in row 3
                    Size[row4][ind] = Size[row4][val1] + Size[row4][val2]; // places values in one box one the table in row 4
                }
            }
        }
       system("CLS");
       cout << Size[row1][0] << " " << Size[row1][1] << " " << Size[row1][2] << " " << Size[row1][3] << endl;
       cout << Size[row2][0] << " " << Size[row2][1] << " " << Size[row2][2] << " " << Size[row2][3] << endl;
       cout << Size[row3][0] << " " << Size[row3][1] << " " << Size[row3][2] << " " << Size[row3][3] << endl;
       cout << Size[row4][0] << " " << Size[row4][1] << " " << Size[row4][2] << " " << Size[row4][3] << endl;
    }
    void addRowsDn(){

        int ind = 0;
        int val1 = 0;
        int val2 = 0;
        // counter is set to equal 4, and also serves as the number of times the position of the boxes will increase in a proxy place
        for(ind = 0;ind<counter;ind++){
            // increases position in table
            for(val1 = 0; val1<counter; val1++){
                // increases second position in which will be added
                for(val2 = 0; val2<counter; val2++){
                    Size[row4][ind] = Size[row3][val1] +  Size[row4][val2]; // places values in one box one the table in row 1
                    Size[row3][ind] = Size[row2][val1] +  Size[row3][val2]; // places values in one box one the table in row 2
                    Size[row2][ind] = Size[row1][val1] +  Size[row2][val2]; // places values in one box one the table in row 3
                }
            }
        }
       system("CLS");
       cout << Size[row1][0] << " " << Size[row1][1] << " " << Size[row1][2] << " " << Size[row1][3] << endl;
       cout << Size[row2][0] << " " << Size[row2][1] << " " << Size[row2][2] << " " << Size[row2][3] << endl;
       cout << Size[row3][0] << " " << Size[row3][1] << " " << Size[row3][2] << " " << Size[row3][3] << endl;
       cout << Size[row4][0] << " " << Size[row4][1] << " " << Size[row4][2] << " " << Size[row4][3] << endl;
    }
    int ShowG(){
        return Size[row1][0];
        return Size[row1][1];
        return Size[row1][2];
        return Size[row1][3];

        return Size[row2][0];
        return Size[row2][1];
        return Size[row2][2];
        return Size[row2][3];

        return Size[row3][0];
        return Size[row3][1];
        return Size[row3][2];
        return Size[row3][3];

        return Size[row4][0];
        return Size[row4][1];
        return Size[row4][2];
        return Size[row4][3];


       system("CLS");
       cout << Size[row1][0] << " " << Size[row1][1] << " " << Size[row1][2] << " " << Size[row1][3] << endl;
       cout << Size[row2][0] << " " << Size[row2][1] << " " << Size[row2][2] << " " << Size[row2][3] << endl;
       cout << Size[row3][0] << " " << Size[row3][1] << " " << Size[row3][2] << " " << Size[row3][3] << endl;
       cout << Size[row4][0] << " " << Size[row4][1] << " " << Size[row4][2] << " " << Size[row4][3] << endl;

    }

    };

int main()
{
    game grid;
    int k = 2;
    int x;
    int y;
    // randomizes positions to begin with or so it should
    for(k = 2; k>=0; k--){
        x = rand() % 4;

        y = rand() % 4;

        grid.Size[x][y] = 2;
    }

    int i = 1;
    //the purpose of this code is to see if works at least
    while(i == 1){
           grid.addUp();
           grid.addRowsRt();
           grid.addRowsDn();
           grid.addRowsLf();
    }
    return 0;
}
