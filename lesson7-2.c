let str1 = "a12" , str2 = "20" , str3 = "k10" , str4 = "100" , str5 = "1000"
//let massOpIn : Array <Int?> = []
var massOpIn = [Int?]() 
massOpIn = [Int(str1),Int(str2),Int(str3),Int(str4),Int(str5)]
print(massOpIn)
var sum = 0

for i in massOpIn
{if let i1 = i
{sum += i1}}

print("sum= \(sum)")
sum = 0

for i in massOpIn
{if i != nil
{sum += i!}}

print("sum= \(sum)")
sum = 0

for i in massOpIn
//(a ?? b)
{sum += (i ?? 0)}
print("sum=",sum)
///////////////////////////////////////
for i in massOpIn
{print(i ?? nil , terminator:" ")
if i != massOpIn.last { print(terminator:"+ ")}   
}
print("=",sum)
///////////////разница
for i in massOpIn
{print(i ?? "nil" , terminator:" ")
if i != massOpIn.last { print(terminator:"+ ")}   
}
print("=",sum)


