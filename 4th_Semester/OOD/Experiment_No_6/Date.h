class Date
{
    private:
        int day,month,year;
    public:
        Date();
        Date(int d,int m,int y);
        void setDate();
        void printDate();
        int getDay() ;
        int getMonth();
        int getYear();
        void setDay(int day);
        void setMonth(int month);
        void setYear(int year);
        int calculateAge(Date currentDate);
};
