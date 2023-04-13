//
//  BridgeApp.swift
//  Bridge
//
//  Created by Rza Ismayilov on 11.04.23.
//

import SwiftUI


@main
struct BridgeApp: App {
    
    let inject = VisualInject(dependency: .init(username: "username", password: "password"))
    
    var body: some Scene {
        return WindowGroup {
            ContentView(inject: inject, loginUseCase: inject.loginUseCase)
        }
    }
}
