
#include "person.h"


string Person::getFirstName() {
    return firstName;
}
void Person::setFirstName(string fName){
  fName = firstName;
}

string Person::getLastName(){
    return lastName;
}

void Person::setLastName(string lName){
  lName = lastName;
}

float Person::getPayRate(){
    return::payRate;
}

float Person::getHoursWorked(){
    return::hoursWorked;
}

float Person:: totalPay(){
  totalPay() = hoursWorked * payRate;
  return totalPay;
}
