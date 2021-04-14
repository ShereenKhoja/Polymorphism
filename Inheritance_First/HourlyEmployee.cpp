//****************************************************************************** 
// File name:	 HourlyEmployee.cpp
// Author:		 Computer Science, Pacific University
// Date:		   4/2/2018
// Class:		   CS 250
// Assignment: Inheritance Lab
// Purpose:		 Demonstrate Inheritance
//******************************************************************************

#include "HourlyEmployee.h"
#include <iostream>


//******************************************************************************
// Constructor:	HourlyEmployee
//
// Description:	Call the Employee default constructor, set mWageRate 
//              and mHoursWorked both to zero.
//
// Parameters:	none
//
// Returned:		none
//******************************************************************************
HourlyEmployee::HourlyEmployee () : Employee (), mWageRate (0), 
  mHoursWorked (0) {
}

//******************************************************************************
// Constructor:	HourlyEmployee
//
// Description:	Call the Employee constructor with name, set mWageRate 
//              and mHoursWorked both the given parameters.
//
// Parameters:	name        - the name of the Employee
//						  ssn					- social security number
//              hourlyRate  - the wage of the Employee
//              hoursWorked - the hours the Employee worked
//
// Returned:		none
//******************************************************************************
HourlyEmployee::HourlyEmployee (std::string name, std::string ssn,
  double hourlyRate, double hoursWorked) :
  Employee (name, ssn), mWageRate (hourlyRate),
  mHoursWorked (hoursWorked) {
}

//******************************************************************************
// Function:	getPay
//
// Description:	Calculate and return the total pay
//
// Parameters:	none
//
// Returned:	double - the total pay
//******************************************************************************
double HourlyEmployee::getPay () const {
  return mWageRate * mHoursWorked;
}

//******************************************************************************
// Function:	addWorkedHours
//
// Description:	Add hours to HoursWorked
//
// Parameters:	hours - the hours to add
//
// Returned:	none
//******************************************************************************
void HourlyEmployee::addWorkedHours (double hours) {
  mHoursWorked += hours;
}

//******************************************************************************
// Function:	print
//
// Description:	Print the HourlyEmployee to the stream
//
// Parameters:	rcOut - the stream to print to
//
// Returned:	none
//******************************************************************************
void HourlyEmployee::print (ostream& rcOut) const {

  Employee::print (rcOut);

  // OR
  //rcOut << "Name: " << getName() << " SSN: " << getSSN();

  rcOut << " Wage: " << mWageRate << " HoursWorked: " << mHoursWorked;
  rcOut << " Pay: " << getPay ();
}