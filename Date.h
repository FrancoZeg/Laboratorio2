#include <iostream>
#include <string>
using namespace std;

class Date {
public:
  Date(int Nmonth, int Nday, int Nyear) {
    Nday = day;
    Nyear = year;
    if (Nmonth >= 0 && Nmonth <= 13) {
      Nmonth = month;
    }
  }

  void setday(int Nday) { day = Nday; }

  int getday() const { return day; };

  void setmonth(int Nmonth) {
    if (Nmonth <= 12 && 1 <= Nmonth) {
      month = Nmonth;
    }
  }

  int getmonth() const { return month; };

  void setyear(int Nyear) { year = Nyear; }

  int getyear() const { return year; };

  int mostrarDetalles(int Nyear, int Nmonth, int Nday) {
    cout << Nday << "/" << Nmonth << "/" << Nyear;
    return 0;
  }

private:
  int month{0};
  int day{0};
  int year{0};
};