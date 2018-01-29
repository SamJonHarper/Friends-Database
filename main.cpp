//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// ProblemSheet3,  main.cpp
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

#include <cmath>
#include <iostream>
#include <string>
#include <vector>

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// declarations
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void ReadInValueOne(long & a);
long GetLong(const std:: string & prompt);
int PauseAndReturn();
void PauseAndContinue();
double GetDouble(const std::string & prompt);
void ReadInValueTwo(double & b, double & c);
void ReadInValueThree(long & n);
double FunctionValue(double & b, double & c);
void print(std::string vec, long n, long i);

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// main()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

int main(int argc, char *argv[])
{
    long a;     // For the first function
    
    std::cout << "Hello and welcome to the Sam Harper Show! The first function will take your number and decide whether its divisbly by 3 but not by 2." << std::endl;
    
    ReadInValueOne(a);  // Reading Inputted function one value
    
    if (a %3 == 0 && a %2 != 0)
    {
        std::cout <<"Bingo!" << std::endl;
    }
    else
    {
        std::cout << "Fooey!" << std::endl;
    }

    PauseAndContinue();
    
    std::cout << "The next function takes your x and y computing and returning f(x) = y^2*x^2 + 13y*x^3 – 2x^4" << std::endl;
    
    double b;   //This is the x value
    double c;   //This is the y value
    
    ReadInValueTwo(b, c);   //I have created a different read in function as this function will be calling doubles not longs
    
    long f = c*c * b*b + 13*c*b*b*b - 2*b*b*b*b;
    
    std::cout << f << std::endl;
    
    PauseAndContinue();
    
    std::cout << "The next function takes your string x and prints it to console backwards" << std::endl;
    
    long n = GetLong("Please enter a string to be printed backwards");
    
    long reversedNumber = 0, remainder;
    
    while(n != 0)
    {
        remainder = n %10;
        reversedNumber = reversedNumber*10 +remainder;
        n /= 10;
    }
    
    std::cout << "Reversed Number = " << reversedNumber << std::endl;
    
    PauseAndContinue();
    
    std::cout << "The last function takes your string and prints its n, 2n, 3n..... to console" << std::endl;
    
    long q = GetLong("Please enter a string");
    long p = GetLong("Enter n");
    
    void print(q, p, p);
    
    return PauseAndReturn();
}
        
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// ReadInValueOne()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void ReadInValueOne(long & a)    //Reading in value for function one
{
    a = GetLong("Please enter a value for a");
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// ReadInValueTwo()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void ReadInValueTwo(double & b, double & c)    //Reading in value for function 
{
    b = GetDouble("Please enter a value for b");
    c = GetDouble("Please enter a value for c");
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// ReadInValueThree()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void ReadInValueThree(long n)    //Reading in value for function three
{
    n = GetLong("Please enter a string to be printed backwards");
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// GetLong()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

long GetLong(const std:: string & prompt)
{
    long value;
    std::cout << prompt << ": ";
    std::cin >> value;
    return value;
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// GetDouble()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

double GetDouble(const std::string & prompt)
{
    double value;
    std::cout << prompt << ": ";
    std::cin >> value;
    return value;
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// PauseAndReturn()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

int PauseAndReturn()
{
    char quit = '\0';
    while (quit != 'q')
    {
        std::cout << "Enter q to quit: ";
        std::cin >> quit;
    }
    return 0;
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// PauseAndContinue()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void PauseAndContinue()
{
    std::cout << "Press return to continue to next function" << std::endl;
    std::cin.get();
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// print()
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void Print(std::string vec, long n, long i)
{
    while (i < vec.size())
    {
        std::cout << vec.at(i-1) << std::endl;
        i += n;
    }
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// End of programme
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

        
    

