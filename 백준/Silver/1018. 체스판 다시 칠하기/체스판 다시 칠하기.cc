#include<iostream>
#include<string>

using namespace std;


    int main()     {
        int w, h;
        cin >> h >> w;
        string input;

        int minCount = 99999;

        int b_board[8][8]{
            {1,0,1,0,1,0,1,0},
            {0,1,0,1,0,1,0,1},
            {1,0,1,0,1,0,1,0},
            {0,1,0,1,0,1,0,1},
            {1,0,1,0,1,0,1,0},
            {0,1,0,1,0,1,0,1},
            {1,0,1,0,1,0,1,0},
            {0,1,0,1,0,1,0,1}
        };

        int w_board[8][8]{
            {0,1,0,1,0,1,0,1},
            {1,0,1,0,1,0,1,0},
            {0,1,0,1,0,1,0,1},
            {1,0,1,0,1,0,1,0},
            {0,1,0,1,0,1,0,1},
            {1,0,1,0,1,0,1,0},
            {0,1,0,1,0,1,0,1},
            {1,0,1,0,1,0,1,0}
        };
        
        int** board = new int* [h];

        for (int i = 0; i < h; i++) 
        {
            board[i] = new int[w] { 0, };
        }

        

        for (int i = 0; i < h; i++) 
        {
            cin >> input;
            for (int j = 0; j < w; j++) {
                if (input[j] == 'B') {
                    board[i][j] = 1;
                }
            }
        }

        int wCount = 0;
        int bCount = 0;

        for (int i = 0; i < h-7; i++) {
            for (int j = 0; j < w-7; j++) {
                wCount = 0;
                bCount = 0;
                for (int k = 0; k < 8; k++) {
                    for (int l = 0; l < 8; l++) {
                        if (board[i + k][j + l] != w_board[k][l]) {
                            wCount++;
                        }
                        if (board[i + k][j + l] != b_board[k][l]) {
                            bCount++;
                        }
                    }
                }
                if (bCount < minCount) 
                {
                    minCount = bCount;
                }
                if (wCount < minCount) 
                {
                    minCount = wCount;
                }
            }
        }
        
        cout << minCount;
    }
