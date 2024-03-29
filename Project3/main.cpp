#include <iostream>
/*
 //Задание 1
bool isLeapYear(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
    {
        return true;
    }
    return false;
}

int daysBetweenDates(int day1, int month1, int year1, int day2, int month2, int year2) 
{
    const int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int days = 0;

   
    for (int i = year1; i < year2; i++) 
    {
        if (isLeapYear(i)) 
        {
            days += 366;
        }
        else 
        {
            days += 365;
        }
    }


    for (int i = 1; i < month1; i++) 
    {
        days += daysInMonth[i - 1];
    }
    if (month1 > 2 && isLeapYear(year1)) 
    {
        days++;
    }
    days += day1;

    for (int i = 1; i < month2; i++) 
    {
        days += daysInMonth[i - 1];
    }
    if (month2 > 2 && isLeapYear(year2)) 
    {
        days++;
    }
    days += day2;

    return days;
}*/

/*
 //Задание 2
float average(int arr[], int size) 
{
    float sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum / size;
}
*/
/*
//Задание 3
void countElements(int arr[], int size) 
{
    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] > 0) 
        {
            positive++;
        }
        else if (arr[i] < 0) 
        {
            negative++;
        }
        else 
        {
            zero++;
        }
    }
    std::cout << "Positive elements: " << positive << std::endl;
    std::cout << "Negative elements: " << negative << std::endl;
    std::cout << "Zero elements: " << zero << std::endl;
}
*/
int main()
{
    /*
    //Задание 1
    int day1, month1, year1, day2, month2, year2;

    std::cout << "Enter first date (dd mm yyyy): ";
    std::cin >> day1 >> month1 >> year1;

    std::cout << "Enter second date (dd mm yyyy): ";
    std::cin >> day2 >> month2 >> year2;

    int daysDiff = daysBetweenDates(day1, month1, year1, day2, month2, year2);
    std::cout << "The difference in days between the two dates is: " << daysDiff << std::endl;
    */

    /*
     //Задание 2
    int arr[] = {1, -2, 3, 0, -4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    float avg = average(arr, size);
    std::cout << "Average: " << avg << std::endl;

    countElements(arr, size);
    */



	return 0;
}