#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int num, guess, tr = 0;
	srand(time(0)); //Generating random number by using seed random number generator functio
	num = rand() % 100 + 1; // generated a random number between 1 and 100
	cout << "Guess My Number Game\n\n";
	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tr++;
		if (guess > num) //checking if Guess is high 
			cout << "Guess is Too high\n\n";
		else if (guess < num) //checking if Guess is low
			cout << "Guess is Too low\n\n";
		else //here printing if choose right answer
			cout << "You Guess Right " << tr << " guesses\n";
	} 
    while (guess != num);
	return 0;
}