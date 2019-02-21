struct Student{
    var surName: String
    var name: String
    var yearBirth: Int
    var averageScore: Float
    
    //init() {
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

var studFiltAverageScore = students.sorted( by : {Int($0.averageScore * 10 ) > Int($1.averageScore * 10)})   
printLog(studFiltAverageScore)
print()

var studFiltName = students.sorted(by : {
    if $0.surName == $1.surName && $0.name < $1.name{return true}
    if $0.surName < $1.surName{return true}
    else{return false}
})
printLog(studFiltName)

var arrStudentsDef = students
printLog(arrStudentsDef)

