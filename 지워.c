#include <stdio.h> 
#include <time.h> 
#include <stdlib.h> 

// Global Variable - The number of current stones remained
int gn_stones;

/**
* @brief : Determine the optimal number of stones to remove in Alice's turn
*	Possible numbers are either 2, 3 or 5
* @return : return the determined number  
* @param : none
*/
int Alice_Move(void) {

	int n_remove=rand()%3+2;
	
	if(gn_stones%5==2)
		n_remove=2;
	else if(gn_stones==6||gn_stones==5)
		n_remove=5;
	else if(gn_stones%3==0||gn_stones==8)
		n_remove=rand()%2+2;
	else n_remove=3;
	
	return n_remove;
}


/**
* @brief :  the number of stones to remove in Bob's turn
*       Possible numbers are either 2, 3 or 5
*	In this function, Bob decides his number randomly
* @return : return the decided number 
* @param	 : none
*/
int Bob_Move(void) {
/*	int n_remove;
	scanf("%d",&n_remove);*/
	int n_remove = rand()%3;
	n_remove += 2;
	if (n_remove == 4)
		n_remove = 5;

	return n_remove;
}

/**
* @brief :  Determine whether a further move is possible or not
* @return : return 1 if a further move is possible, 0 otherwise
* @param	 : none
*/
int can_move() {
	return (gn_stones >= 2) ? 1 : 0;
}

/**
* @brief :  Determine whether it is legal to remove "n_remove" stones from the current stones
* @return : return 1 if legal, 0 otherwise 
* @param : the number of stones that a player try to remove
*/
int is_legal_move(int n_remove) {
	int is_legal = 0;

	if  (n_remove <= gn_stones && ( (n_remove == 2) || (n_remove == 3) || (n_remove == 5) ))
		is_legal = 1;
	return is_legal;
}

int main(void) {
	int is_alice_turn = 1;
	int n_remove;
	srand(time(0));
	int i=0,sum = 0 , k=0;
	gn_stones = rand()%100;

	printf("The starting number of stones %d\n", gn_stones);
	while(i<10000)
		while (can_move()) {
			if (is_alice_turn) {
				//printf("Alice> ");
				n_remove = Alice_Move();
			}
			else {
				//printf("Bob> ");
				n_remove = Bob_Move();
			}
	
			if (is_legal_move(n_remove)) {
				//printf("%d removed : [%d => %d stones remained]\n", 
				//n_remove, gn_stones, gn_stones-n_remove);
				gn_stones -= n_remove;
				is_alice_turn = !is_alice_turn;
			}
			else 
				printf("You can't remove %d stones, Try again\n", n_remove);		
		}
		i += 1;
		if (is_alice_turn){
			sum = sum + 1;
			printf("Congratulations Bob, You Win !!!");}
		else{
			printf("Congratulations Alice, You Win !!!");
			k = k + 1;}
	return 0;
}

