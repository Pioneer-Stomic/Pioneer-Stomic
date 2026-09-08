#include <iostream>
#include <string>

int main()
{
    int scores[3][3] = 
    {
        { 100, 70, 80 },
        { 60, 50, 90 },
        { 80, 70, 90 }
    };

    std::string names[3] = { "A", "B", "C" };

    // Print the subject scores of the three students
    for(int i{ }; i < 3; i++)
    {
        std::cout << names[i] << "'s individual subject scores are \n";

        for(int j{ }; j < 3; j++ )
        {
            std::cout << scores[i][j] << '\t';
        }

        std::cout << '\n';
    }

    // Calculate the total score of each student
    for(int i{ }; i < 3; i++)
    {
        int sum{ };

        for(int j{ }; j < 3; j++)
        {
            sum += scores[i][j];
        }

        std::cout << names[i] << "'s total score is " << sum << '\n';
    }

    return 0;
}