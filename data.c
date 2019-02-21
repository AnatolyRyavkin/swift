import Foundation
//func dateComponents(_ components: Set<Calendar.Component>, from start: Date, to end: Date) -> DateComponents

let date = Date()

let calendar = Calendar.current

let year = calendar.component(.year, from: date)
let month = calendar.component(.month, from: date)
let day = calendar.component(.day, from: date)
print(date,"   |||||||||| ", calendar,"  ||||||||||  ")
print("year= \(year) month= \(month) day= \(day)")

//00:00:00 UTC on 1 January 1970 by a given number of seconds.
//var n: Double = 5 * 2592000 + 25 * 86400
//var dataSec1970: Double = (1971 - 1970) * 31622400 + n
//print(dataSec1970)

//let dataBirth = Date( timeIntervalSince1970: dataSec1970 )
//print(dataBirth)
//var vosr = dateComponents(from start: dataBirth , to end: date)


var dateB = DateComponents(year: 1978, month: 5, day: 25)
//var dataData: Date? = calendar.date(components: DateComponents(year: 1978, month: 5, day: 25))




   let monthsToAdd = 2
    let daysToAdd = 1
    let yearsToAdd = 1
    let currentDate = Date()

    var dateComponent = DateComponents()

    dateComponent.month = monthsToAdd
    dateComponent.day = daysToAdd
    dateComponent.year = yearsToAdd

    let futureDate = Calendar.current.date(byAdding: dateComponent, to: currentDate)

    print(currentDate)
    print(futureDate!)






/*
let str: String = "\(dateB.year!.description)"
print("dateB=", dateB)
print("  str=", str)
//var dateStr = description: dateB 
print("dateB.year= \(dateB.year!) dataB.month= \(dateB.month!) dataB.day= \(dateB.day!) " )
//var dateT = DateComponents(calendar: Date())
//11 10 2018 - 20 9 2018
*/
