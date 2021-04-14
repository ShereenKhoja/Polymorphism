//****************************************************************************** 
// File name:	 main.cpp
// Author:		 Computer Science, Pacific University
// Date:		   4/2/2018
// Class:		   CS 250
// Assignment: Inheritance Lab
// Purpose:		 Demonstrate Inheritance
//******************************************************************************

//#include <vld.h>
#include "Employee.h"
#include "HourlyEmployee.h"
#include <iostream>
#include <iomanip>

using namespace std;
void displayEmployee (const Employee& rcEmp);

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
  Employee* pcEmp =  new HourlyEmployee ();

  pcEmp->read (cin);

  displayEmployee (*pcEmp); 

  cout << pcEmp->getName(); 

  //cout << pcEmp-> getPay ();  

  delete pcEmp; 

  return EXIT_SUCCESS;
}

//******************************************************************************
// Function:    displayEmployee
//
// Description:	Demonstrate Polymorphism
//              Call different print methods based on calling object
//
// Parameters:	rcemp - Employee
//
// Returned:		none
//******************************************************************************

void displayEmployee (const Employee& rcEmp) {
  rcEmp.print (cout);
}