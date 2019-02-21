import Foundation
/*var string = ("\(0xA6)")
print(string.isEmpty)
print(string)
var char = "x"
string += char
print(string)
//for c in string
//{print(c)}
string.append(char)
print(string)
print((string as NSString).length)
print(string.count)
print(NSString(string:string).length)
var char1 = "\u{24}\u{1F496}"
print(char1)
string += char1
print(string)
print(string.append(char1))
string += "\u{06E9}"
print(string)
print(string.count)
*/
var c: Character = "e\u{301}\u{20dd}\u{301}" 
print(c)
var str = "a"
str.append(c)
print(str)
print(str.count)
str += "123\(c)" 
print("\u{236B}\(2 > 1 ? 22222 : 11111)",str,c,"1233",(1+100))
c = "e\u{301}"
print(c)
var ch: Character = "\u{2655}\u{20e3}\u{301}\u{20dd}"
print(ch)
str += "\(ch)\(c)"
str += "0hgvjhkjhbnjloo"
str += "\(str.append("\u{301}\u{20dd}"))\(123456789)"

print(str)
print("str".count,str.count,NSString(string: str).length)
print(("e\u{301}\u{20dd}\u{301}" as NSString).length)
print(NSString(string: str).length)
//print((string as NSString).length)
//print(string.count)
//print(NSString(string:string).length)