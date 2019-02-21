class Human{
    var age: Int = 10
    init(_ age: Int){
        print("age=",self.age)
        self.age = age
        func aa(){
            print("aaaaaaa",self.age)
            print()
            
        }
        aa()
    }//
    init(_ age: Int, _ age1: Int ){
        self.age = age + age1
        print("bbbbbbbbbbbb")
        print()
    }
    convenience init(a: Int){
        self.init(1)
        age = a
        print("!!!!!!!!!!", self.age)
        func aa(){
            print("ggggggggg")
            print()
            
        }
        aa()
    }
}


/*var wiman = Human(10,25)
var faser = Human(20)
var man = Human(a: 100)
print( wiman.age,faser.age,man.age)
*/
class Child: Human{
     /* init(age: Int){
          super.init(1)
          self.age = age + 1
          print("super:",self.age)
      }*/
        convenience override init(_ age: Int, _ age1: Int ){
        //self.init(age: 1)
        self.age = age + age1
        print("bbbbbbbbbbbb")
        print()
    }
}
//var frend = Child(age: 11)
var child = Child(10,25)
var gerl = Child(a: 100)
var boy = Child(20)
print(child.age, gerl.age,boy.age)
//print(frend.age)
print(child.age)