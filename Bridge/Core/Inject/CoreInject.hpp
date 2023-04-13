//
//  CoreInject.hpp
//  Bridge
//
//  Created by Rza Ismayilov on 11.04.23.
//

#ifndef CoreInject_h
#define CoreInject_h

#include <iostream>
#include <string>
#include "AuthRepo.hpp"

#include "TaskLocalDTO.hpp"

class CoreInject {
private:
    std::string username;
    std::string password;
    
public:
    CoreInject(std::string username, std::string password);
    ~CoreInject();
    
    AuthRepo * authRepo();
};


#endif /* CoreInject_h */
