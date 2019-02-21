import Foundation
extension Int{
    subscript(count: Int) -> Int{
        get{
            let temp = String(self)
            if count <= temp.count{
               var char: [Character] = []
               for i in temp{
                     char.append(i)
               }
               return Int("\(char[char.count - count])")!
            }
            else{
                 print("not element")
                 return 0
            }     
        }
        set(newValue){
            var temp = String(self)
            if count <= temp.count{
               var char: [Character] = []
               for i in temp{
                     char.append(i)
               }
               temp = ""
               char[char.count - count] = Character("\(newValue)")
                for i in 0..<char.count{
                     temp += "\(char[i])"
               }
               self = Int(temp)!
            }
            else{
                print("not elment")
            }
        }
    }    
}
var a = 123456789
print(a[3])
a[4] = 0
print(a)
