#include <iostream>
#include <tuple>

void runGetSet()
{
    try
    {
        std::tuple<int, int, std::string> _myTuple;

        // Making an tuple
        _myTuple = std::make_tuple(0, 1, "Hello world");

        // Getting value by std::get function
        std::cout << "Value of tuple: \n\t"
                  << "First Value: " << std::get<0>(_myTuple) << "\n\t"
                  << "Second Value: " << std::get<1>(_myTuple) << "\n\t"
                  << "Third Value: " << std::get<2>(_myTuple)
                  << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}


void tuple_cating() {
     try
    {
        std::tuple<int, int, std::string> _myTuple;
        std::tuple<std::string, std::string, int> _mSecondTuple;

        // Making an tuple
        _myTuple = std::make_tuple(0, 1, "Hello world");
        _mSecondTuple = std::make_tuple("Second", "Error", 231);

        // Catting the tuples
        auto _thirdTuple = tuple_cat(_myTuple, _mSecondTuple);

        // Getting value by std::get function
        std::cout << "Value of tuple: \n\t"
                  << "First Value: " << std::get<0>(_thirdTuple) << "\n\t"
                  << "Second Value: " << std::get<1>(_thirdTuple) << "\n\t"
                  << "Third Value: " << std::get<2>(_thirdTuple) << "\n\t"
                  << "Fourth Value: " << std::get<3>(_thirdTuple) << "\n\t"
                  << "Fifth Value: " << std::get<4>(_thirdTuple) << "\n\t"
                  << "Sixth Value: " << std::get<5>(_thirdTuple)
                  << std::endl;


    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void tieMethod()
{

    try
    {
        int _first;
        int _second;
        std::string _third;

        std::tuple<int, int, std::string> _myTuple;

        // Making an tuple
        _myTuple = std::make_tuple(0, 3, "Hello world");


        std::tie(_first, std::ignore, _third) = _myTuple;
        std::cout << "The unpacked tuple values (without ignore) are : ";
        std::cout << _first << " " << _second << " " << _third;
        std::cout << std::endl;

        std::tie(_first, _second, _third) = _myTuple;

        std::cout << "The unpacked tuple values (without ignore) are : ";
        std::cout << _first << " " << _second << " " << _third;
        std::cout << std::endl;

    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main()
{
    runGetSet();
    tieMethod();
    tuple_cating();
    return 0;
}