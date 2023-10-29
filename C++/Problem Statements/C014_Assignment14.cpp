#include <iostream>
using namespace std;
int main(){
    int rounds;
    int player1_max , player2_max;
    int index1 = 0,index2 = 0;

    cout<<"Enter Amount of rounds played: ";
    cin>>rounds;

    int player1 [rounds], player2[rounds];
    int player1_score = 0, player2_score = 0;

    for(int i = 0; i < rounds; i++)
    {
        cout<<"\nScore of Player 1 in round "<<i+1<<" : ";
        cin>>player1_score;
        cout<<"Score of Player 2 in round "<<i+1<<" : ";
        cin>>player2_score;

        player1[i] = player1_score-player2_score;
        player2[i] = player2_score-player1_score;
    }

    player1_max = player1[0];
    player2_max = player2[0];

    for(int i = 1; i < rounds; i++)
    {
        if (player1_max < player1[i]){
            player1_max = player1[i];
            index1 = i;
        }
        if (player2_max < player2[i]){
            player2_max = player2[i];
            index2 = i;
        }
    }
    if(player1_max>player2_max)
    {
        cout<<"\nPlayer 1 won with the largest lead: "<<player1_max<<endl;
        cout<<"On round: "<<index1 + 1;
    }
    else
    {
        cout<<"\nPlayer 2 won with the largest lead: "<<player2_max<<endl;
        cout<<"On round: "<<index2 + 1;
    }
    return 0;
}

