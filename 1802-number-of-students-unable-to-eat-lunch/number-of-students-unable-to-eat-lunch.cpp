class Solution {
public:
    int countStudents(std::vector<int>& students, std::vector<int>& sandwiches) {
        int size = students.size();
        std::vector<int> morri (size, 0);
        for (int i = 0; i < size; ++i) {
            int indikator = 0;
            for (int j = 0; j < size; ++j) {
                if (students[j] == sandwiches[i] && morri [j] == 0) {
                    morri.at(j) = 1;
                    indikator = 1;
                    break;
                }
            }
            if (indikator == 0){
            return size - i;
        }
        }
        return 0;
    }
};