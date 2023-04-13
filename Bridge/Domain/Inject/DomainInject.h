//
//  DomainInject.h
//  Bridge
//
//  Created by Rza Ismayilov on 11.04.23.
//

#ifndef DomainInject_h
#define DomainInject_h

#import <Foundation/Foundation.h>
#import "LoginUseCase.h"

@interface DomainInject : NSObject

- (instancetype)initWithUsername:(NSString *)username password:(NSString *)password;
- (LoginUseCase *)loginUseCase;


@end


#endif /* DomainInject_h */
