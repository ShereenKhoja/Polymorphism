//****************************************************************************** 
// File name:	 main.cpp
// Author:		 Computer Science, Pacific University
// Date:		   4/2/2018
// Class:		   CS 250
// Assignment: Inheritance Lab
// Purpose:		 Demonstrate Inheritance
//******************************************************************************

#include "Employee.h"
#include "HourlyEmployee.h"
#include <iostream>
#include <iomanip>

using namespace std;

//******************************************************************************
// Function:    main
//
// Description:	Demonstrate Inheritance
//              Declare a base class object and a derived class object.
//              call functions on both objects.
//
// Parameters:	none
//
// Returned:		exit status
//******************************************************************************

int main () {

  // the base class
  //Employee cEmployee ("Jane Smith", "123456789");
  HourlyEmployee cHEmployee ("Bob Smith", "987654321", 21, 10);

  //cEmployee.print (cout);
  cout << "\n\n";

  cHEmployee.print (cout);
  cout << "\n\n";

  return EXIT_SUCCESS;
}