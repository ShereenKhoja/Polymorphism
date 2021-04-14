//**************************************************************************** 
// File name:	 Employee.h
// Author:		 Computer Science, Pacific University
// Date:		   4/2/2018
// Class:		   CS 250
// Assignment: Inheritance Lab
// Purpose:		 Demonstrate Inheritance
//*****************************************************************************

#pragma once

#include <iostream>

using namespace std;

class Employee {
  public:
    Employee (string name = "", string ssn = "");
    string getName () const;
    string getSSN () const;
    void print (std::ostream& rcOutStream) const;

  private:
    std::string mName,
      mSSN;
};