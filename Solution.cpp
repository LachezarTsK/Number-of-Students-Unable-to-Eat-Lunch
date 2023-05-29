
#include <array>
#include <vector>
using namespace std;

class Solution {
    
public:
    int countStudents(const vector<int>& students, const vector<int>& sandwiches) const {
        array<int, 2> frequencyStudentPreference{};
        for (const auto& student : students) {
            ++frequencyStudentPreference[student];
        }

        for (const auto& sandwich : sandwiches) {
            if (frequencyStudentPreference[sandwich] == 0) {
                break;
            }
            --frequencyStudentPreference[sandwich];
        }

        return frequencyStudentPreference[0] + frequencyStudentPreference[1];
    }
};
