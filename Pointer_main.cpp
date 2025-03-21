#include <iostream>

using namespace std;

//Câu a
int strlen(const char* a) {
    int length = 0;
    while (a[length] != '\0') {
        length++;
    }
    return length;
}


void reverse(char* a) {
    int n = strlen(a);
    for (int i = 0; i < n / 2; i++) {
        char temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

//Câu b
void delete_char(char* a, char c) {
    int n = strlen(a);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != c) {
            a[j++] = a[i];
        }
    }
    a[j] = '\0';
}

//Câu c
void pad_right(char* a, int n) {
    int len = strlen(a);
    if (len >= n) return;
    for (int i = len; i < n; i++) {
        a[i] = ' ';
    }
    a[n] = '\0';
}

//Câu d
void pad_left(char* a, int n) {
    int len = strlen(a);
    if (len >= n) return;
    for (int i = n - 1; i >= n - len; i--) {
        a[i] = a[i - (n - len)];
    }
    for (int i = 0; i < n - len; i++) {
        a[i] = ' ';
    }
    a[n] = '\0';
}

//Câu e
void truncate(char* a, int n) {
    if (strlen(a) > n) {
        a[n] = '\0';
    }
}

//Câu f
bool is_palindrome(const char* a) {
    int n = strlen(a);
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

//Câu g
void trim_left(char* a) {
    int n = strlen(a);
    int i = 0;
    while (a[i] == ' ') {
        i++;
    }
    for (int j = 0; j < n - i; j++) {
        a[j] = a[j + i];
    }
    a[n - i] = '\0';
}

//Câu h
void trim_right(char* a) {
    int n = strlen(a);
    while (n > 0 && a[n - 1] == ' ') {
        n--;
    }
    a[n] = '\0';
}

int main() {
    char str1[] = "hello world!";
    reverse(str1);
    cout << "Reversed: " << str1 << endl;

    char str2[] = "hello world!";
    delete_char(str2, 'l');
    cout << "Deleted 'l': " << str2 << endl;

    char str3[] = "hello";
    pad_right(str3, 10);
    cout << "Padded right: '" << str3 << "'" << endl;

    char str4[] = "hello";
    pad_left(str4, 10);
    cout << "Padded left: '" << str4 << "'" << endl;

    char str5[] = "hello world";
    truncate(str5, 5);
    cout << "Truncated: " << str5 << endl;

    char str6[] = "madam";
    cout << "Is palindrome: " << (is_palindrome(str6) ? "true" : "false") << endl;

    char str7[] = "   hello";
    trim_left(str7);
    cout << "Trimmed left: '" << str7 << "'" << endl;

    char str8[] = "hello   ";
    trim_right(str8);
    cout << "Trimmed right: '" << str8 << "'" << endl;

    return 0;
}
