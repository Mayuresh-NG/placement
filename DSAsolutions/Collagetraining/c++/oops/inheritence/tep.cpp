#include <iostream>
#include <cmath>

using namespace std;

class Marks {
public:
	int rollNumber;
	int *marks;

	int num_marks; // number of the marks

	void GenerateMarks(int num) { 
		num_marks = num;
		marks = new int[num];
		for (int i = 0; i < num; i++)
			marks[i] = rand() % 5 + 1;
	}

	int sum_of_marks() {
		int sum = 0;

		for (int i = 0; i < num_marks; i++)
			sum += marks[i];

		return sum;
	}
};


class Physics : public Marks {
public:
	
};


class Chemistry : public Marks {
public:


};


class Mathematics : public Marks {
public:


};

int main()
{
	int num;

	cout << "Enter the number of students ";
	cin >> num;

	Physics p[num];
	Chemistry c[num]; 
	Mathematics m[num]; 

	for (int i = 0; i < num; i++) { 
		p[i].rollNumber = c[i].rollNumber = m[i].rollNumber = i + 1;
		p[i].GenerateMarks(9);
		c[i].GenerateMarks(5);
		m[i].GenerateMarks(2);
	}


	cout << "\nThe total marks of each student of a class in Physics, Chemistry and Mathematics: \n\n";

	for (int i = 0; i < num; i++) { 
		cout << "Roll number of student is " << p[i].rollNumber << endl;
		cout << "The total marks in Physics is " << p[i].sum_of_marks() << endl;
		cout << "The total marks in Chemistry is " << c[i].sum_of_marks() << endl;
		cout << "The total marks in Mathematics is " << m[i].sum_of_marks() << endl;
		cout << endl;
    }

	return 0;
}