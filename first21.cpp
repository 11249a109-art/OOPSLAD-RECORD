#include <iostream>
using namespace std;
class Student {
protected:
    int roll_no;
public:
    void getNumber(int r) {
        roll_no = r;
    }
    void putNumber() {
        cout << "Roll Number: " << roll_no << endl;
    }
};
class Test : public Student {
protected:
    float part1, part2;
public:
    void getMarks(float a, float b) {
        part1 = a;
        part2 = b;
    }
    void putMarks() {
        cout << "Marks obtained:" << endl;
        cout << "Part 1: " << part1 << endl;
        cout << "Part 2: " << part2 << endl;
    }
};
class Sports : public Student {
protected:
    float score;
public:
    void getScore(float s) {
        score = s;
    }
    void putScore() {
        cout << "Sports score: " << score << endl;
    }
};
class Result : public Test, public Sports {
    float total;
public:
    void display() {
        total = part1 + part2 + score;
      
        cout << "---- Student Result ----" << endl;
        Test::putNumber(); 
        putScore();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result r;
    r.Test::getNumber(101); 
    r.getMarks(85.5, 90.0);
    r.getScore(8.5);

    r.display();

    return 0;
}
