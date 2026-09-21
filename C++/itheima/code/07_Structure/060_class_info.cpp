#include <iostream>
#include <string>
#include <ctime>

struct Student
{
    std::string stuName{ };
    int score{ };
};

struct Teacher
{
    std::string tchName{ };
    Student stuArr[5];
};

// Assign values to teachers' and students' information
void allocateSpace(Teacher tchArr[], int len) // "len" is the number of teachers
{
    std::string nameSeed{ "ABCDE" };
    
    // Assign values to teachers
    for(int i{ }; i < 3; i++)
    {
        tchArr[i].tchName = "Teacher ";
        tchArr[i].tchName += nameSeed[i];
        
        for(int j{ }; j < 5; j++)
        {
            // Assign values to students
            int random = rand() % 61 + 40;
            
            tchArr[i].stuArr[j].stuName = "Student ";
            tchArr[i].stuArr[j].stuName += nameSeed[j];
            tchArr[i].stuArr[j].score = random;
        }
    }
}

// Print the information of teachers and students
void printInfo(Teacher tchArr[], int len)
{
    for(int i{ }; i < 3; i++)
    {
        // Print the information of teachers
        std::cout << "Name of teacher: " << tchArr[i].tchName << '\n' << '\n';

        for(int j{ }; j < 5; j++)
        {
            // Print the information of students
            std::cout << "\tName of students: " << tchArr[i].stuArr[j].stuName << '\n';
            std::cout << "\tScore of students: " << tchArr[i].stuArr[j].score << '\n' << '\n';
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    
    Teacher tchArr[3];

    int len{ sizeof(tchArr) / sizeof(tchArr[0]) };
    
    allocateSpace(tchArr, len);

    printInfo(tchArr, len);

    return 0;
}