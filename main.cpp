/*********************************************************************
** Program name: main.cpp
** Author: Alexandra Carper
** Date: 02/03/2018
** Description: The main function creates an object from each class
 *              (Building, Student, Instructor, University),
 *              instantiates the people and buildings of the
 *              university, and displays a menu for the user. The
 *              menu allows the user to see the names and addresses of
 *              the university's buildings, the name, age, and GPA
 *              of the university's student, and the name, age, and
 *              rating of the university's professor. The menu
 *              performs input validation, and quits when necessary.
*********************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include "university.hpp"
#include "building.hpp"
#include "person.hpp"
#include "student.hpp"
#include "instructor.hpp"

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    //Create Student object
    Student student;
    //Create Instructor object
    Instructor instructor;

    //Set student name
    student.setName("Alexandra Carper");
    //Set student age
    student.setAge(24);
    //Set student GPA
    student.setGPA(4.0);

    //Set instructor name
    instructor.setName("Luyao Zhang");
    //Set instructor age
    instructor.setAge(30);
    //Set instructor rating
    instructor.setRating(5.0);

    //Create Building object
    Building building;

    //Set building name
    building.setName("AB 6 Small Shed-Berry Creek");
    //Set building size
    building.setSize(1018);
    //Set building address
    building.setAddress("27280 Tampico Road, Corvallis, OR 97330");

    //Create another building object
    Building building2;

    //Set building name
    building2.setName("AB Adair Hay Store-Loaf S");
    //Set building size
    building2.setSize(6930);
    //Set building address
    building2.setAddress("27280 Tampico Road, Corvallis, OR 97330");

    //Create University object
    University university(2, 2);

    //Add student to person vector
    university.people.push_back(&student);
    //Add instructor to person vector
    university.people.push_back(&instructor);
    //Add building to buildings vector
    university.buildings.push_back(building);
    //Add building2 to buildings vector
    university.buildings.push_back(building2);

    //MENU
    bool quit = false;

    cout << "Choose one of the following operations: \n";
    cout << "1. Print the names of all the buildings\n";
    cout << "2. Print the names of everyone at the university\n";
    cout << "3. Pick someone to do work\n";
    cout << "4. Exit the program\n";

    while(!quit)
    {
        bool validData = false;
        int choice;

        while(!validData)
        {
            cin >> choice;
            if (cin.fail())
            { cout << "Error! Please enter a valid number!" << endl;
                cin.clear();
                cin.ignore();
            }
           else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
           {
               cout << "Error! Please enter a valid number!" << endl;
               cin.clear();
               cin.ignore();
           }
               //User chooses to print the building details
           else if(choice == 1)
           {
               university.print_buildings();
               cout << "Choose another option: " << endl;
           }
               //User chooses to print the person details
           else if(choice == 2)
           {
               university.print_people();
               cout << "Choose another option: " << endl;
           }
           //User chooses to do work
           else if(choice == 3)
           {
               int choicePerson;
               bool validData2 = false;

               //Print all the people's names
               cout << "Please choose either the student or the instructor to do work: " << endl;
               cout << "1. " << student.getName() << " (student)" << endl;
               cout << "2. " << instructor.getName() << " (instructor)" << endl;

               cout << endl;

               while(!validData2)
               {
                   cin >> choicePerson;
                   if(cin.fail())
                   {
                       cout << "Error! Please choose '1' or '2'!" << endl;
                       cin.clear();
                       cin.ignore();
                   }
                   else if(choicePerson != 1 && choicePerson != 2)
                   {
                       cout << "Error! Please choose '1' or '2'!" << endl;
                       cin.clear();
                       cin.ignore();
                   }
                       //User chooses student
                   else if(choicePerson == 1)
                   {
                       student.do_work();
                       validData2 = true;
                       cout << "Choose another option: " << endl;
                   }
                       //User chooses instructor
                   else if(choicePerson == 2)
                   {
                       instructor.do_work();
                       validData2 = true;
                       cout << "Choose another option: " << endl;
                   }
               }

           }
           else if(choice == 4)
           {
               validData = true;
               quit = true;
               cout << "Goodbye!" << endl;
           }

       }
   }
}


