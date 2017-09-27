/*Jeremy Allen - 2/25/17 - Period 2
Assignment Name: Take in Data
Take in store and display data on the terminal
*/
//Libraries
#include <iostream>
#include <conio.h>
using namespace std;
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
void main() {
	//Defining Variables
	int number_of_students_in_class;
	char favorite_letter;
	char black_hair_answer;
	bool black_hair = false;
		double grade_point_average;
		// Questions
		cout << "How many students are in your class?";
		cin >> number_of_students_in_class;
		cout << "What is your favorite letter?";
		cin >> favorite_letter;
		cout << "Do you have black hair? (y/n)";
		cin >> black_hair_answer;
		if (black_hair_answer == 'y') {
			black_hair = true;
		}
		cout << "What is your GPA?";
		cin >> grade_point_average;
		// Displaying Data
		cout << "There are " << number_of_students_in_class << " students in your class." << endl;
		cout << "Your favorite letter is " << favorite_letter << endl;
		cout << boolalpha << "Your hair is black = " << black_hair << endl;
		cout << "Your grade point average is " << grade_point_average << endl;

	

		pause();


}