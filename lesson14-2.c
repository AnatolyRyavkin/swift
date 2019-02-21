import Foundation
struct Student{
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
          let value = " fullName: " + firstName + " " + lastName
          print("work getter")
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
    var birthData: DataBirth
/////////////////////////////////////////////////////    
    struct DataBirth{
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
                if String(day).count < 2 && mount < 10{print("11111111111111")
                    return  "0\(day).\("0")\(mount).\(year)"
                }
                else if String(day).count < 2 && mount >= 10{print("2222222222222")
                    return  "0\(day).\(mount).\(year)"
                }
                else if String(day).count == 2 && mount < 10{print("2222222222222")
                    return  "\(day).0\(mount).\(year)"
                }    
                else {print("11111333333333333333331")
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
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
var student = Student(firstName: "Ivan", lastName: "Ivanov", birthData: Student.DataBirth(day: 1 , mount: 10 , year: 2000))

print(student.fullName, " :   ", student.birthData.fullDataBirth )
student.birthData.fullDataBirth = "10.10.2001"
print(student.fullName, " :   ", student.birthData.fullDataBirth )
student.firstName = "aLlex"
print(student.fullName, " :   ", student.birthData.fullDataBirth )
student.fullName = "anatoliy ryavkin"
print(student.fullName, " :   ", student.birthData.fullDataBirth )
student.birthData.fullDataBirth = "05.05.1978"
print(student.fullName, " :   ", student.birthData.fullDataBirth )

