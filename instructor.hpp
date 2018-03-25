/*********************************************************************
** Program name: instructor.hpp
** Author: Alexandra Carper
** Date: 02/03/2018
** Description: This Instructor class declaration file declares the
 *              member variable for rating, a default constructor,
 *              the virtual do_work function, the setter function
 *              for rating, and the virtual getInfo function.
*********************************************************************/
#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP

#include <iostream>
#include <string>
using std::string;

class Instructor : public Person
{
protected:
    double rating;

public:
    Instructor();
    void do_work();
    void setRating(double rating);
    double getInfo();
};

#endif