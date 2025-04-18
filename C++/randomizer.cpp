//a simple command line randomizer; takes an integer to decide how many options,
//pushes them into a vector, and then randomly selects one

#include <iostream>
#include <ctime>
#include <string>
#include <vector>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector;

int main() {
	srand(time(NULL));
	cout << "How many choices? ";
	int choiceNumber;
	cin >> choiceNumber;

	vector<string> elements;

	int round = 0;
	while (round < choiceNumber) {
		cout << "Please insert a name: ";
		string name;
		cin >> name;
		round++;
		elements.push_back(name);
	}
	cout <<endl<< "The choices are: " << endl;
	for (auto e : elements) {
		cout << e << endl;
	}

	int thisOne = rand() % choiceNumber;
	cout << endl;
	cout << "The selected option is: ";
	cout << elements[thisOne] << endl;
	
}
