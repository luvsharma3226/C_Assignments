/*
 * employee.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class employee {
private:
	int id;
	float sal;
public:
	employee();
	employee(int id, float sal);
	void accept();
	void display();
	int get_id();
	void set_id(int id);
	float get_sal();
	void set_sal(float sal);
	~employee();
};

#endif /* EMPLOYEE_H_ */
