/*********************************************************************
** Program name: instructor.cpp
** Author: Alexandra Carper
** Date: 02/03/2018
** Description: This Instructor class implementation file includes
 *              a default constructor, a virtual do_work function that
 *              returns a specialized message for the instructor
 *              object that calls it, a setter function for rating,
 *              and the virtual getInfo function that returns the
 *              rating of the instructor.
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "person.hpp"
#include "instructor.hpp"

using std::cout;
using std::endl;
using std::string;

Instructor::Instructor()
{

}
void Instructor::do_work()
{
    srand(time(NULL));
    int hours = rand() % 8 + 1;
    cout << name << " graded papers for " << hours << " hours." << endl;
    cout << endl;
}

void Instructor::setRating(double rating)
{
    this->rating = rating;
}

double Instructor::getInfo()
{
    return rating;
}