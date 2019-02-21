import Foundation
let A = 10 
let B = 10
let CountWoof = 3
let CountHare = 2

class Figure{
    var x: Int
    var y: Int
    var name: String = ""
    
    init(x: Int, y: Int){
                self.x = x < 10 ? x : 10
                self.y = y < 10 ? y : 10
    }
    
    init(){
                self.x =  Int( arc4random_uniform(UInt32(A-1))+1)
                self.y =  Int( arc4random_uniform(UInt32(B-1))+1)
    }
    
    subscript() -> ((Int,Int)){
        get{
            return (x,y)
        }
        set{
            (self.x,self.y) = (newValue)
        }
    }    
}

class Hare: Figure{
           override init(){
                super.init()
                self.name = "🐇"
           }
            override init(x: Int, y: Int){
                super.init(x: x, y: y)
                self.name = "🐇"
           }
              override subscript() -> ((Int,Int)){
        get{
            return (x,y)
        }
        set{
            (self.x,self.y) = (newValue)
        }
    }    
}

class Woof: Figure{
           override init(){
                super.init()
                self.name = "🐺"
           }
           override init(x: Int, y: Int){
                super.init(x: x, y: y)
                self.name = "🐺"
           }
              override subscript() -> ((Int,Int)){
        get{
            return (x,y)
        }
        set{
            (self.x,self.y) = (newValue)
        }
    }    
}

var hares: [Hare] = [] //Array(repeating: Hare() , count: CountHare) не катит
var woofs: [Woof] = []//Array(repeating: Woof() , count: CountWoof)
let hare1 = Hare(x: 1, y: 3)
let hare2 = Hare(x: 6, y: 3)
let woof1 = Woof(x: 3, y: 3)
let woof2 = Woof(x: 8, y: 5)
let woof3 = Woof(x: 4, y: 6)

hares = [hare1,hare2]

woofs = [woof1,woof2,woof3]


for i in 0...CountHare - 1{
    //hares.append(Hare()) 
    print(hares[i].x,hares[i].y,hares[i].name)
    }
for i in 0...CountWoof - 1{
    //woofs.append(Woof())
    print(woofs[i].x,woofs[i].y,woofs[i].name)
    }  
     
print("////////////////////////")

func out(){
        print()
        for j in (1...B).reversed(){
             for i in  1...A{
                var k = 0
                for n in 0...CountHare - 1{
                    if hares[n].x == i && hares[n].y == j{
                        k += 1
                        print(terminator: "🐇")
                        //continue mainLoop
                    }
                }
                for n in 0...CountWoof - 1{
                    if woofs[n].x == i && woofs[n].y == j{
                        k += 1
                        print(terminator: "🐺")
                        //continue mainLoop
                    }
                }
                if k == 0{
                     print(terminator: "💹")
                }
            }
            print()
        }    
}

class Field{
    
    var obs: [String: Figure] = [:]

    
    init(){
     for i in 0...CountHare - 1{
        self.obs["\(String(hares[i].x)),\(String(hares[i].y))"] = hares[i]
        }
        for i in 0...CountWoof - 1{
        self.obs["\(String(woofs[i].x)),\(String(woofs[i].y))"] = woofs[i]
        }
        //print(obs["8,5"])
    }
     subscript(_ x: Int, _ y: Int) -> (Figure?){
        get{
            return self.obs["\(String(x)),\(String(y))"]
        }
        set{
            self.obs["\(String(x)),\(String(y))"] = newValue
            
        }
    }
    func outField(){
        print()
        for j in (1...B).reversed(){
             for i in  1...A{
                if let type = self.obs[String("\(i),\(j)")]{
                        print(terminator: "\(type.name)")
                }
                else{
                    print(terminator: "💹")
                }
            }  
            print()
        }        
    }
    
    
} 

enum Vector: String{
        case Rigth = "R"
        case Left = "L"
        case Up = "U"
        case Down = "D"
    }
    
var a = Field()
a.outField()
out()
print(a[4,6]!.name)
print("////////////////////////////////////////////////")
var k = 0
   func go(_ figure: Figure?,  _ goto: String){
        switch goto{
        case Vector.Rigth.rawValue :
             if (figure!.x + 1) > A  {
                print("некуда двигаться")
                    break
             }
             if let fig = a[figure!.x + 1, figure!.y]{
                    if fig is Woof{
                        print("Толкаю волка")
                    }
                    if fig is Hare{
                        print("Толкаю зайца")
                    }
                    k += 1
                    go( a[figure!.x + 1, figure!.y] , "R" )
             }
             else{
                 a[figure!.x + 1, figure!.y] = a[figure!.x , figure!.y]
                 a[figure!.x , figure!.y] = nil
                 figure!.x = figure!.x + 1
                 if k != 0{
                     k -= 1
                     go( a[figure!.x - 2, figure!.y] , "R" )
                 }
                 
                 
             }
             
             
             //self.xPoint += 1
             default: break
             
        }
}             
go(hare1, "R")
a.outField()
print(hare1[])
go(hare1, "R")
a.outField()
print(hare1[])
go(hare1, "R")
a.outField()
print(hare1[])
go(hare1, "R")
a.outField()
go(hare1, "R")
a.outField()
go(hare1, "R")
a.outField()
go(hare1, "R")
a.outField()
go(hare1, "R")
a.outField()
go(hare1, "R")
a.outField()
out()
print(hare1[])

//hare1[] = (6,2) не работает а должен
