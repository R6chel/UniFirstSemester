/*
Projekt PRG1

Name: Final.cpp
Submit until: 25.01.2024 
Author: s24583 / Filip Bone

Description:

Temat projektu:

Napisz program rysowania znakiem ASCII poniższej figury. Program powinien umożliwić:
- wybór znaku kodu ASCII;
- wczytywanie początkowych rozmiarów figury;
− przesuwanie figury klawiszami ←, →, ↑, ↓;
− powiększanie oraz zmniejszanie rozmiaru figury za pomocą klawiszy + i -;
− ograniczenie przesuwania i rozmiarów figury do obszaru ekranu;

SHAPE:

Let's assume size = 4.

#     {
 #      <- ascending part
   #  }
    # <- summit
   #  {
  #     <- descending part
#     }


Uwaga: punkt początkowy (summit) znajudeje się na środku ekranu.

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
void drawShape(const Shape& shape, char assignedCharacter) {
    // Draw the ascending part
    for(int i = 0; i < shape.size; i++){
        gotoxy(shape.position.x-i, shape.position.y-i);
        cout << assignedCharacter;
    }
    // Draw the descending part
    for(int j = 0; j < shape.size; j++){
        gotoxy(shape.position.x-j, shape.position.y+j);
        cout << assignedCharacter;
    }
    // Draw the summit
    gotoxy(shape.position.x, shape.position.y);
}

// Function to get the current console window size
void getConsoleWindowSize(int& width, int& height) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        // Calculate the width and height of the console window
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
        drawShape(movingShape, ' ');

        // Handle arrow key presses using the Movement enum
        switch (key) {
            case movement::UP:
                // Visually move the shape upwards
                if (movingShape.position.y > movingShape.size) {
                    movingShape.position.y--;
                }
                break;
            case movement::DOWN:
                // Visually move the shape downwards
                if (movingShape.position.y + movingShape.size < verticalLimit) {
                    movingShape.position.y++;
                }
                break;
            case movement::LEFT:
                // Visually move the shape left
                if (movingShape.position.x > movingShape.size) {
                    movingShape.position.x--;
                }
                break;
            case movement::RIGHT:
                // Visually move the shape right
                if (movingShape.position.x + movingShape.size < initialWidth) {
                    movingShape.position.x++;
                }
                break;
            case '+':
                // Increase the size of the shape
                movingShape.size++;
                movingShape.body = createShapeBody(movingShape.size, symbol);
                break;
            case '-':
                if (movingShape.size > 1) {
                    // Decrease the size of the shape
                    movingShape.size--;
                    movingShape.body = createShapeBody(movingShape.size, symbol);
                }
                break;
        }
        drawShape(movingShape, symbol);
        Sleep(20);  // Pause for a short duration (milliseconds)
    }

    // Show cursor and end program
    cursorInfo.bVisible = true;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

    return 0;
}