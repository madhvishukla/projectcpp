#include<iostream>
#include<string>
using namespace std;
int main(){
    char board[3][3]={
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '},  
    } ;
    const char playerX='X';
    const char player0='0';
    char currentplayer =playerX;
    int r = -1;
    int c = -1;
    char winner = ' ';


    for(int i=0;i<9;i++){
           // printing game board 
    cout<<"  |  |  "<<endl;
    cout<<board[0][0]<<" | "<<board[0][1]<<"| "<<board[0][2] << endl;
    cout<<"__|__|__"<<endl;
    cout<<"  |  |  "<<endl;
    cout<<board[1][0]<<" | "<<board[1][1]<<"| "<<board[1][2] << endl;
    cout<<"__|__|__"<<endl;
    cout<<"  |  |  "<<endl;
    cout<<board[2][0]<<" | "<<board[2][1]<<"| "<<board[2][2] << endl;
    cout<<"  |  |  "<<endl;

    if(winner!=' '){
        break;
    }

    // get player input
    cout<<"current player is "<< currentplayer << endl;
    while(true){
        cout<<"enter r c from 0-2 for row and column :";
        cin >> r >> c;
        if(r<0||r>2||c<0||c>2){
            cout<<"invalid output, try again."<<endl;
        }
        else if(board[r][c]!=' '){
            cout<<"tile is full try again ."<<endl;
        }
        else{
            break;
        }
        // reset value 
        r=-1;
        c=-1;
        cin.clear(); // clear error flags
        cin.ignore(10000,'\n'); // discard values 
        // skip to thw ne liine until 10000 vlaues are in input stream 
    }
    board[r][c] = currentplayer;
    currentplayer = (currentplayer == playerX)? player0:playerX;
    // check winner

    // rows-horizontal
    for(int r = 0; r < 3; r++){
        if(board[r][0]!=' '&& board[r][0]==board[r][1]&& board[r][1]==board[r][2]){
            winner=board[r][0];
            break;
        }
    }

    // column-vertical 
    for(int c = 0; c < 3; c++){
        if(board[0][c]!=' '&& board[0][c]==board[1][c]&& board[1][c]==board[2][c]){
            winner=board[0][c];
            break;
        }
    }

    // diagonally
    if(board[0][0]!=' '&& board[0][0]==board[1][1]&&board[1][1]==board[2][2]){
        winner = board[0][0];
    }
    else if (board[0][2]!=' '&&board[0][2]==board[1][1]&& board[1][1]==board[2][0]){
        winner = board[0][2];

    }
    }
    if(winner!= ' '){
        cout<<"player"<<winner<<"is winner!!!"<<endl;
    }
    else{
        cout<<"tie!!"<<endl;
    }
    return 0;
}