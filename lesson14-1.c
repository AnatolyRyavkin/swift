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
            print(words)
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
}

var student = Student(firstName: "Ivan", lastName: "Ivanov")
print(student.firstName)
student.firstName = "Alex"
print(student)
print(student.fullName)
student.fullName = "anatoliy ryavkin"
print(student.fullName)


