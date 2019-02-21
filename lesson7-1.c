var months: Array <String> = []
var days = [Int]()
var monthDay = [(String,Int)]()
months = ["Jan","Feb","Mar","Apr","May","june","july","aug","sept","oct","nov","dec"]
days = [31,28,31,30,31,30,31,31,30,31,30,31]
print(days)
for i in 0...11
{ print("month \(months[i]) countDays \(days[i]) ")
  monthDay  += [(months[i],days[i])]
}
print(monthDay)

for (a,b) in monthDay
  { 
  print("count Days in month ",a,":")
  for i in 1...b
    {
    print("\(i) ",terminator:"")
    }
    print()
    print("____________________________________________________________")
  }
// revers

for (a,b) in monthDay
  { 
  print("count Days in month ",a,":")
  for i in 0...b
    {
    print("\(b-i) ",terminator:"")
    }
    print()
    print("____________________________________________________________")
  }
//////////////////////////////////////////////countDayinNauEar

var day = ("Dec",31)
var countDays = 0
for (a,b) in monthDay
     { 
       if day.0 == a
           {countDays += day.1
            break}
     countDays += b    
     }
print("number of days from the beginning of the year to the day \(day) = " , countDays )     
print()

  