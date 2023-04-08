#include <iostream>
#include "PacificCourse.h"

using namespace std;

int main() {
	Student s1("Randy", 1), s2("Riker", 2), s3("Rolland", 3);
	PacificCourse courseA("CS", 250);

	courseA.enroll(s1);
	courseA.enroll(s2);
	courseA.enroll(s3);

	cout << courseA;

	return EXIT_SUCCESS;
}

//for some reason the linking error won't go away