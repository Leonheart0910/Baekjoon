void receive_match_result(int result, int guessed)
{
	int n_strike = result/10, n_ball = result%10;
	switch (result) {
		case 30 : printf("Congratulation !!!\n");
			break;
		case 0 : printf("Oops !!!\n");
			break;
		default : printf("Nice try !!!\n");
	}
	printf("Your guess %d is [%d] strikes and [%d] balls\n", 
		guessed, n_strike, n_ball);
}

