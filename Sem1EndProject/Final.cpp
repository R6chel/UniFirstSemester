/*
Final.cpp
Submit until: 25.01.2024
s24583 / Filip Bone

Temat projektu:

Napisz program rysowania znakiem ASCII poniższej figury. Program powinien umożliwić:
- wybór znaku kodu ASCII;
- wczytywanie początkowych rozmiarów figury;
− przesuwanie figury klawiszami ←, →, ↑, ↓;
− powiększanie oraz zmniejszanie rozmiaru figury za pomocą klawiszy + i -;
− ograniczenie przesuwania i rozmiarów figury do obszaru ekranu;

SHAPE:

#
    #
        #
            # <- summit
        #
    #
#

Uwaga: punkt początkowy (summit) znajudeje się na środku ekranu (basha).

Program musi:
1. działać poprawnie;
2. posiadać komentarz wstępny z treścią zadania, numerem
    projektu, datą oraz imieniem i nazwiskiem autora;
3. posiadać komentarze objaśniające istotne fragmenty programu
4. mieć czytelny zapis;
5. mieć kontrolę poprawności wprowadzanych danych;
6. mieć czytelny interfejs:
wypisana i dobrze zredagowana treść zadania na ekranie;
informacja dla użytkownika programu dot. sposobu obsługi.

Program na ocenę bardzo dobrą musi być napisany w postaci strukturalnej (z użyciem funkcji) lub obiektowej.
Na zaliczenie programu student musi mieć przygotowany zestaw
danych testowych ilustrujący możliwości programu.
*/

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <limits>

using namespace std;

// Enum representing movement directions
enum movement {
    UP = 72,
    DOWN = 80,
    LEFT = 75,
    RIGHT = 77
};

// Function to set the cursor position in the console window
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Structure to represent a point with x and y coordinates
struct Point {
    int x, y;
};

// Structure to represent a shape with position, size, and a vector of vectors (body)
struct Shape {
    Point position;
    int size;
    vector<vector<char>> body; // Vector of vectors for the shape
};

// Function to create and initialize the body of the shape
vector<vector<char>> createShapeBody(int size, char symbol) {
    return vector<vector<char>>(size, vector<char>(size, symbol));
}

// Function to draw the shape on the console window
void drawShape(const Shape& shape) {
    gotoxy(shape.position.x, shape.position.y);
    for (int i = 0; i < shape.size; ++i) {
        for (int j = 0; j < shape.size; ++j) {
            cout << shape.body[i][j];
        }
        cout << "\n";
        gotoxy(shape.position.x, shape.position.y + i + 1);
    }
}

// Function to clear the shape from the console window
void clearShape(const Shape& shape) {
    gotoxy(shape.position.x, shape.position.y);
    for (int i = 0; i < shape.size; ++i) {
        for (int j = 0; j < shape.size; ++j) {
            cout << " ";
        }
        gotoxy(shape.position.x, shape.position.y + i + 1);
    }
}

// Function to get the current console window size
void getConsoleWindowSize(int& width, int& height) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    } else {
        // Handle error if unable to get console window information
        width = 0;
        height = 0;
    }
}

// Error-checking function for integer input
int getIntegerInput() {
    int input;
    while (true) {
        if (cin >> input) {
            // Input is of the correct type (integer)
            break;
        } else {
            // Clear the input buffer to prevent an infinite loop
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "Invalid input. Please enter an integer: ";
        }
    }
    return input;
}

int main() {
    // Get building block (character) from the user
    char symbol;
    cout << "Enter the ASCII character which the shape will be made out of: ";
    cin >> symbol;

    // Get initial size of the shape from the user
    int initialSize;
    cout << "Enter the initial size of the shape: ";
    initialSize = getIntegerInput(); // Use the error-checking function

    // Initialize shape parameters in the middle of the console window
    Shape movingShape;
    int initialWidth, initialHeight;
    getConsoleWindowSize(initialWidth, initialHeight);
    movingShape.position.x = (initialWidth - initialSize) / 2;
    movingShape.position.y = (initialHeight - initialSize) / 2;
    movingShape.size = initialSize;
    movingShape.body = createShapeBody(initialSize, symbol);

    // Set initial console size
    system(("mode con: cols=" + to_string(initialWidth) + " lines=" + to_string(initialHeight)).c_str());

    // Set vertical limit
    const int verticalLimit = initialHeight - 1;

    // Hide cursor
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 100;
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

    // Main loop for handling user input and updating the shape
    int key;
    while ((key = getch()) != 27) {  // 27 corresponds to the Esc key
        clearShape(movingShape);

        // Handle arrow key presses using the Movement enum
        switch (key) {
            case movement::UP:
                if (movingShape.position.y > 0) {
                    movingShape.position.y--;
                }
                break;
            case movement::DOWN:
                if (movingShape.position.y + movingShape.size < verticalLimit) {
                    movingShape.position.y++;
                }
                break;
            case movement::LEFT:
                if (movingShape.position.x > 0) {
                    movingShape.position.x--;
                }
                break;
            case movement::RIGHT:
                if (movingShape.position.x + movingShape.size < initialWidth) {
                    movingShape.position.x++;
                }
                break;
            case '+':
                movingShape.size++;
                movingShape.body = createShapeBody(movingShape.size, symbol);
                break;
            case '-':
                if (movingShape.size > 1) {
                    movingShape.size--;
                    movingShape.body = createShapeBody(movingShape.size, symbol);
                }
                break;
        }

        drawShape(movingShape);
        Sleep(20);  // Pause for a short duration (milliseconds)
    }

    // Show cursor and end program
    cursorInfo.bVisible = true;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

    return 0;
}
