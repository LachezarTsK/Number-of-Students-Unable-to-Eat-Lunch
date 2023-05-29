
public class Solution {

    public int countStudents(int[] students, int[] sandwiches) {
        int[] frequencyStudentPreference = new int[2];
        for (int student : students) {
            ++frequencyStudentPreference[student];
        }

        for (int sandwich : sandwiches) {
            if (frequencyStudentPreference[sandwich] == 0) {
                break;
            }
            --frequencyStudentPreference[sandwich];
        }

        return frequencyStudentPreference[0] + frequencyStudentPreference[1];
    }
}
