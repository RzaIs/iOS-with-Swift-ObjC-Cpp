//
//  ContentView.swift
//  Bridge
//
//  Created by Rza Ismayilov on 11.04.23.
//

import SwiftUI

struct ContentView: View {
    
    let inject: VisualInject
    
    @State var loginUseCase: LoginUseCase
    
    @State var text: String = ""
    
    var body: some View {
        VStack {
            Image(systemName: "globe")
                .imageScale(.large)
                .foregroundColor(.accentColor)
            Text(text)
            Button("login") {
                if self.loginUseCase.login(withUsername: "username", andPassword: "password"){
                    self.text = "Logged In"
                    self.loginUseCase = inject.loginUseCase
                } else {
                    self.text = "Failed"
                }
            }
        }
        .padding()
    }
}

//struct ContentView_Previews: PreviewProvider {
//    static var previews: some View {
//        ContentView(loginUseCase: <#T##LoginUseCase#>)
//    }
//}
