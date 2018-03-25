/*********************************************************************
** Program name: building.cpp
** Author: Alexandra Carper
** Date: 02/03/2018
** Description: The building class implementation file includes the
 *              setter and getter functions for the private member
 *              variables 'name', 'size', and 'address', as well as
 *              the default constructor.
*********************************************************************/
#include <iostream>
#include <string>
#include "building.hpp"

using std::string;

Building::Building()
{

}

void Building::setName(string name)
{
    this->name = name;
}

string Building::getName()
{
    return name;
}

void Building::setSize(int size)
{
    this->size = size;
}

int Building::getSize()
{
    return size;
}

void Building::setAddress(string address)
{
    this->address = address;
}

string Building::getAddress()
{
    return address;
}