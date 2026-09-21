#include <iostream>
#include <string>
#include <ctime>

struct Student
{
    std::string name{ };
    int score{ };
};

// Assign values to students' information
void getInfo(Student stuArr[], int len)
{
    for(int i{ }; i < len; i++)
    {
        // Get name
        std::string nameSeed{ "ABCDE" };        
        stuArr[i].name = "Student ";
        stuArr[i].name += nameSeed[i];
        
        // Get score randomly
        stuArr[i].score = rand() % 61 + 40;
    }
}

// Bubble sort students' scores
void bubbleSort(Student stuArr[], int len)
{
    for(int i{ }; i < len - 1; i++)
    {
        for(int j{ }; j < len - i - 1; j++)
        {
            if(stuArr[j].score > stuArr[j + 1].score)
            {
                Student temp{ stuArr[j] };
                stuArr[j] = stuArr[j + 1];
                stuArr[j + 1] = temp;
            }
        }
    }
}

// Print the information of students
void printInfo(Student stuArr[], int len)
{
    for(int i{ }; i < len; i++)
    {
        std::cout << "Student's name: " << stuArr[i].name << "  " << "Score: " << stuArr[i].score << '\n';
    }
}

int main()
{
    srand((unsigned int)time(NULL));

    Student stuArr[5];
    int len{ sizeof(stuArr) / sizeof(stuArr[0]) };

    getInfo(stuArr, len);

    std::cout << "Before sorting: " << '\n';
    printInfo(stuArr, len);
    
    bubbleSort(stuArr, len);

    std::cout << '\n' << "After sorting: " << '\n';
    printInfo(stuArr, len);

    return 0;
}