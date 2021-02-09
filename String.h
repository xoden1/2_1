//
// Created by pcb11 on 09.02.21.
//

#ifndef UNTITLED_STRING_H
#define UNTITLED_STRING_H


class String
{
private:
    char* string;
    int length;
public:
    String();
    String(const String& other);
    String(const char* str);
    ~String();
    String& operator=(const String& other);
    bool operator==(const String& other);
    int len();
    int find(const char* str);
    String& replace(const char symbol1, const char symbol2);
    char operator[](int idx);
    //String& operator+();
};


#endif //UNTITLED_STRING_H
