//
// Created by manga on 5/6/2025.
//

#ifndef MYSTRING_H
#define MYSTRING_H



class MyString {
public:
    MyString();
    MyString(const char* sz);
    void SetString(const char* sz);
    ~MyString();

    const char* GetString() const;

private:
    char* _sz;
};



#endif //MYSTRING_H
