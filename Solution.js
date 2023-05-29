
/**
 * @param {number[]} students
 * @param {number[]} sandwiches
 * @return {number}
 */
var countStudents = function (students, sandwiches) {
    const frequencyStudentPreference = [0, 0];
    for (let student of students) {
        ++frequencyStudentPreference[student];
    }

    for (let sandwich of sandwiches) {
        if (frequencyStudentPreference[sandwich] === 0) {
            break;
        }
        --frequencyStudentPreference[sandwich];
    }

    return frequencyStudentPreference[0] + frequencyStudentPreference[1];
};
