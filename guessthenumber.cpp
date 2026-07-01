#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
// rand()

// int random = offset + (rand()%range);
 

int main(){
    srand(time(0));
    int secretnumber = 1+(rand()%100);
    //  random =rand();
    int playerchoice;
    cout<<"welcomr to the number guessing game " <<endl;
    cout<<"you have to guess the number between 1 nad 100 . you will have limited choices.";
    while(true){
        cout<<"\n enter the difficulty level :\n";
        cout<<"1 for easy ! \t";
        cout <<"2 for medium \t";
        cout<<"3 for difficult !\n";
        cout<<"0 for ending the game !\n"<<endl;

        int difficultychoice ;
        cout<<"enter the number :";
        cin>>difficultychoice;

        if(difficultychoice==1){
            cout<<"\n you have 10 choices for finding the secret number btw 1 to 100";
            int choicesleft=10;
            for(int i=0;i<10;i++){
                cout<<"\nEnter the number :";
                cin>>playerchoice;
                if(playerchoice==secretnumber){
                    cout<<"well played !you won ,"<<playerchoice<<"is the secret number"<<endl;
                    cout<<"\t thanks for playing...."<<endl;
                    cout<<"play the game again with us !\n"<<endl;
                    break;
                }else{
                    cout<<"nope ,"<<playerchoice<<"is not the right number \n";
                    if(playerchoice>secretnumber){
                        cout<<"the secret number is smaller than the  number you have chosen "<<endl ;
                    }else{
                        cout<<"the secret number is greater than the  number you have chosen "<<endl ;
                    }
                    choicesleft--;
                    cout<<choicesleft<<"choices left "<<endl;
                    if(choicesleft==0){
                        cout<<"couldnot find the secretnumber is was "<<secretnumber<<"you lose!!\n";
                        cout<<"play the game again to win\n";
                    }
                }
            }
        }
        else if(difficultychoice==2){
                       cout<<"\n you have 7 choices for finding the secret number btw 1 to 100";
            int choicesleft=7;
            for(int i=0;i<7;i++){
                cout<<"\n\nEnter the number :";
                cin>>playerchoice;
                if(playerchoice==secretnumber){
                    cout<<"well played !you won ,"<<playerchoice<<"is the secret number"<<endl;
                    cout<<"t\t thanks for playing...."<<endl;
                    cout<<"play the game again with us !\n"<<endl;
                    break;
                }else{
                    cout<<"nope ,"<<playerchoice<<"is not the right number \n";
                    if(playerchoice>secretnumber){
                        cout<<"the secret number is smaller than the  number you have chosen "<<endl ;
                    }else{
                        cout<<"the secret number is greater than the  number you have chosen "<<endl ;
                    }
                    choicesleft--;
                    cout<<choicesleft<<"choices left "<<endl;
                    if(choicesleft==0){
                        cout<<"couldnot find the secretnumber is was "<<secretnumber<<"you lose!!\n";
                        cout<<"play the game again to win\n";
                    }
                }
            }
        }
        else if(difficultychoice==3){
                       cout<<"\n you have 5 choices for finding the secret number btw 1 to 100";
            int choicesleft=5;
            for(int i=0;i<5;i++){
                cout<<"\nEnter the number :";
                cin>>playerchoice;
                if(playerchoice==secretnumber){
                    cout<<"well played !you won ,"<<playerchoice<<"is the secret number"<<endl;
                    cout<<"\t thanks for playing...."<<endl;
                    cout<<"play the game again with us !\n"<<endl;
                    break;
                }else{
                    cout<<"nope ,"<<playerchoice<<"is not the right number \n";
                    if(playerchoice>secretnumber){
                        cout<<"the secret number is smaller than the  number you have chosen "<<endl ;
                    }else{
                        cout<<"the secret number is greater than the  number you have chosen "<<endl ;
                    }
                    choicesleft--;
                    cout<<choicesleft<<"choices left "<<endl;
                    if(choicesleft==0){
                        cout<<"couldnot find the secretnumber is was"<<secretnumber<<"you lose!!\n";
                        cout<<"play the game again to win\n";
                    }
                }
            }
        }
        else if(difficultychoice==0){
            exit(0);
        }
        else{
            cout<<"wrong choice .Enter the valid choice to play the game !(0,1,2 ,3)"<<endl  ;
        }
    }

    return 0;
}