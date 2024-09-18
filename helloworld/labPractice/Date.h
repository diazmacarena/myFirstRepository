#include <iostream>
#include <string>
using namespace std;

class Date {
    public:
        Date (int currentMonth, int currentDay, int currentYear) 
        :   year(currentYear){
            setMonth(currentMonth);
            day = currentDay;
            
        }
        void setMonth(int currentMonth) {
        if (currentMonth >= 1 && currentMonth <= 12) {
            month = currentMonth;
            } 
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
