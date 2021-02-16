#include <iostream>
#include <vector>
#include "practical7Date.hpp"
#include "practical7Blood.hpp"
#include "practical7Patient.hpp"

int main(int argc, const char * argv[]){
  Patient mary = Patient("Mary");
  Patient basma = Patient("Basma");
  mary.addrecord(Blood(94,61, Date(2,5,2013)));
  mary.addrecord(Blood(97,65, Date(3,5,2013)));
  mary.addrecord(Blood(144,99, Date(4,5,2013)));
  mary.addrecord(Blood(123,88, Date(5,5,2013)));
  mary.addrecord(Blood(177,110, Date(6,5,2013)));
  mary.addrecord(Blood(145,89, Date(7,5,2013)));
  basma.addrecord(Blood(90,70, Date(8,8,2013)));
  basma.addrecord(Blood(95,81, Date(9,5,2013)));
  basma.addrecord(Blood(95,87, Date(10,5,2013)));
  

  mary.printreport();
  basma.printreport();



}
