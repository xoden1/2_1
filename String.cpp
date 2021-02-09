//
// Created by pcb11 on 09.02.21.
//

#include "String.h"

String::String()
{
    string = nullptr;
    length = 0;
}

String::String(const String& other)
{
    string = new char[other.length + 1];
    for (auto i = 0; i <= other.length; i++)
        string[i] = other.string[i];
    length = other.length;
}

String::String(const char* str)
{
    int cnt = 0;
    while (str[cnt] != '\0')
        cnt++;
    string = new char[cnt + 1];
    for (auto i = 0; i <= cnt; i++)
        string[i] = str[i];
    length = cnt;
}

String::~String()
{
    delete [] string;
}

String& String::operator=(const String& other)
{
    if (this == &other) {
        return *this;
    }
    String str;
    str.string = new char[other.length + 1];
    for (auto i = 0; i <= other.length; i++)
        str.string[i] = other.string[i];
    str.length = other.length;
    return str;
}

bool String::operator==(const String& other) {
    if (length != other.length)
        return false;
    for (auto i = 0; i <= length; i++) {
        if (string[i] != other.string[i])
            return false;
    }
    return true;
}

int String::len()
{
    return length;
}

int String::find(const char* str)
{
    int cnt = 0;
    while (str[cnt] != '\0')
        cnt++;
    if (cnt > length)
        return -1;
    for (auto i = 0; i <= length - cnt; i++) {
        if (string[i] == str[0]) {
            bool eq = true;
            for (auto j = 0; j < cnt; j++) {
                if (string[i + j] != str[j]) {
                    eq = false;
                    break;
                }
            }
            if (eq)
                return i;
        }
    }
    return -1;
}

String& String::replace(const char symbol1, const char symbol2)
{
    String str;
    str.string = new char[length + 1];
    for (auto i = 0; i <= length; i++) {
        if (string[i] == symbol1)
            str.string[i] = symbol2;
        else
            str.string[i] = string[i];
    }
    str.length = length;
    return str;
}

char String::operator[](int idx) {
    return string[idx];
}

/*String& String::operator+()
{
    String str;
    str.string = new char[length + 1];
    for (auto i = 0; i <= length; i++)
        str.string[i] = string[i];
    str.length = length;
    return str;
}*/