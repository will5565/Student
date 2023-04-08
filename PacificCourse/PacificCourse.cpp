#include <iostream>
#include "PacificCourse.h"

using namespace std;


//Need to use range-based for loops

PacificCourse::PacificCourse(const string& prefix, unsigned int number) {
	mcStudents.clear();
	mNumber = number;
	mPrefix = prefix;
}

ostream& operator<< (ostream& rcOut, const PacificCourse& rcCourse) {

	for (Student myStudent : rcCourse.mcStudents) {
		rcOut << myStudent << endl;
	}
	return rcOut;
}

bool PacificCourse::isIn(const Student& rcStudent) {
	bool studIn = false;

	for (Student cStudent : mcStudents) {
		if (cStudent == rcStudent) {
			studIn = true;
		}
	}

	return studIn;
}

void PacificCourse::enroll(const Student& rcStudent) {
	for (Student myStudent : mcStudents) {
		if (!isIn(rcStudent)) {
			mcStudents.push_back(rcStudent);
		}
	}
}