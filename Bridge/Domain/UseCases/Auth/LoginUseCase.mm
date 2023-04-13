//
//  LoginUseCase.m
//  Bridge
//
//  Created by Rza Ismayilov on 11.04.23.
//

#import "LoginUseCase.h"
#import "AuthRepo.hpp"

@interface LoginUseCase ()

@property AuthRepo * repo;

@end

@implementation LoginUseCase

- (id)initWithRepo:(AuthRepo *)repo {
    self = [super init];
    if (self) {
        self.repo = repo;
    }
    return self;
}

- (bool)loginWithUsername:(NSString *)username andPassword:(NSString *)password {
    return self.repo->login(std::string([username UTF8String]),
                            std::string([password UTF8String]));
}

- (void) dealloc {
    delete self.repo;
    NSLog(@"LoginUseCase Dealloc");
}

@end
