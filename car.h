#include <string>

struct PersonType {
    std::string firstname;
    std::string lastname;
};

struct Date
{
  int month;
  int day;
  int year;
};

struct Car
{
  float price;
  Date purchased;
  PersonType customer;
};
