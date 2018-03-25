/*********************************************************************
** Program name: university.hpp
** Author: Alexandra Carper
** Date: 02/03/2018
** Description: The University class declaration file declares the
 *              member variables name, a vector of pointers to Person
 *              objects, and a vector of Building objects (all made
 *              public so main function could access), as well as
 *              a default constructor and member functions for
 *              printing the details of all the buildings and
 *              printing the details of all the people (student
 *              or instructor) within the university
*********************************************************************/

#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP

#include <iostream>
#include <string>
#include <vector>
#include "person.hpp"
#include "building.hpp"

using std::string;
using std::vector;

class University
{
public:
    //Member variables
    string name;
    vector<Person*> people;
    vector<Building> buildings;

    //Member functions
    University(int, int);
    void print_buildings();
    void print_people();

};

#endif