#include <iostream>
#include <vector>

int getSum(std::vector<int> vec);
int getMin(std::vector<int> vec);
int getAverage(std::vector<int> vec);

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Sum: " << getSum(vec) << "\n";
    std::cout << "Min: " << getMin(vec) << "\n";
    std::cout << "Average: " << getAverage(vec);
}

int getSum(std::vector<int> vec)
{
    int sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }

    return sum;
}

int getMin(std::vector<int> vec)
{
    if (vec.size() == 0)
    {
        return 0;
    }

    int min = vec[0];
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] < min)
        {
            min = vec[i];
        }
    }

    return min;
}

int getAverage(std::vector<int> vec)
{
    int sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }

    return sum / vec.size();
}