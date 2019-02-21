import Foundation

    let monthsToAdd = 5
    let daysToAdd = 25
    let yearsToAdd = 1978
    let currentDate = Date()

    var dateComponent = DateComponents()

    dateComponent.month = monthsToAdd
    dateComponent.day = daysToAdd
    dateComponent.year = yearsToAdd

    let futureDate = Calendar.current.date(byAdding: dateComponent, to: Date())
    print(dateComponent)
    print(currentDate)
    print(futureDate!)
    
    let date1 = Date()