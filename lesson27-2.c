import Foundation

//let date = Date()
//let calendar = Calendar.current
//let string = "1954-01-20" 
//let date1 = DateFormatter.date(from: string)!
//print("!!!!!!!!!!", date1)
//print("data1", dateFormatter.string(from: date1))
//let dateIntSec = date1.timeIntervalSince(Date())     

let dateFormatter = DateFormatter()
dateFormatter.locale = Locale(identifier: "en_US_POSIX")// можно не ставить
dateFormatter.dateFormat = "yyyy-MM-dd"
dateFormatter.timeZone = TimeZone(secondsFromGMT: 0)// можно не ставить


protocol Food{
    var name: String{
        get
    }
    func taste()
}
protocol Storable{
    var name: String{
        get
    }
    var expired: Bool{
        get
    }
    var daysToExpire: Date{
        get 
    }
}
class Apple: Food{
    var name = "Apple" 
    func taste(){
        print("!")
    }
}
class Bread: Food{
    var name: String{
            return "Bread"
    }        
    func taste(){
        print("!!")
    }
}
class Milk: Food{
    var name = "Milk"
    func taste(){
        print("!!!")
    }
}
class Fish: Storable,Food{
    var name1: String? = nil
    var exp: Bool = true
    var daysToExp: Date? = nil
    var name: String{
        return  name1 ?? "dont name" 
    }
    var expired: Bool{
        return exp
    }
    var daysToExpire: Date{
        if daysToExp != nil{                     
            return daysToExp!
        }
        else{
            print("format dont format date")
            return dateFormatter.date(from: "2001.01.01")!
        }
    }    
    convenience init(_ name: String,_ exp: Bool,_ daysToExp: String){
        self.init()
        self.exp = exp
        self.name1 = name
        if dateFormatter.date(from: daysToExp) != nil{
            self.daysToExp = dateFormatter.date(from: daysToExp)
        }
        else{
            print("format date dont format at: \(name), will by date 2000.01.01")
            self.daysToExp = dateFormatter.date(from: "2000.01.01")
        }
    }
    deinit{print("removed --  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")}
    func taste(){
        if name != "dont name"{
           print("!!!!!!")
        }   
    }
}
class Drug: Storable{
    var name1: String? = nil
    var exp: Bool = true
    var daysToExp: Date? = nil
    var name: String{
        return  name1 ?? "dont name" 
    }
    var expired: Bool{
        return exp
    }
    var daysToExpire: Date{
        if daysToExp != nil{                     
            return daysToExp!
        }
        else{
            print("format dont format date")
            return dateFormatter.date(from: "2000.01.01")!
        }
    }    
    convenience init(_ name: String,_ exp: Bool,_ daysToExp: String){
        self.init()
        self.exp = exp
        self.name1 = name
        if dateFormatter.date(from: daysToExp) != nil{
            self.daysToExp = dateFormatter.date(from: daysToExp)
        }
        else{
            print("format date dont format at: \(name), will by date 2000.01.01")
            self.daysToExp = dateFormatter.date(from: "2000.01.01")
        }
    }
}

var drug = Drug("Acpirin",true,"1978.05.25")
var drug1 = Drug("Analgin",true,"1988.05.25")
var locos = Fish("locos",true,"2015.10.10")
var karp = Fish("Karp",true,"2018.01.05")
var karp1 = Fish("Karp1",true,"2017.51501.05")
var karp2 = Fish("AKarp2",false,"2018.01.05")
var karp3 = Fish("Karp3",true,"2016.01.03")
var bread = Bread()
var milk = Milk()
var apple = Apple()
var arrFood: [AnyObject] = [bread,apple,milk,locos,karp,karp1,karp2,karp3,drug,drug1]

print("arr++++++++++++++++++++++++++++++++++")
for i in arrFood{
    if let i1 = i as? Food{
          print(terminator: "  \(i1.name)  ")
    }
    if let i1 = i as? Storable{
          if (i is Food) == false{
              print(terminator: "  \(i1.name)  ")
          }
          print(terminator: "  \(i1.expired)  ")
    }
    print()
    //i.taste()
}

print("arrSort++++++++++++++++++++++++++++++")

func sort(_ arr: inout [AnyObject]){
     
     arr.sort(by: {a, b in
     if let a1 = a as? Food{
            if let b1 = b as? Food{
                return a1.name < b1.name
            }
     }
     if let a1 = a as? Food{
            if let b1 = b as? Storable{
                return a1.name < b1.name
            }
     }
     if let a1 = a as? Storable{
            if let b1 = b as? Food{
                return a1.name < b1.name
            }
     }
     if let a1 = a as? Storable{
            if let b1 = b as? Storable{
                return a1.name < b1.name
            }
     }
     return true
     })
}
sort(&arrFood)

for i in arrFood{
    if let i1 = i as? Food{
          print(terminator: "  \(i1.name)  ")
    }
    if let i1 = i as? Storable{
          if (i is Food) == false{
              print(terminator: "  \(i1.name)  ")
          }
          print(terminator: "  \(i1.expired)  ")
    }
    print()
    //i.taste()
}

print("++++++++++++++++++++++++++++++")

var arrRef: [Storable] = []

func chec(_ arr: inout [AnyObject]){
    var arrTemp: [AnyObject] = []
    for i in arr{
        if let i1 = i as? Storable & Food{
            if i1.expired == true{
               arrRef += [i1]
            } 
        }
        else{
            arrTemp += [i]
        }
    }
    arr = arrTemp
}

chec(&arrFood)
print("arrFood///////////////////////")
for i in arrFood{
    if let i1 = i as? Food{
          print(terminator: "  \(i1.name)  ")
    }
    if let i1 = i as? Storable{
          if (i is Food) == false{
              print(terminator: "  \(i1.name)  ")
          }
          print(terminator: "  \(i1.expired)  ")
    }
    print()
    //i.taste()
}

print("arrRef///////////////////////")
for i in arrRef{
          print("  \(i.name) -- \(i.expired) -- \(dateFormatter.string(from: i.daysToExpire))  ")
}

func sortAir(_ arr: inout [Storable]){
     arr.sort(by: {a,b in
     if a.daysToExpire == b.daysToExpire{
          return a.name < b.name
     }
     else{
         return a.daysToExpire.timeIntervalSince(Date())  <  b.daysToExpire.timeIntervalSince(Date())
     }
     })
} 
sortAir(&arrRef)
print("sortArrRef++++++++++++++++++++++++++++++++++++")
for i in arrRef{
          print("  \(i.name) -- \(i.expired) -- \(dateFormatter.string(from: i.daysToExpire))  ")
}
var arrRef1: [Food & Storable] = [karp,karp1,karp2,karp3]








