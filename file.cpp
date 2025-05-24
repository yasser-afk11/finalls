#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size, tests, sum_coff = 0;
    float sum = 0, val, final_all_subjects = 0;

    cout << "How many subjects do you have?: ";
    cin >> size;

    vector<string> subject(size);
    vector<int> cof(size);
    vector<float> notes(size);

    for (int i = 0; i < size; i++) {
        cout << "Name of subject " << i + 1 << ": ";
        cin >> subject[i];

        cout << "How many tests does it have?: ";
        cin >> tests;

        sum = 0; // Reset sum for each subject
        for (int j = 0; j < tests; j++) {
            cout << "Value of test " << j + 1 << ": ";
            cin >> val;
            sum += val;
        }
        notes[i] = sum / tests;

        cout << "What is the coefficient?: ";
        cin >> cof[i];
    }

    // Print results
    for (int i = 0; i < size; i++) {
        cout << "Subject " << subject[i] << ": " << notes[i] << endl;
    }

    // Calculate weighted sum
    for (int i = 0; i < size; i++) {
        final_all_subjects += cof[i] * notes[i];
        sum_coff += cof[i];
    }

    // Final semester grade
    float Finall = final_all_subjects / sum_coff;
    cout << "Sum of all coefficients: " << sum_coff << endl;
    cout << "Final weighted sum: " << final_all_subjects << endl;
    cout << "Semester grade: " << Finall << endl;

    return 0;
}