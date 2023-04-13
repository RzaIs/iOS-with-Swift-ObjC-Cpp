//
//  AuthRepoImpl.cpp
//  Bridge
//
//  Created by Rza Ismayilov on 11.04.23.
//

#include "AuthRepoImpl.hpp"

AuthRepoImpl::AuthRepoImpl(std::string username, std::string password) {
    this->username = username;
    this->password = password;
}

AuthRepoImpl::~AuthRepoImpl() {
    this->username = "";
    this->password = "";
}

bool AuthRepoImpl::login(std::string username, std::string password) {
    if (this->username == username && this->password == password) {
        return true;
    } else {
        return false;
    }
}
