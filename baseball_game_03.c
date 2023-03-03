/**
* @brief : compare the guessed number with the target and return the match results
* @return : return 2-digits number, 1st digit stands for the number of strikes and 2nd digit stands for the number of balls. For example 11 means 1 strike 1 ball
* @param	 : 	target - 3-digits target integer
			guessed - 3-digits guessed integer
*/
int get_match_result(int target, int guessed)
{
	int n_strike=0, n_ball=0;

	// Enter your code here
	int array_target[3] = {target%10, (target=target/10)%10, (target/10)%10};
	int array_guessed[3] = {guessed%10, (guessed=guessed/10)%10, (guessed/10)%10};
	int i=0, j;
	
	while(i<=2)
	{	
		j=0;
		while(j<=2)
		{
			if(array_target[i] == array_guessed[j])
			{
				if(i==j)
					n_strike++;
				else
					n_ball++;	
			}
			j++;
		}
		i++;
	}
	
	return n_strike*10 + n_ball;
	
}
