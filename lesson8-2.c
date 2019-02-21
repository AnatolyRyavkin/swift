let calendar = ["jan":31,"feb":28,"mar":31,"may":31,"jun":30,"jul":31,"aug":31,"sep":30,"oct":31,"nov":30,"dec":31]
for (i,j) in calendar
{
print("month:  \(i)         countDays:  \(j)")
}
var mas: [Int] = []
for key in calendar.keys
{print("key: \(key)   value: \(calendar[key]!)")
 mas.append(calendar[key]!)   
}
print("mas=\(mas)\n mas[1]=\(mas[1])")
