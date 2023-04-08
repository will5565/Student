#pragma once
#include <iostream>
#include "Student.h"
#include <vector>

using namespace std;

class PacificCourse {
public:
	PacificCourse(const string& prefix, unsigned int number); //prefix is name of string
	void enroll(const Student& rcStudent);  //Need to be able to change data in calling course
	bool isIn(const Student& rcStudent);
	friend ostream& operator << (ostream& rcOut, const PacificCourse& rcCourse);

private:
	vector <Student> mcStudents;
	int mNumber;
	string mPrefix;
};