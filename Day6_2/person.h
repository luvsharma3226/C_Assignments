/*
 * person.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */
#include "date.h"
#ifndef PERSON_H_
#define PERSON_H_

class person {
private:
	char name[20];
	date birth;
public:
	person();
	person(const char *name , int birth_day, int birth_month, int birth_year);
	person(const char *name, date& birth);
	void display();
	void accept();
	const char* get_name();
	date get_birth();

	void set_name(const char *name);
	void set_birth(date& birth);
	~person();
};

#endif /* PERSON_H_ */
