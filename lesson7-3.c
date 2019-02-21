let str: String = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
var strMas2 = [Character](repeating: "2" , count: 26)
var n = 0
for i in str
{ strMas2[25-n] = i
 n += 1}
print("mas2",strMas2)
