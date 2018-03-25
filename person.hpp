/*********************************************************************
** Program name: person.hpp
** Author: Alexandra Carper
** Date: 02/03/2018
** Description: The Person declaration class declares the name and
 *              age member variables for each person (either student
 *              or instructor), a default constructor, a virtual
 *              do_work function, getter and setter functions for name
 *              and age, and a virtual getInfo function to get either
 *              the gpa or the rating of the student/instructor
*********************************************************************/
#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>
using std::string;

class Person
{
protected:
    string name;
    int age;

public:
    Person();
    virtual void do_work() =0;
    void setName(string);
    string getName();
    void setAge(int);
    int getAge();
    virtual double getInfo() =0;
};

#endif