//
//  CoreInject.cpp
//  Bridge
//
//  Created by Rza Ismayilov on 11.04.23.
//

#include "CoreInject.hpp"
#include "AuthRepoImpl.hpp"

CoreInject::CoreInject(std::string username, std::string password) {
    this->username = username;
    this->password = password;
}

CoreInject::~CoreInject() {
    this->username = "";
    this->password = "";
}

AuthRepo * CoreInject::authRepo() {
    return new AuthRepoImpl(this->username, this->password);
}
