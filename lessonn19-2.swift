class Human{
    var firstName: String
    var lastName: String 
    init(firstName: String, lastName: String){
        self.firstName = firstName
        self.lastName = lastName
        print("basa")
        print()
    }
    convenience init(firstName: String){
        self.init(firstName: firstName, lastName: "")
        self.lastName = firstName + "ing"
        print("ing")
        print()
    }
    convenience init(){
        self.init(firstName: "")
        lastName = firstName + "oinoing"
        print("oinoing")
        firstName = lastName + "jakovih"
        print("jakovih")
        print()
    }
    deinit{
        print("Delete1")
    }
}
//let human1 = Human(firstName: "Alex", lastName:"Bor")
//let human2 = Human(firstName: "Jorg")
//let human3 = Human()

class Man: Human{
    var age: Int = 0
    var wingth: Int = 0
    override init( firstName: String,  lastName: String){
        self.age = 0
        self.wingth = 0
        super.init(firstName: firstName, lastName: lastName)
        print("basa")
        print()
        
    }
    
    
    init(age: Int, wingth: Int){
        self.age = age
        self.wingth = wingth
        super.init(firstName: "Bob", lastName: "job")
    }
    convenience init(){
        self.init(age: 20, wingth: 90)
        firstName = "Andre"
        print("andre")
    }
    deinit{
        print("Delete2")
    }
    
}
//let man1 = Man()
//let man3 = Man(firstName: "kkk", lastName: "jjj")
//let man2 = Man(age: 10, wingth: 100)
//print(man1.firstName, man1.lastName, man1.age, man1.wingth)
//print(man2.firstName, man2.lastName, man2.age, man2.wingth)
//print(man3.firstName, man3.lastName, man3.age, man3.wingth)
//print("/////////////")

/*class Boy: Man{
     var lit : Int = 0
     convenience init(lit: Int){
         self.init(age: 5, wingth: 50)//(firstName:"Bac", lastname: "Oger")
         self.lit = lit
     }
    // override  init(){
    //     self.init(age: 5, wingth: 50)
    // }
    
}*/

/*let boy1 = Boy(lit: 25)
let boy2 = Boy()
let boy3 = Boy(firstName: "kkkdhdhdh", lastName: "jjhrehhj")
print(boy1.firstName, boy1.lastName, boy1.age, boy1.wingth, boy1.lit)
print(boy2.firstName, boy2.lastName, boy2.age, boy2.wingth, boy2.lit)
print(boy3.firstName, boy3.lastName, boy3.age, boy3.wingth, boy3.lit)
*/

class Boy1: Man{
     var lit : Int = 0
     /*override convenience init(firstName: String, lastName: String){
        self.init(firstName: "An", lastName: "ryv")
        self.age = 1000
        self.wingth = 1000
        self.firstName = firstName
        self.lastName = lastName
        print("basa")
        print()
    }*/
    override convenience init(age: Int, wingth: Int){
       //  self.init(age: 100, wingth: 100)
        //self.age = age
        //self.wingth = wingth
        self.init(firstName: "Bob", lastName: "job")
        self.age = age
        self.wingth = wingth
        
    }
    
     convenience init(lit: Int){
         self.init(age: 5, wingth: 50)//(firstName:"Bac", lastname: "Oger")
         self.lit = lit
     }
       convenience init(){
        self.init(age: 100, wingth: 100)
        firstName = "Yndre"
        print("andre")
    }
    deinit{
        print("Delete3")
    }
}
//let boy1 = Boy1(age: 1000, wingth: 100)
var boy1 = Boy1()
//let boy1 = Boy1(firstName: "kkkdhdhdh", lastName: "jjhrehhj")
print(boy1.firstName, boy1.lastName, boy1.age, boy1.wingth, boy1.lit)
//print("Jjjjjj")
boy1 = Boy1(firstName: "kkkdhdhdh", lastName: "jjhrehhj") 
