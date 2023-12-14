#include <iostream>
#include <fstream>
#include <sstream>

enum class Gender { Male, Female };

struct Person 
{
std::string name;
int age;
std::string gender;
};

int main()
{
std::vector<Person> persons;
std::string name;
int age;
std:: string genderInput;

int numberOfPeople;
std::cout <<"enter number of people:";
std::cin >>numberOfPeople;

std::cout <<"enter name:";
std::cin >>name;

std::cout <<"enter age:";
std::cin >>age;
