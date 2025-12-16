#include <iostream>
#include <cmath>
#include <iomanip>
#include <array>
#include <numeric>

using namespace std;

int find_first_digit(long long n) {
    if (n <= 0) {
        return 0;
    }

    while (n >= 10) {
        n /= 10;
    }
    return static_cast<int>(n);
}

int main() {
    array<int, 10> digit_counts = {0};
    int total_count = 0;
    long long number;

    const array<double, 10> benford_percentages = {
        0.0,
        30.1,
        17.6,
        12.5,
        9.7,
        7.9,
        6.7,
        5.8,
        5.1,
        4.6
    };

    cout << "--- Benford's Law Leading Digit Counter ---\n";
    cout << "Enter a sequence of positive integers (e.g., financial or population data).\n";
    cout << "Enter a non-positive number (e.g., 0 or -1) to stop and analyze.\n\n";

    while (cin >> number) {
        if (number <= 0) {
            break;
        }

        int first_digit = find_first_digit(number);

        if (first_digit >= 1 && first_digit <= 9) {
            digit_counts[first_digit]++;
            total_count++;
        }
    }

    if (total_count == 0) {
        cout << "\nNo positive numbers were entered. Analysis terminated.\n";
        return 0;
    }

    cout << "\n-------------------------------------------------\n";
    cout << "Analysis Complete: " << total_count << " numbers processed.\n";
    cout << "-------------------------------------------------\n";

    cout << fixed << setprecision(2);
    cout << setw(5) << "Digit" << " | "
              << setw(12) << "Actual Count" << " | "
              << setw(10) << "Actual %" << " | "
              << setw(21) << "Benford's Law %" << "\n";
    cout << "-------------------------------------------------\n";

    for (int i = 1; i <= 9; ++i) {
        double actual_percentage = 0.0;
        if (total_count > 0) {
            actual_percentage = (static_cast<double>(digit_counts[i]) / total_count) * 100.0;
        }

        cout << setw(5) << i << " | "
                  << setw(12) << digit_counts[i] << " | "
                  << setw(10) << actual_percentage << " | "
                  << setw(21) << benford_percentages[i] << "\n";
    }

    cout << "-------------------------------------------------\n";
    cout << "The closer the 'Actual %' is to 'Benford's Law %', the more likely the data set conforms to the law.\n";

    return 0;
}
