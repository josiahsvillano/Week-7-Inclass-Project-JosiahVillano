//
// Created by manga on 5/6/2025.
//


#include "MyString.h"
#include <cstring>

MyString::MyString() {
    _sz = nullptr;
}

MyString::MyString(const char *sz) {
    _sz = new char[strlen(sz) + 1];
    strcpy(_sz, sz);
}

void MyString::SetString(const char *sz) {
    if (_sz != nullptr) {
        delete [] _sz;
    }
    _sz = new char[strlen(sz) + 1];
    strcpy(_sz, sz);
}

MyString::~MyString() {
    delete[] _sz;
}

const char * MyString::GetString() const {
    return _sz;
}
