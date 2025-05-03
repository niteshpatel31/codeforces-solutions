#include <iostream>

//                                          R.Age in Days
// Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

int main(int argc, char const *argv[])
{
    unsigned long age, year, month, day, remaining_days;
    std::cin >> age;
    year = age / 365;
    remaining_days = age - (year * 365);
    month = remaining_days / 30;
    day = remaining_days - (month * 30);
    std::cout << year << " years\n";
    std::cout << month << " months\n";
    std::cout << day << " days\n";
    exit(EXIT_SUCCESS);
}