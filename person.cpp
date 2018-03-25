/*********************************************************************
** Program name: person.cpp
** Author: Alexandra Carper
** Date: 02/03/2018
** Description: The Person class implementation file includes a
 *              a default constructor for the Person class, and the
 *              getter and setter functions for name and age of people
*********************************************************************/
#include <iostream>
#include <string>
#include "person.hpp"

using std::string;

Person::Person()
{

}

void Person::setName(string name)
{
    this->name = name;
}

string Person::getName()
{
    return name;
}

void Person::setAge(int age)
{
    this->age = age;
}

int Person::getAge()
{
    return age;
}
