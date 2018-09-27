#include <iostream>
#include "include/calendar.h"

int main() {
    int day ;
    int mounth;
    int year;
    std::cout << "Input day"<<std::endl;
    std::cin >> day;
    std::cout << "Input mounth"<<std::endl;
    std::cin >> mounth;
    std::cout << "Input year"<<std::endl;
    std::cin >> year;
    Calendar data = Calendar(day,mounth,year);
    return 0;
}