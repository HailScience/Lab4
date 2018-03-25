/*********************************************************************
** Program name: university.cpp
** Author: Alexandra Carper
** Date: 02/03/2018
** Description: The University class implemenatation file includes
 *              the constructor, which set the university name to
 *              Oregon State University and reserves the space for
 *              the people and building vectors, a function to print
 *              the information on all the buildings, and a function
 *              to print all the information of all the people
*********************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "university.hpp"
#include "person.hpp"
#include "student.hpp"
#include "instructor.hpp"

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::setprecision;
using std::fixed;

//Constructor sets name equal to Oregon State University
University::University(int m, int n)
{
    name = "Oregon State University";
    people.reserve(m);
    buildings.reserve(n);
}

//Prints the information on all the buildings
void University::print_buildings()
{
    cout << "Details of buildings: " << endl;
    cout << "----------------------" << endl;
    for(int i = 0; i < buildings.size(); i++)
    {
        cout << "Name: " << buildings[i].getName() << endl;
        cout << "Size: " << buildings[i].getSize() << " sqft" << endl;
        cout << "Address: " << buildings[i].getAddress() << endl;
        cout << endl;
    }
}

//Prints all the information of all the people
void University::print_people()
{
    cout << "Details of people: " << endl;
    cout << "-------------------" << endl;
    for(int j = 0; j < people.size(); j++)
    {
        cout << "Name: " << people[j]->getName() << endl;
        cout << "Age: " << people[j]->getAge() << endl;
        if(people[j]->getInfo() == 4.0)
        {
            cout << "GPA: " << fixed << setprecision(1) << people[j]->getInfo() << endl;
            cout << endl;
        }
        else if(people[j]->getInfo() == 5.0)
        {
            cout << "Rating: " << fixed << setprecision(1) << people[j]->getInfo() <<endl;
            cout << endl;
        }

    }
}
