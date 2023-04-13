//
//  AuthRepoImpl.hpp
//  Bridge
//
//  Created by Rza Ismayilov on 11.04.23.
//

#ifndef AuthRepoImpl_h
#define AuthRepoImpl_h

#include "AuthRepo.hpp"

class AuthRepoImpl: public AuthRepo {
    
private:
    std::string username;
    std::string password;
public:
    AuthRepoImpl(std::string username, std::string password);
    ~AuthRepoImpl();
    
    bool login(std::string username, std::string password);
};

#endif /* AuthRepoImpl_h */
