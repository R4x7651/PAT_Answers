#include "string"
#include "iostream"

using namespace std;

struct Stu {
    string name;
    string no;
    int score;
} student[2],temp;

int main() {

    int n;

    student[0].score = 101;
    student[1].score = -1;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> temp.name >> temp.no >> temp.score;
        if (temp.score < student[0].score)  student[0]= temp;
        if (temp.score > student[1].score)  student[1]= temp;
    }
    cout << student[1].name << " " << student[1].no << endl;
    cout << student[0].name << " " << student[0].no;

    return 0;
}