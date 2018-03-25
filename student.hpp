/*********************************************************************
** Program name: student.hpp
** Author: Alexandra Carper
** Date: 02/03/2018
** Description: This Student class declaration file declares the
 *              gpa member variable, a default constructor, the
 *              setter function for gpa, and the virtual getInfo
 *              function
*********************************************************************/
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>
using std::string;

class Student : public Person
{
protected:
    double gpa;

public:
    Student();
    void do_work();
    void setGPA(double gpa);
    double getInfo();
};

#endif
