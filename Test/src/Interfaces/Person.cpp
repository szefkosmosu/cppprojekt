/*
 * Person.cpp
 *
 *  Created on: Apr 23, 2017
 *      Author: szefkosmosu
 */

#include "Person.h"

namespace People {

Person::Person() {
	this->name = "Jan";
	this->surname = "Kowalski";
	this->age = 18;
	this->sex = sex_t::NO_SEX;
	this->skincolor = skincolor_t::WHITE;
}

/*Person::Person(Person *person) {
	// TODO Auto-generated constructor stub

}*/

Person::~Person() {

}

} /* namespace People */
