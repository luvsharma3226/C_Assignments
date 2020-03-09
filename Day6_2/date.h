/*
 * date.h
 *
 *  Created on: 08-Mar-2020
 *      Author: sunbeam
 */

#ifndef DATE_H_
#define DATE_H_

class date {
private:
	int day;
	int month;
	int year;
public:
	date();
	date(int day,int month, int year);
	int get_day();
	int get_month();
	int get_year();

	void set_day(int day);
    void set_month(int month);
	void set_year(int year);

	void accept();
	void display();

	~date();
};

#endif /* DATE_H_ */
