#include <stddef.h>
/**
 *check_exam-function to checks the answers of a student against the correct answers.
 *@n: The number of questions.
 *@answers: The correct answers.
 *@student: The student's answers.
 *@Return: The student's score. If the score is negative, or is empty, return 0.
 */
int check_exam(size_t n, const char answers[n], const char student[n])
{
	int score = 0;

	for(size_t i = 0; i < n; i++)
	{
		//If the answers of the student are equal to the correct answers, add 4 points 
		//to every correct answer.
		if(student[i] == answers[i])
		{
			score += 4;
		}
		//-1 for every incorrect answer.
		else if (student[i] != ' ')
		{
			score -= 1;
		}
	}
	//If the score is less than 0 or the answer is in blank, set the score to 0.
	//Else, set the score as final and return it.
	return score < 0 ? 0 : score;
}
//is the same as:
//if (score < 0)
//{
//	final_score = 0;
//}
//else
//{
//	final_score = score;
//}
