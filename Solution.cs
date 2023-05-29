
using System;

public class Solution
{
    public int CountStudents(int[] students, int[] sandwiches)
    {
        int[] frequencyStudentPreference = new int[2];
        foreach (var student in students)
        {
            ++frequencyStudentPreference[student];
        }

        foreach (int sandwich in sandwiches)
        {
            if (frequencyStudentPreference[sandwich] == 0)
            {
                break;
            }
            --frequencyStudentPreference[sandwich];
        }

        return frequencyStudentPreference[0] + frequencyStudentPreference[1];
    }
}
