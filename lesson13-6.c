class Student{
    var surName: String
    var name: String
    var yearBirth: Int
    var averageScore: Float
    init(surName: String, name: String, yearBirth: Int, averageScore: Float){
        self.surName = surName
        self.name = name
        self.yearBirth = yearBirth
        self.averageScore = averageScore
    }
}

var st1 = Student(surName: "Ivanov", name: "Ivan", yearBirth: 1978, averageScore: 4.5)
var st2 = Student(surName: "Ivanov", name: "Alex", yearBirth: 1979, averageScore: 4.0)
var st3 = Student(surName: "Petrov", name: "Vasiliy", yearBirth: 1980, averageScore: 4.8)
var st4 = Student(surName: "Vasechkin", name: "Sergey", yearBirth: 1978, averageScore: 4.3)
var st5 = Student(surName: "Aksenov", name: "Oleg", yearBirth: 1977, averageScore: 4.1)
var students: [Student] = [st1,st3,st2,st4,st5]

func printLog(_ arr: [Student]) -> () {
    for (index, i) in arr.enumerated(){
        print("\(index+1) | \(i.surName)  \(i.name)  \(i.yearBirth)  \(i.averageScore) ")
    }
}
printLog(students)
print()

var arrStudentsDef = students
printLog(arrStudentsDef)

arrStudentsDef[0].surName = "Udin" 
arrStudentsDef[0].name = "Roma"
arrStudentsDef[0].yearBirth = 1976
arrStudentsDef[0].averageScore = 4.2

arrStudentsDef[4].surName = "Pavlova" 
arrStudentsDef[4].name = "Ekaterina"
arrStudentsDef[4].yearBirth = 1975
arrStudentsDef[4].averageScore = 5.0

//////////Важно! Ссылка только новом массиве полностью перезаписывается:

arrStudentsDef[3] = Student(surName: "Ryavkina", name: "Julia", yearBirth: 2012, averageScore: 5.1)

print("Soursed")
printLog(students)

print("Changed")
printLog(arrStudentsDef)
