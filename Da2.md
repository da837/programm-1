
void printArrayElement(int num[], int n) {
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
}

void setArrayElement(int num[], int n) {
    cout << "Enter five numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
}

int main() {
    int number[5];
    setArrayElement(number, 5);
    cout << "Array Elements are: ";
    printArrayElement(number, 5);
    return 0;
}
