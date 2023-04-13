//
//  DomainInject.mm
//  Bridge
//
//  Created by Rza Ismayilov on 11.04.23.
//

#import "DomainInject.h"
#import "CoreInject.hpp"

@interface DomainInject ()

@property CoreInject * dependency;

@end

@implementation DomainInject

- (instancetype)initWithUsername:(NSString *)username password:(NSString *)password {
    self = [super init];
    if (self) {
        self.dependency = new CoreInject(std::string([username UTF8String]),
                                         std::string([password UTF8String]));
    }
    return self;
}

- (LoginUseCase *)loginUseCase; {
    LoginUseCase * useCase = [LoginUseCase alloc];
    AuthRepo * repo = self.dependency->authRepo();
    return [useCase initWithRepo:repo];
}

@end
