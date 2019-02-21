import Foundation
struct Student{
    init(firstName: String, lastName: String){
        self.firstName = firstName
        self.lastName = lastName
        self.data = DataBirth()
    }
    init(firstName: String, lastName: String, day: Int, mount: Int, year: Int){
        self.firstName = firstName
        self.lastName = lastName
        self.data = DataBirth(day: day, mount: mount, year: year)
    }
    
    var firstName: String{
        willSet(newFirstName) {
        print("будет новое \(newFirstName) старое \(firstName) ")
        }
        didSet(oldFirstName) {
        firstName = firstName.capitalized
        }
    }
    var lastName: String {
        didSet{
            lastName = lastName.capitalized
        }
    }
    var fullName: String {
        get{
          let value = firstName + " " + lastName
          return value 
        }
        set(newValue){
            print("work setter newvalue=", newValue)
            let words: [String] = newValue.components(separatedBy: " ")
            if words.count > 0{
                   firstName = words[0]
            }
            if words.count > 1{
                   lastName = words[1]
            } 
            if words.count == 0 || words.count > 2{
                print("inter dont correct")
            }
        }
    }
/////////////////////////////////////////////////////    
    struct DataBirth{
        
        init(){
            self.day = 0
            self.mount = 0
            self.year = 0
        }
        init(day: Int, mount: Int, year: Int){
            self.day = day
            self.mount = mount
            self.year = year
        }
        
        var day: Int{
            didSet{
                if day > 31{
                    print("not sach day")
                    day = 0
                }
            }
            
        }
        
        var mount: Int{
            didSet{
                if mount > 12{
                    print("not sach mount")
                    mount = 0
                }
            }
            
        }
        
        var year: Int{
            didSet{
                if year > 2018 || year < 1900{
                    print("year birth wrong")
                    year = 0
                }
            }
            
        }
        
        var fullDataBirth: String{
            get{
                if String(day).count < 2{
                    return  "0\(day).\(mount).\(year)"
                }
                else {
                    return "\(day).\(mount).\(year)"
                }
            }
            set(newValue){
                let separData = newValue.components(separatedBy: ".")
                day = Int(separData[0])!
                mount = Int(separData[1])!
                year = Int(separData[2])!
            }
        }
        
        var age: Int{
            get{
               let dateFormatter = DateFormatter()
               dateFormatter.dateFormat = "yyyy-MM-dd"
               print("today: ", dateFormatter.string(from: Date()))
               let currentDataString: String = dateFormatter.string(from: Date())
               let wordsCurrentData: [String] = currentDataString.components(separatedBy: "-")
               
               let currentDay = Int(wordsCurrentData[2])!
               let currentMonth = Int(wordsCurrentData[1])!
               let currentYear = Int(wordsCurrentData[0])!
               
               let days = [31,28,31,30,31,30,31,31,30,31,30,31]
               
               let countDays: Int
               let countMonths: Int
               let countYears: Int
               
    mainLoop:  if currentDay >= day{
                    countDays =  currentDay - day
                    if currentMonth >= mount{
                        countMonths = currentMonth - mount
                        countYears = currentYear - year
                        break mainLoop
                    }
                    else{
                        countMonths = 12 - mount + currentMonth
                        countYears = currentYear - year - 1
                        break mainLoop
                    }
               }
               else {
                    countDays = days[currentMonth - 1] - day + currentDay
                    if currentMonth > mount{
                        countMonths = currentMonth - mount - 1
                        countYears = currentYear - year
                        break mainLoop
                    }
                    else{
                        countMonths = 12 - mount + currentMonth - 1
                        countYears = currentYear - year - 1 
                    }
                    }

               print("Count days Birth:  \(countDays)    Count Months Birth:  \(countMonths)    Count Years Birth:  \(countYears)")
               return countYears
            }
        } 
        
    }
    var data: DataBirth
    
    var yearsStud: Int{
        get{
            return data.age - 6
        }
    }
    
}
var stBirth = Student.DataBirth(day: 1 , mount: 10 , year: 2000 )

var student  = Student(firstName: "Ivan", lastName: "Ivanov" )

var student1 = Student(firstName: "Anatoly", lastName: "Ryavkin", day: 1 , mount: 10 , year: 2000 )

print(student, student1, stBirth)


student1.data.fullDataBirth = "25.05.1978"
student.data.fullDataBirth = "21.09.1975"
student.fullName = "еКатерина Павлова"

func print1(_ stud: Student){
    print()
    print("Name: ", stud.firstName)
    print("Surname: ", stud.lastName)
    print("Full name: ", stud.fullName)
    print("Full date birth: ", stud.data.fullDataBirth)
    print("Age: ", stud.data.age)
    print("Age study: ",  stud.yearsStud)
    print()
}
print1(student)
print1(student1)






//student.DataBirth.fullDataBirth = "01.10.2000"
/*
student.firstName
student.firstName = "Alex"
print(student)
print(student.fullName)
student.fullName = "anatoliy ryavkin"
print(student.fullName)


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

Student.DataBirth.day = 0 
        self.DataBirth.mount = 0 
        self.DataBirth.year = 0 
*/