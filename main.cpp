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
            int i = 0;
            int j = 0;
            // increases position in table
            for(i = 0; i<4; i++){
                for(j = 0; j<4; j++){
                    if(board[i][j] == board[i + 1][j] && board[i][j]>0 && board[i + 1][j]>0){
                        if(i == 0){
                            board[i][j]++;
                            board[i + 1][j] = board[i+2][j];
                            board[i+3][j] = 0;
                        }
                        if(i == 1){
                            board[i][j]++;
                            board[i + 1][j] = board[i+2][j];
                        }
                        if(i == 2){
                            board[i][j]++;
                            board[i + 1][j] = 0;
                        }
                    }
                    if(board[i][j] == 0){
                        board[i][j] = board[i+1][j];
                        board[i + 1][j] = board[i+2][j];
                        board[i+2][j] = board[i+3][j];
                        board[i+3][j] = 0;
                    }
                }
            }
        }
        // adds right
        void addRowsRt(){
            int i = 0;
            int j = 3;
            for(i = 0; i<4; i++){
                for(j = 3; j>0; j--){
                    if(board[i][j] == board[i][j-1] && board[i][j]>0 && board[i][j-1]>0){
                        if(j == 3){
                            board[i][j]++;
                            board[i][j -1] = board[i][j-2];
                            board[i][j-2] = board[i][j-3];
                            board[i][j-3] = 0;
                        }
                        if(j == 2){
                            board[i][j]++;
                            board[i][j -1] = board[i][j-2];
                            board[i][j-2] = 0;
                        }
                        if(j == 1){
                            board[i][j]++;
                            board[i][j-1] = 0;
                        }
                    }
                    if(board[i][j] == 0){
                        board[i][j] = board[i][j-1];
                        board[i][j -1] = board[i][j-2];
                        board[i][j-2] = board[i][j-3];
                        board[i][j-3] = 0;
                    }
                }
            }
}

        //adds left
        void addRowsLf(){
            // increases position in colum
                // increases second position in the colum
            for(int i = 0; i<4; i++){
                for(int j = 0; j<4; j++){
                    if(board[i][j] == board[i][j+1] && board[i][j]>0 && board[i][j+1]>0){
                        if(j == 0){
                            board[i][j]++;
                            board[i][j+1] = board[i][j+2];
                            board[i][j+2] = board[i][j+3];
                            board[i][j+3] = 0;
                        }
                        if(j == 1){
                            board[i][j]++;
                            board[i][j+1] = board[i][j+2];
                            board[i][j+2] = 0;
                        }
                        if(j == 2){
                            board[i][j]++;
                            board[i][j+1] = 0;
                        }
                    }
                    if(board[i][j] == 0){
                        board[i][j] = board[i][j+1];
                        board[i][j+1] = board[i][j+2];
                        board[i][j+2] = board[i][j+3];
                        board[i][j+3] = 0;
                    }
                }
            }

        }
        //add down
       void addRowsDn(){
            for(int i =3; i>=0; i--){
                for(int j = 0; j<4; j++){
                    if(board[i][j] == board[i-1][j]&& board[i][j]>0 && board[i-1][j]>0){
                        if(i == 3){
                            board[i][j]++;
                            board[i-1][j] = board[i-2][j];
                            board[i-2][j] = board[i-3][j];
                            board[i-3][j] = 0;
                        }
                        if(i == 2){
                            board[i][j]++;
                            board[i-1][j] = board[i-2][j];
                            board[i-2][j] = 0;
                        }
                        if(i == 2){
                            board[i][j]++;
                            board[i-1][j] = 0;
                        }
                    }
                    if(board[i][j] == 0){
                        board[i][j] = board[i-1][j];
                        board[i-1][j] = board[i-2][j];
                        board[i-2][j] = board[i-3][j];
                        board[i-3][j] = 0;
                    }
                }
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
                board[x][y] = 0;
                board[x][y] = 1;
            }
        }
        // checks if we're at 2^36
        void gamechk(){
            int row1 = 0;
            for(row1 = 0; row1<4; row1++){
                for(int i = 0; i <4; i++){
                    switch(board[row1][i]){
                        case 36 :
                        cout << "Game over you win!";
                    }
                }
            }
        }
        // checks if all the spaces are filled and unequal to the ones below, above or beside them
        void gamovr(){
            for(int i = 0; i<4; i++){
                for(int j = 0; j<=3; j++){
                    if(board[i][j] != board[i + 1][j] && board[i][j] > 0){
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
            // counter is set to equal 3, and also serves as the number of times the position of the boxes will increase in a proxy place
            for(val1 = 0;val1<counter;val1++){
                board[row1][val1] = 0;
                board[row2][val1] = 0;
                board[row3][val1] = 0;
                board[row4][val1] = 0;
            }
        }
   };

   class chks{

    public:
    int countr = 4;
    int row2 = 1;
    int row1 = 0;
    int row3 = 2;
    int row4 = 3;

    //checks in the up direction
    int match = 0;
    int upchk(){
        int val1 = 0;
        int val2 = 0;
        int countr = 4;
        int upbrd[4][4] = {};
            for(val1 = 0; val1<countr; val1++){
                for(val2 = 0; val2<countr; val2++){
                    upbrd[val1][val2] = board[val1][val2];
                }
            }
        val1 = 0;
         for(val1 = 0; val1<=3; val1++){
                if(upbrd[0][val1] == upbrd[1][val1] && upbrd[0][val1] != 0 && upbrd[1][val1] > 0){
                    match++;
                }

                if(upbrd[1][val1] == upbrd[2][val1] && upbrd[2][val1] > 0 && upbrd[1][val1] > 0){
                    match++;
                }

                // makes sure that values are equal so that it can add up
                if(upbrd[2][val1] == upbrd[3][val1] && upbrd[2][val1] > 0 && upbrd[3][val1] > 0){
                    match++;
                }

        }
        return match;
        for(int i = 0; i<4; i++){
            for(int j = 0; j<4; j++){
                upbrd[i][j] = 0;
            }
        }
    }
    //checks in the right direction
    int match2 = 0;
    int rghtchk(){
        int val1 = 0;
        int val2 = 0;
        int countr = 4;
        int rghtbrd[4][4] = {};
        for(val1 = 0; val1<4; val1++){
            for(val2 = 0; val2<4; val2++){
                rghtbrd[val1][val2] = board[val1][val2];
            }
        }
        val1 = 0;
        int j = 1;
        for(val1 = 0; val1<4; val1++){
            for(j = 1; j<=3; j++){
                // makes sure that values are equal so that it can add right
                if(rghtbrd[j][0] == rghtbrd[j][1] && rghtbrd[j][1] > 0 && rghtbrd[j][0] > 0){
                    match2++;
                }
                if(rghtbrd[j][1] == rghtbrd[j][2] && rghtbrd[j][1] > 0 && rghtbrd[j][2] > 0){
                    match2++;
                }
                // makes sure that values are equal so that it can add right
                if(rghtbrd[j][2] == rghtbrd[j][3] && rghtbrd[j][2] > 0 && rghtbrd[j][3] > 0){
                    match2++;
                }
            }
        }
        return match2;
        for(int i = 0; i<4; i++){
            for(int j = 0; j<4; j++){
                rghtbrd[i][j] = 0;
            }
        }
    }
    //checks in the down direction
    int match3 = 0;
    int dwnchk(){
        int val1 = 0;
        int val2 = 0;
        int countr = 4;
        int dwnbrd[4][4] = {};
        for(val1 = 0; val1<countr; val1++){
            for(val2 = 0; val2<countr; val2++){
                dwnbrd[val1][val2] = board[val1][val2];
            }
        }
        val1 = 0;
        val2 = 0;
        for(val1 = 0; val1<countr; val1++){
                if(dwnbrd[3][val1] == dwnbrd[2][val1] && dwnbrd[3][val1] != 0 && dwnbrd[2][val1] != 0){
                    match3++;
                }

                if(dwnbrd[2][val1] == dwnbrd[1][val1] && dwnbrd[2][val1] != 0 && dwnbrd[1][val1] != 0){
                    match3++;
                }

                // makes sure that values are equal so that it can add down
                if(dwnbrd[1][val1] == dwnbrd[0][val1] && dwnbrd[1][val1] != 0 && dwnbrd[0][val1] != 0){
                    match3++;
                }

            }

        return match3;
        for(int i = 0; i<4; i++){
            for(int j = 0; j<4; j++){
                dwnbrd[i][j] = 0;
            }
        }
    }

    //checks in the left direction
    int match4 = 0;
    int lftchk(){
        int val1 = 0;
        int val2 = 0;
        int lftbrd[4][4] = {};
        for(val1 = 0; val1<4; val1++){
            for(val2 = 0; val2<4; val2++){
                lftbrd[val1][val2] = board[val1][val2];
            }
        }
        val1 = 0;
        for(val1 = 0; val1<4; val1++){
                if(lftbrd[val1][0] == lftbrd[val1][1] && lftbrd[val1][0] != 0 && lftbrd[val1][1] != 0){
                    match4++;
                }
                // makes sure that values are equal so that it can add down
                if(lftbrd[val1][2] == lftbrd[val1][3] && lftbrd[val1][2] != 0 && lftbrd[val1][3] != 0){
                    match4++;
                }
        }
        return match4;
        for(int i = 0; i<4; i++){
            for(int j = 0; j<4; j++){
                lftbrd[i][j] = 0;
            }
        }
    }
    //matchret will return match values
    int matchret(){
        return match;
    }
    int matchret2(){
        return match2;
    }
    int matchret3(){
        return match3;
    }
    int matchret4(){
        return match4;
    }

    int matchrein(){
        match = 0;
    }

    int matchrein2(){
        match2 = 0;
    }
    int matchrein3(){
        match3 = 0;
    }
    int matchreint4(){
        match4 = 0;
    }
    int totmvs = 0;
    // shows current status of all blocks
        void showG(){
            int myarray[] = {match, match2, match3, match4};
            string one = "possible additions up";
            string two = "Possible additions right";
            string three = "Possible additions down";
            string four = "Possible additions left";
            string anarray[] = {one, two, three, four};
            for(int i = 0; i <4; i++){
                for(int j = 0; j < 4; j++){
                    cout << board[i][j] << "   ";
                }
            cout << myarray[i] << anarray[i] << "\t\t" << totmvs << "Actual moves made" << endl;
            }
        }

   };

int main()
{

    chks gameobj;
    srand (time(NULL));//sets seed for randomiser
    //srand (0);
    game grid; // creates the object in which relates to functions to be called
    grid.boardinit(); //initializes all values to 0
    grid.randpos(); //sets two random positions to 1
    cout << "\t\t" << "Welcome to 2048!!!" << endl << "\t\t" << "The game plays itself, so sit back and watch!" << endl << endl;
    int l = 10;
    //the purpose of the first while loop is to mess up the game a bit
    while(l>0){
        int j;
        j = rand() % 4;// determines the way the grid will add. 0 = up, 1 = right, 2 = down, 3 = left
        switch(j){
            case 0 :
            Sleep(100 * 3);// delays so we can understand the what's going on
            grid.addUp();// adds up
            gameobj.showG();// shows the current status of the board
            grid.gamechk();// checks if the game is over(if we've attained a value above 2^36)
            grid.spcfill();// randomly puts 2^1 in a random spot
            cout << endl << "\t" << "^" << endl << "|" << endl << "|" << endl;// indicates direction that's occouring
            // everything beyond here explains itself
            case 1:
            Sleep(100 * 3);
            grid.addRowsRt();
            gameobj.showG();
            grid.gamechk();
            grid.spcfill();
            cout << endl << "\t"  << "-" << "-" << ">" << endl;
            case 2:
            Sleep(100 * 3);
            grid.addRowsDn();
            gameobj.showG();
            grid.gamechk();
            grid.spcfill();
            cout << endl << "\t"  << "|" << endl << "|" << endl << "v" << endl;
            case 3:
            Sleep(100 * 3);
            grid.addRowsLf();
            gameobj.showG();
            grid.gamechk();
            grid.spcfill();
            cout << endl << "\t"  << "<" << "-" << "-" << endl;
        }
        l--;
    }

    //The AI is playing here
    int plchold;
    int val = 0;
    gameobj.showG();
    cout << endl;
    int i = 20;
    //the purpose of this while is to have the game play by itself
    while(i>0){
        plchold = 0;
        val = 0;

        gameobj.match = 0;
        gameobj.match2 = 0;
        gameobj.match3 = 0;
        gameobj.match4 = 0;

        //tallies up all the match values
        gameobj.upchk();
        gameobj.rghtchk();
        gameobj.dwnchk();
        gameobj.lftchk();


        //sort algorithim to determine which direction has the most additions
        int matches[4] = {gameobj.match, gameobj.match2, gameobj.match3, gameobj.match4};
        for(int countr = 3; countr >=0; countr--){
            for(val = 0; val<countr; val++){
                if(matches[val] < matches[val + 1]){
                    plchold = matches[val + 1];
                    matches[val + 1] = matches[val];
                    matches[val] = plchold;
                }
            }
        }

        //if the greatest value is for the direction up then carry out addition in upwards direction
        if(matches[0] == gameobj.match){
            Sleep(100 * 3);// delays so we can understand the what's going on
            grid.addUp();// adds up
            gameobj.showG();// shows the current status of the board
            grid.gamechk();// checks if the game is over(if we've attained a value above 2^36)
            grid.spcfill();// randomly puts 2^1 in a random spot
            cout << endl << "\t"  << "^" << endl << "|" << endl << "|" << endl ; //indicates direction that's occouring
        }
       //if the greatest value is for the direction right then carry out addition in right direction
        if(matches[0] == gameobj.match2){
            Sleep(100 * 3);
            grid.addRowsRt();
            gameobj.showG();
            grid.gamechk();
            grid.spcfill();
            cout << endl << "\t"  << "-" << "-" << ">" << endl;
       }
       //if the greatest value is for the direction down then carry out addition in down direction
        if(matches[0] == gameobj.match3){
           Sleep(100 * 3);
            grid.addRowsDn();
            gameobj.showG();
            grid.gamechk();
            grid.spcfill();
            cout << endl << "\t"  << "|" << endl << "|" << endl << "\t"  << "v" << endl;
       }
       //if the greatest value is for the direction left then carry out addition in left direction
       if(matches[0] == gameobj.match4){
            Sleep(100 * 3);
            grid.addRowsLf();
            gameobj.showG();
            grid.gamechk();
            grid.spcfill();
            cout << endl << "\t"  << "<"<< "-" << "-" << endl;
        }

        /*if(gameobj.match == 0 && gameobj.match2 == 0 && gameobj.match3 == 0 && gameobj.match4 == 0){
            break;
            cout << "Game Over!!";
        }*/
        gameobj.totmvs++ ;
    }

        //this is here for testing procedures
        //cout << gameobj.match << " possible moves up" << endl << gameobj.match2 << " possible moves right" << endl << gameobj.match3 << " possible moves down" << endl << gameobj.match4 << "  possible moves left";
        //cout << endl << endl << matches[0] << endl << matches[1] << endl << matches[2] << endl << matches[3];

    return 0;
}
