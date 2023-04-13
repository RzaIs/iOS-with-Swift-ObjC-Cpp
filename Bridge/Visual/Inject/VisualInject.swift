//
//  VisualInject.swift
//  Bridge
//
//  Created by Rza Ismayilov on 11.04.23.
//

class VisualInject {
    private let dependency: DomainInject
    
    init(dependency: DomainInject) {
        self.dependency = dependency
    }
    
    var loginUseCase: LoginUseCase {
        self.dependency.loginUseCase()
    }
}
