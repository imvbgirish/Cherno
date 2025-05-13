#include <iostream>
#include <tuple>
#include <utility>


int main()
{
    //Tuple
    std::tuple<int, std::string, double> product = {123, "Laptop", 1200.50};    //to hold and return multiple values of diff type
    std::cout << "ID: " << std::get<0>(product) << std::endl;
    std::cout << "Name: " << std::get<1>(product) << std::endl;
    std::cout << "Price: " << std::get<2>(product) << std::endl;

    std::cout << "---------------------------------" << std::endl;

    auto person = std::make_tuple("Bob", 30, "Engineer");
    std::cout << "Name: " << std::get<0>(person) << std::endl;
    std::cout << "Age: " << std::get<1>(person) << std::endl;
    std::cout << "Occupation: " << std::get<2>(person) << std::endl;

    std::cout << "---------------------------------------------------------------"  << std::endl;

    //Pair
    std::pair<int, std::string> student = {101, "Alice"};
    std::cout << "ID: " << student.first << ", Name: " << student.second << std::endl;

    auto coordinates = std::make_pair(2.5, 3.8);
    std::cout << "X: " << coordinates.first << ", Y: " << coordinates.second << std::endl;

    std::cout << "Hello World!" << std::endl;
    return 0;
}
