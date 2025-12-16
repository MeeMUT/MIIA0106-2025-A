#include <iostream>
using namespace std;

int main() {
    int L, C, R;   // Sensor: Left, Center, Right

    cout << "Line Following Robot Control System\n";
    cout << "Enter sensor values (1 = black line, 0 = white)\n";

    cout << "Left Sensor (L): ";
    cin >> L;
    cout << "Center Sensor (C): ";
    cin >> C;
    cout << "Right Sensor (R): ";
    cin >> R;

    if (L == 1 && C == 0 && R == 0) {
        cout << "Action: Turn Left\n";
    }
    else if (L == 0 && C == 1 && R == 0) {
        cout << "Action: Move Forward\n";
    }
    else if (L == 0 && C == 0 && R == 1) {
        cout << "Action: Turn Right\n";
    }
    else {
        cout << "Action: Stop or No Line Detected\n";
    }

    return 0;
}