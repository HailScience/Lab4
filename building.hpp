/*********************************************************************
** Program name: building.hpp
** Author: Alexandra Carper
** Date: 02/03/2018
** Description: The building class declaration file declares the
 *              variables name, size, and address, the constructor
 *              of the Building class, and the setter and getter
 *              functions of the class
*********************************************************************/
#ifndef BUILDING_HPP
#define BUILDING_HPP

#include <iostream>
#include <string>
using std::string;

class Building
{
private:
    string name;
    int size;
    string address;

public:
    Building();
    void setName(string name);
    string getName();
    void setSize(int size);
    int getSize();
    void setAddress(string address);
    string getAddress();
};

#endif