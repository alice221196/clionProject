#include <iostream>
#include "../include/calendar.h"

//
// Created by Alice on 27.09.2018.
//
Calendar::Calendar(int date, int mounth, int year) : date(date), mounth(mounth), year(year) {
    if(year > 0){
        std::cout << "Year: " << year << std::endl;
    }
    else{
        std::cout << "Year is not correct" << std::endl;
    }
    int mm = -1;
    if(mounth >0 && mounth <= 12 ){
        std::cout << "Mounth: " << mounth << std::endl;
        mm = mounth;
    }
    else{
        std::cout << "Mounth is not correct" << std::endl;
    }
    if((mm != -1  && mm != 2 && date > 0 && date < 31 && (mm == 4 || mm == 6 || mm == 9 || mm == 11)) ||
        ( mm != -1 && date > 0 && date < 32 && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) && mm != 2  ) ||
        (mm == 2 && date > 0 && date < 29 )){
        std::cout << "Day: " << date << std::endl;
    }
    else{
        std::cout << "Day is not correct" << std::endl;
    }
}


