#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "baseball.h"

#define ATTEMPT_LIMIT	9
int main(void)
{
	int n_attempt = 0;
	int target_num, guessed_num, match_result;

	srand(time(0));
	target_num = generate_target_number();
	do {
		printf("Attempt [%d/%d] ",++n_attempt, ATTEMPT_LIMIT);
		guessed_num = guess_number();
		match_result = get_match_result(target_num, guessed_num);
		receive_match_result(match_result, guessed_num);
	} while (n_attempt <= ATTEMPT_LIMIT && match_result != 30);

	if (match_result == 30)
		printf("Congratulation!!! You Win\n");
	else
		printf("Nice Try!!! But You Lose, The target number is %d\n", target_num);
	return 0;
}

