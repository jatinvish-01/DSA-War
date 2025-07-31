class Solution {
public:
    double calculatePercentage(int totalMarks, int obtainedMarks) {
        int result = (obtainedMarks*100/totalMarks);
        return result;
    }
};