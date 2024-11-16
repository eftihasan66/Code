#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        string solved_problems;
        cin >> solved_problems;
 
        int problem_count[26] = {0};
        int balloons = 0;

        for (char problem : solved_problems) 
        {
            int index = problem - 'A';
            problem_count[index]++;
        }

        // For each problem, add 1 to the counter if it's the first occurrence
        for (int i = 0; i < 26; i++) 
        {
            if (problem_count[i] > 0) 
            {
                balloons+=2; // Add 1 for solving the problem
                
            }
            if (problem_count[i] == 1) 
                {
                    balloons++; // Add 1 if it's the first occurrence
                }
        }

        // Output the total number of balloons
        cout << balloons << endl;
    }

    return 0;
}
