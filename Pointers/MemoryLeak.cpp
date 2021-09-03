#include <iostream>
#include <time.h>
using namespace std;

int cash = 100; //Global variable

void Play(int bet){
    //char C[3] = {'J','Q','K'};
    char *C = new char[3];
    C[0] = 'J'; C[1] = 'Q'; C[2] = 'K';
    cout << "Shuffling...." << endl;
    srand(time(NULL)); // random number generator 
    int i;
    for(i = 0; i < 5; i++){
        int x = rand() % 3;
        int y = rand() % 3;int temp = C[x];
        C[x] = C[y];
        C[y] = temp; // swaps characters at position x and y
    }
    int playerGuess;
    cout << "Whats's the position of queen - 1, 2 or 3?" << endl;
    cin >> playerGuess;
    if(C[playerGuess - 1] == 'Q'){
        cash += 3*bet; 
        cout << "You Win ! Result = " << C[0] << " " << C[1] << " " << C[2] << " Total Cash= " << cash << endl;
    }
    else{
        cash -= bet;
        cout << "You Lost ! Result = " << C[0] << " " << C[1] << " " << C[2] << " Total Cash= " << cash << endl;
    }
    delete(C);
}

int main(){
    int bet;
    while(cash > 0){
        cout << "What's your bet?" << endl;
        cin >> bet;
        if(bet == 0 || bet > cash) break;
        Play(bet);
    }
}