import Foundation
/*let dateFormatter = DateFormatter()
dateFormatter.dateStyle = .medium
//dateFormatter.timeStyle = .none
/////////////////////////////////////////////////////////////////// 
let date =  Date(timeIntervalSinceReferenceDate: 410220000)
///////////////////////////////////////////////////////////////////
let date3 = Date(timeIntervalSinceNow: -45268423)
//////////////////////////////////////////////////////////////////
// US English Locale (en_US)
//dateFormatter.locale = Locale(identifier: "en_US")
let dateN = Date()

print(dateFormatter.string(from: date), "   ||   " , dateFormatter.string(from: dateN), "   ||   " , dateFormatter.string(from: date3)) 

let dataIntervalSec = DateInterval(start: date, end: dateN)

print(dataIntervalSec.duration)

let date2 = Date(timeIntervalSinceReferenceDate: dataIntervalSec.duration) 

print(dateFormatter.string(from: date2))

print("date.timeIntervalSinceNow=", date.timeIntervalSinceNow  )

// вычисляем дату по секунам от текущей:

let date10 = Date(timeIntervalSinceNow: -1244160000)

print("date10=", date10)

//разница между датами  в секундах:
        
let dateIntSec = dateN.timeIntervalSince(date)

print(dateIntSec)

print(dateFormatter.string(from: Date(timeIntervalSinceReferenceDate: dateIntSec)))

let dateForm = Date(timeIntervalSinceReferenceDate: dateIntSec)

print(dateForm)

//print( dateFormatter.string(from: Date(timeIntervalSinseReferenceDate: dateN.timeIntervalSince(date))))
*/
let dateFormatter = DateFormatter()
let date = Date(timeIntervalSinceReferenceDate: 410220000)
 
// US English Locale (en_US)
dateFormatter.locale = Locale(identifier: "en_US")
dateFormatter.setLocalizedDateFormatFromTemplate("dMMYYYY") // set template after setting locale
print(dateFormatter.string(from: date)) // December 31
var a:String = dateFormatter.string(from: date)



let RFC3339DateFormatter = DateFormatter()
//RFC3339DateFormatter.locale = Locale(identifier: "en_US_POSIX")
RFC3339DateFormatter.dateFormat = "yyyy-MM-dd" //'T'HH:mm:ssZZZZZ"
//RFC3339DateFormatter.timeZone = TimeZone(secondsFromGMT: 0)
 
/* 39 minutes and 57 seconds after the 16th hour of December 19th, 1996 with an offset of -08:00 from UTC (Pacific Standard Time) */
let string = "1954-01-20" //T16:39:57-08:00"

let date1 = RFC3339DateFormatter.date(from: string)!
print("!!!!!!!!!!", date1)
print("data1", dateFormatter.string(from: date1))

let dateIntSec = date1.timeIntervalSince(Date())

print("tecuh dateIntSec=", dateIntSec)

let dateForm = Date(timeIntervalSinceReferenceDate: dateIntSec)

print(" 2001 dateForm=", dateForm)

let date10 = Date(timeIntervalSinceNow: dateIntSec)

print("ot tecuh date10=", date10)

var stringDate2001 = dateFormatter.string(from: dateForm)
print("stringDate2001 = ", stringDate2001)

let words: [String] = stringDate2001.components(separatedBy: "/")
print(words[1])
let dayB = 30 - Int(words[1])! 
let monthB = 12 - Int(words[0])!
let yearB = 2000 - Int(words[2])!
print("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||")
//print(date1)
print("для дdateIntSecаты рождения \(dateFormatter.string(from: date1))  полный возраст: лет: \(yearB) , месяцев: \(monthB) , дней: \(dayB) ")
var nDay = dateIntSec / 60 / 60 / 24
var nYear = nDay / 365.25
print("nDay= \( -Int(nDay)) nYear= \(-Int(nYear))")