int main() {
    int x = 10;
    int y = 5;

    if (x > y) {
        x = x + 1;
    } else {
        y = y - 1;
    }

    for (int i = 0; i < 10; i = i + 1) {
        x = x * 2;
    }

    while (x > 100) {
        x = x - 5;
    }

    return x;
}