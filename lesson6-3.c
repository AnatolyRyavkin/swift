
// вытаскивание символа из строки 3 способа

let str: String = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
let char: Character = "D"
var i = 0
for st in str
{
    i += 1
    if char == st
    {print("Index char =", i)}
} 

// способ 2

for ii in 0...25
     {
     // очень важно
     if str[str.index(str.startIndex, offsetBy: ii)] == char
                {
                print("Index char2 =", ii+1)
                }
     }
////////////////////////////// способ 3
var iii = 0
for index in str.indices
{   iii += 1
    print(index)
    if str[index] == char
      {print("Index char3=", iii)}
}





     
/////работа с символами строки     
let strC = "abcdefg"
print(strC[strC.startIndex])

print(strC.index(before: strC.endIndex)) 
print(strC.index(after: strC.startIndex))
let a = strC.index(after: strC.startIndex)
print(strC[a])
      
print(strC[strC.index(before: strC.endIndex)])


print("3 char=", strC[strC.index(strC.startIndex, offsetBy: 3)])

 let greeting = "Guten Tag!"
 greeting[greeting.startIndex]
 // G
 print(greeting[greeting.index(before: greeting.endIndex)])
 // !
 greeting[greeting.index(after: greeting.startIndex)]
 // u
 let index = greeting.index(greeting.startIndex, offsetBy: 7)
 greeting[index]
 // a
 