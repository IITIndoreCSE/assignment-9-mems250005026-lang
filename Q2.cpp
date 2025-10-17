#include <iostream>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    Color colors[5];

     
    for(int i = 0; i < 5; ++i) {
        cout << "Enter red, green, and blue values for color " << (i + 1) << " (0-255): ";
        cin >> colors[i].red >> colors[i].green >> colors[i].blue;
    }

    
    for(int i = 0; i < 3; ++i) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }

    
    cout << "\nUpdated colors:\n";
    for(int i = 0; i < 5; ++i) {
        cout << "Color " << (i + 1) << ": (" << colors[i].red << ", "
             << colors[i].green << ", " << colors[i].blue << ")\n";
    }

    return 0;
}
