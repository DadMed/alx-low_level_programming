#include <stdio.h>

int add(int i, int k) {
    return i + k;
}

int sub(int i, int k) {
    return i - k;
}

int mul(int i, int k) {
    return i * k;
}

int div(int i, int k) {
    if (k != 0) {
        return i / k;
    } else {
        printf("Error: Division by zero\n");
        return 0; // You might want to handle division by zero differently based on your requirements.
    }
}

int mod(int i, int k) {
    if (k != 0) {
        return i % k;
    } else {
        printf("Error: Modulo by zero\n");
        return 0; // You might want to handle modulo by zero differently based on your requirements.
    }
}

