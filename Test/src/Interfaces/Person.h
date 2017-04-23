/*
 * Person.h
 *
 *  Created on: Apr 23, 2017
 *      Author: szefkosmosu
 */

#include <stdio.h>
#include <string>


#ifndef INTERFACES_PERSON_H_
#define INTERFACES_PERSON_H_

using namespace std;

namespace People {

typedef enum sex_t{
	MALE,
	FEMALE,
	NO_SEX
} sex_t;

typedef enum skincolor_t{
	BLACK,
	WHITE,
	YELLOW,
	RED
} skincolor_t;


class Person {

public:
	Person();
	//Person(Person *person);
	//Person(int sex, int skincolor, string name, string surname, int age);
	virtual ~Person();
	//virtual string getName();
private:
	static unsigned int numberOfPeopleCreated;

	sex_t sex;
	skincolor_t skincolor;
	string name;
	string surname;
	int age;
};

} /* namespace People */

#endif /* INTERFACES_PERSON_H_ */
