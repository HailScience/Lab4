/*********************************************************************
** Program name: student.cpp
** Author: Alexandra Carper
** Date: 02/03/2018
** Description: This Student class implementation file includes the
 *              default constructor, the virtual do_work function,
 *              which displays a specialized message based on the
 *              Student object that calls it, the setter function for
 *              gpa, and the virtual getInfo function that returns
 *              the student's gpa
*********************************************************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "person.hpp"
#include "student.hpp"

using std::cout;
using std::endl;
using std::string;

Student::Student()
{

}

//Generates a message that tells the user
//the amount of hours the student did work
void Student::do_work()
{
    srand(time(NULL));
    int hours = rand() % 8 + 1;
    cout << name << " did " << hours << " hours of homework." << endl;
    cout << endl;
}

void Student::setGPA(double gpa)
{
    this->gpa = gpa;
}

double Student::getInfo()
{
    return gpa;
}