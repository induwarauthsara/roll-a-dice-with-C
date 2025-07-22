#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int random_num();
//int pround(int);

int random_num(){
    srand(time(0));
    int randomNumber = rand() % 6 + 1;
    return randomNumber;
}

int pround(int player, int *s1, int *s2, int *is_someOne_win){
	//int player = *current_player;
    char x[10];
    printf("Player %d, ", player);
    //scanf("%s", x);
    fgets(x, sizeof(x), stdin);
    if(x[0] == '\n'){
            int rand = random_num();
            int current_player_score;
            printf("Player %d rolled %d \n", player, rand);
            if(player ==1){
                *s1 += rand;
                current_player_score = *s1;
            }else{
                *s2 += rand;
                current_player_score = *s2;
            }
            printf("Player %d score is  : %d", player, current_player_score);
            
            if(current_player_score >= 100) {
            	// Someone Won
            	*is_someOne_win = 1;
            	printf("\n\n ====================================== \n Player %d is Won. CONGRATULATIONS !!! \n ======================================", player);
            }
    }
	else{
    	// Exit
    	int win = (player == 1) ? 2 : 1;
    	printf("\n Player %d is resigned. \n\n ====================================== \n Player %d is Won. CONGRATULATIONS !!! \n ======================================", player, win);
    	            	*is_someOne_win = 1;
	}
	printf("\n\n");
//	return 1;   
}

int main(){
    int p1_score = 0;
    int p2_score = 0;
    int winning_score = 100;
    int current_player = 1;
    int is_someOne_win = 0;
    
   // pround(current_player, &p1_score, &p2_score, &is_someOne_win);
   
   printf("\n ====================== Welcome to Roll a Dice Game ====================== \n\n Press \"Enter\" to Roll the Dice. \n Press any other key to Exit / Resign. \n\n ");
    
     while(!is_someOne_win){
     	pround(current_player, &p1_score, &p2_score, &is_someOne_win);
     	current_player = current_player == 1 ? 2 : 1;
    }
    
    
    return 0;
}
