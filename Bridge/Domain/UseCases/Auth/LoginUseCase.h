//
//  LoginUseCase.h
//  Bridge
//
//  Created by Rza Ismayilov on 11.04.23.
//

#ifndef LoginUseCase_h
#define LoginUseCase_h

#import <Foundation/Foundation.h>

#if __cplusplus
#import "AuthRepo.hpp"
#endif

@interface LoginUseCase : NSObject

#if __cplusplus
- (id)initWithRepo:(AuthRepo *)repo;
#endif

- (bool)loginWithUsername:(NSString *)username andPassword:(NSString *)password;

@end

#endif /* LoginUseCase_h */
