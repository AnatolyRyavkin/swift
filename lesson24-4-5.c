//import Foundation
extension String{
    subscript(elem: Range<Int>) -> String{
         get{
             var char: [Character] = []
             for i in self{
                 char += [i]
             }
             let temp = char[elem]
             var output = ""
             for i in temp{
                 output += "\(i)"
             }
             return output
         }
         set(newValue){
             var newValueChar: ArraySlice<Character> = []
             
             var char: ArraySlice<Character> = []  
             for i in self{
                 char += [i]
             }
             for i in newValue{
                 newValueChar += [i]
                 
             }
             char[elem] = newValueChar 
             var output = ""
             for i in char{
                 output += "\(i)"
             }
             self = output
             
         }
    }
   mutating func truncate(_ count: Int){
        var char: [Character] = []
             for i in self{
                 char += [i]
             }
        var temp: ArraySlice<Character> = []
        var output = ""
        if count <= char.count{
             temp = char[0...count - 1]
             for i in temp{
                 output += "\(i)"
             }
             if count < char.count{     
                  self = output + "..."
             }
             else {
                  self = output
             }
        }
        else{
            print("error count")
        }
  }
    
}

var s = "Hi Hi Hi"
//print(s[3..<7])
//s[3..<7] = "00000"
print(s)
s.truncate(4)
print(s)