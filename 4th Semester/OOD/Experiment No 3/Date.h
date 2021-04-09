class Date
{
private:
    int day, month, year;

public:
    Date();
    Date(int dd, int mm, int yyyy);
    void setDate();
    void printDate();
    int getDay();
    int getMonth();
    int getYear();
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    void incrementDate();
    void decrementDate();
    void dateDifference(Date s);
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
};
