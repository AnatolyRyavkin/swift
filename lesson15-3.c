var Count = 0
class Human{
    var name: String{
        didSet{
            if name.count > Human.maxName{
                name = oldValue
                print("name too long")
            }
        }
    }
    var surName: String{
        didSet{
            if surName.count > Human.maxSurName{
                surName = oldValue
                print("surName too long")
            }
        }
    }
    var growth: Int{ 
        didSet{
            if growth > Human.maxGrowth || growth < Human.minGrowth{
                growth = oldValue
                print("the value growth is invalid")
            }
        }     
    }    
    var weigth: Double{
        didSet{
            if weigth > Human.maxWeigth || weigth < Human.minWeigth{
                weigth = oldValue
                print("the value weigth is invalid")
            }
        }
    }
    
    class var maxName: Int{
        return 5
    }
    class var maxSurName: Int{
        return 10
    }
    class var maxGrowth: Int{
        return 220
    }
    static var minGrowth: Int{
        return 150
    }
    static let maxWeigth = 200.0
    static var minWeigth = 50.0
    static var count = 0
    lazy var lazyng = self.name
    
    init(name: String, surName: String, growth: Int, weigth: Double ){
        Count += 1
        Human.count += 1
        
        if name.count > Human.maxName{
                self.name = ""
                print("name too long")
        }
        else{
            self.name = name
        }
        if surName.count > Human.maxSurName{
                self.surName = ""
                print("surName too long")
        }
        else{
            self.surName = surName
        }
        if growth > Human.maxGrowth || growth < Human.minGrowth{
                self.growth = 0
                print("the value growth is invalid")
        }
        else{
            self.growth = growth
        }
        if weigth > Human.maxWeigth || weigth < Human.minWeigth{
            self.weigth = 0
            print("the value weigth is invalid")
        }
        else{
            self.weigth = weigth
        }
    }
    
}

print(Human.maxWeigth)
var anat = Human(name: "Anatoly", surName: "Ryavkin", growth: 1820, weigth: 85 )

func pr(_ a: Human){
print("name: \(a.name)  surname: \(a.surName) growth: \(a.growth)  weigth: \(a.weigth)") 
} 

pr(anat)

anat.growth = 182
anat.name = "Anat"

pr(anat)

var ekat = Human(name: "Ekat", surName: "Pavlova", growth: 175, weigth: 80 )

pr(ekat)
print("Human.count=\(Human.count)   Count=\(Count)")
print(ekat.lazyng)
ekat.lazyng = "kjdsj"
print(ekat.lazyng)
