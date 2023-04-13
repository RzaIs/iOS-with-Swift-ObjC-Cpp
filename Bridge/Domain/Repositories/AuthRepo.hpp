//
//  AuthRepo.hpp
//  Bridge
//
//  Created by Rza Ismayilov on 11.04.23.
//

#ifndef AuthRepo_h
#define AuthRepo_h


#include <iostream>
#include <string>

class AuthRepo {
public:
    virtual ~AuthRepo() {};
    virtual bool login(std::string username, std::string password) = 0;
};

#endif /* AuthRepo_h */
