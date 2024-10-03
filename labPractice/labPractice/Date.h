#include <iostream>
#include <string>
using namespace std;

class Date {
    public:
        Date (int currentMonth, int currentDay, int currentYear) 
        :   year(currentYear){

            if (currentMonth >= 1 && currentMonth <= 12) {
            month = currentMonth;
            } 
            
            day = currentDay;
            
        }

        int getMonth() const {
            return month;
        }
        void setDay(int currentDay) {
            day = currentDay;
        }
        int getDay() const {
            return day;
        }
        void setYear(int currentYear) {
            year = currentYear;
        }
        int getYear() const {
            return year;
        }
        void displayDate() const {
            cout << month << "/" << day << "/" << year << endl;
        }
    private:
        int month{1};
        int day;
        int year;

};
