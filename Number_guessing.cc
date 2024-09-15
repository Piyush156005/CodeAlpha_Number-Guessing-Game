// This is a number Guessing game in c++ (task 1) @codealpha


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int num;
    int guess;
    int tries=0;
    srand(time(NULL));
    // this will generate a random number between 1-100
    num = (rand()%100) + 1;
    cout<<"**********Number Guessing game************\n";
    
    do{
        cout<<"Pick a number between (1-100)\n ";
        cin>>guess;
        tries++;
        if(guess<num){
            // this is positive range between num and guessed number
            if(num - guess <= 5){
                cout<<"Too close! A little higher\n";
            }
            else{
                cout<<"Too Low\n";
            }
        }
        else if(guess>num){
            // this is negative range between num and guessed number
            if(num - guess >= -5){
                cout<<"Too close! A little Lower\n";
            }
            else{
                cout<<"Too High\n";
            }
            
        }
        else{
            // if nothing matches than we can say that your guess is correct!
            cout<<"Correct! # tries: "<<tries<<'\n';
        }


    }while(guess != num);
    return 0;
}
