#include <iostream>
#include "Student.h"

Student::Student(const string& mcStudName, unsigned int id) {
	mcName = mcStudName;
	mID = id;
}

bool Student::operator== (const Student& rcStudent) const {
	bool equalStuds = false;

	if (mID == rcStudent.mID) {
		equalStuds = true;
	}
	return equalStuds;
}

ostream& operator<< (ostream& rcOut, const Student& rcStudent) {
	rcOut << "Student:_" << rcStudent.mcName << " ID: "
		<< rcStudent.mID;

	return rcOut;
}