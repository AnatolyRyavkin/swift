let max = 20
enum En: Int{
     
     static var a: Int{
        get{
            return max
        }
    }
    static var b = 10
    case A = 1
    case B = 2
}


struct Cat{
    lazy var l = 1
    static var maxAge = max
    static var totalCats = 0
    static var a: Int{
        get{
            print("a=", 10)
            return 10
        }
    }
    var name: String
    var age: Int{
        didSet{
            if age > Cat.maxAge{
                print(Cat.maxAge)
                age = oldValue
            }
        }
    }
     init(a: Int , b: String){
        //maxAge = 40
        self.age = a
        self.name = b
        Cat.totalCats += 1
    }
}

//var cat1 = Cat(maxAge: 30, name: "Masya", age: 10)
var cat = Cat(a: 30, b: "Masya")
print(cat)
print(cat.l)
print(cat)
var cat1 = Cat(a: 30, b: "Masya")
var cat2 = Cat(a: 30, b: "Masya")
print(Cat.a)
cat.age = 25
print(cat, Cat.totalCats)
Cat.maxAge = 50
var en = En.A
print("En.a=", En.b)