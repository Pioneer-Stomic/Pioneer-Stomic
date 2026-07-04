#include <iostream>
#include <string>
#include <ctime>

struct Student
{
    std::string stuName{ };
    int age{ };
    int score{ };
};

struct Teacher
{
    std::string tchName{ };
    Student stuArr[5];
};

// Create information for teachers and students
void allocateSpace(Teacher tchArr[], int tchLen, int stuLen)
{
    std::string nameSeed{ "ABCDE" };
    
    // Create information for teachers
    for(int i{ }; i < tchLen; i++)
    {
        tchArr[i].tchName = "Teacher_";
        tchArr[i].tchName += nameSeed[i];

        // Create information for students
        for(int j{ }; j < stuLen; j++)
        {
            tchArr[i].stuArr[j].stuName = "Student_";
            tchArr[i].stuArr[j].stuName += nameSeed[j];

            int randAge{ rand() % 8 + 16 };
            int randScore{ rand() % 61 + 40 };

            tchArr[i].stuArr[j].age = randAge;
            tchArr[i].stuArr[j].score = randScore;
        }
    }
}

// Print teachers' and students' information
void printInfo(Teacher tchArr[], int tchLen, int stuLen)
{
    // Print teachers' information
    for(int i{ }; i < tchLen; i++)
    {
        std::cout << "Teacher name: " << tchArr[i].tchName << '\n' << '\n';

        // Print students' information
        for(int j{ }; j < stuLen; j++)
        {
            std::cout << "\tStudent name: " << tchArr[i].stuArr[j].stuName << '\n';
            std::cout << "\tAge: " << tchArr[i].stuArr[j].age << '\n' ;
            std::cout << "\tScore: " << tchArr[i].stuArr[j].score << '\n' << '\n';
        }
        std::cout << '\n';
    }
}

int main()
{
    srand((unsigned int)time(nullptr));
    
    Teacher tchArr[3];
    int tchLen { sizeof(tchArr) / sizeof(tchArr[0]) };
    int stuLen { sizeof(tchArr->stuArr) / sizeof(tchArr->stuArr[0]) };

    allocateSpace(tchArr, tchLen, stuLen);

    printInfo(tchArr, tchLen, stuLen);

    return 0;
}