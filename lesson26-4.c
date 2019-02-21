/*import Foundation
var char = "A"
//print(char)
//print(char.hashValue)
//var a = char.hashValue
var b = "b".hashValue
var a1 = "A".hashValue
var b1 = "B".hashValue
//print(a1)
//print(b,b1)
/*var chars = "kREjh"
for i in chars{
var s = String(i)
var c = s.lowercased()
var c1 = s.uppercased()
print(c,c1)
}*/
   //print( uppercaseString)
    
//}
    
//var str:  = "f"
//print(str[str.endIndex].value)
///////////////// 
/*var ch: Character = "A"
for i in "aAbBcCxXzZ"{
    ch = i
    let s: String.UnicodeScalarView = String(ch).unicodeScalars
    print("ch=\(ch) s=\(s) value=\(s[s.startIndex].value)") // returns 65
    }
 */   
//!!!!!!!!!!!!!!! extension Character!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  
    
extension Character
{
    func unicodeScalarCodePoint() -> UInt32
    {
        let characterString = String(self)
        let scalars = characterString.unicodeScalars

        return scalars[scalars.startIndex].value
    }
}
let char1 : Character = "A"
print(char1.unicodeScalarCodePoint())
var skalar = char1.unicodeScalarCodePoint()
//print(" \u{0065} ")
//
*/
     //let str11 = CharacterSet(charactersIn: str2)
    //let components = str1.components(separatedBy: set1)
    //str1 = components.joined(separator: str2)
    
    
import Foundation
infix operator ^^
func ^^(_ str1: inout String,_ str2: String){
    var tempStr = ""
    for i in str1{
        var n = 0
        for j in str2{
                if String(i).uppercased() == String(j).uppercased(){// && n == 0{
                    tempStr += "\(String(i).uppercased())"
                    n = 1
                    break
                }
            }
            if n == 0{
                tempStr += "\(i)"
            }
        }
    str1 = tempStr
}

var aa = "wifgweiufhjjsk"
var bb = "fs"
aa ^^ bb
print(aa)