import Foundation
let A = ["A","B","C","D","E","F","G","H","J","K"]
let A1 = ["_","A","B","C","D","E","F","G","H","J","K","_"]
let B: [Int] = [1,2,3,4,5,6,7,8,9,10]
var AB: [String] = []
for i in 0...9{
    for j in 0...9{
    AB.append("\(A[i])\(B[j])")
    }
}
let HL: [Int] = [1,2,3,4]

class Ship{
    var floor: Int{
        return self.l * self.h
    }

    static var numberI: Int = 0
    static var numberC: Int = 0
    var loop: ShipId 
    var x: String  
    var y: Int
    var l: Int
    var h: Int
    var number: Int{
        if loop == Ship.ShipId.I{return Ship.numberI}
        else{return Ship.numberC}
    }
    var countShot: Int
    
    enum ConditionShip{
        case healt
        case inj
        case kill
    } 
    enum ShipId{
        case I
        case Comp
    }
    init(x: String, y: Int, l: Int, h: Int, loop: Ship.ShipId){
        self.loop = loop
        if loop == Ship.ShipId.I{Ship.numberI += 1}
        else{Ship.numberC += 1}
        self.countShot = 0
        if A.contains(x){
               self.x = x
        }
        else{
            self.x = "Error"
            print(" x=Error")
        }    
        
        if B.contains(y){
            self.y = y}
        else{
            self.y = 0
            print(" Error x=0")
        }
        self.h = HL.contains(h) ? h : 1
        self.l = HL.contains(l) ? l : 1
    }
    var condShip: Ship.ConditionShip {
        get{ 
            switch self.countShot{
                case 0: return Ship.ConditionShip.healt
                case 1..<self.l * self.h: return ConditionShip.inj
                default: return Ship.ConditionShip.kill
            }
        }  
    }    
}

class Field{
    var id: String
    var cell: [String: ConditionCell] = [:]
    var cond: [String: Ship] = [:]
    enum ConditionCell: String{
        case empty = "📉"
        case healt = "💹" 
        case inj = "❌"
        case rep = "🔳"
        case shot = "📊"
    }
    init(_ id: String){
        self.id = id
    }
    subscript(_ s: String) -> (Field.ConditionCell){
        get{
            if let st = self.cell[s]{
                 return st
            }
            else{
                return ConditionCell.empty
            }    
        }
        
        set{
            if let cond = self.cell[s]{
                switch cond{
                case Field.ConditionCell.rep:
                    print("repit at nil in coordinates \(s)");
                    break
                case Field.ConditionCell.inj:
                    print("repit at inj or kill ship in coordinates \(s)");
                    break
                case Field.ConditionCell.healt where self.cond[s]!.condShip != Ship.ConditionShip.kill:
                    self.cell[s]! = Field.ConditionCell.inj;
                    self.cond[s]!.countShot += 1;
                    print("popal at ship № \(self.cond[s]!.number)       \(self.cond[s]!.loop)'S    , have \(self.cond[s]!.floor) floor -- klass in coordinates \(s) 😃 ");
                    if self.cond[s]!.condShip == Ship.ConditionShip.kill {print("kill ship № \(self.cond[s]!.number) 😛")}
                default: break
                }
             }   
             else{
                 print("coordinates \(s) Nil  😨  ")
                 self.cell[s] = Field.ConditionCell.rep
             }    

        }
    }    
}

var cells = Field("May")
var cells1 = Field("Comp")
var ship1 = Ship(x: "F", y: 10, l: 1, h: 2, loop: Ship.ShipId.I)
var ship2 = Ship(x: "E", y: 3, l: 3, h: 1, loop: Ship.ShipId.I)
var ship3 = Ship(x: "E", y: 3, l: 3, h: 1, loop: Ship.ShipId.I)
var ships:[Ship] = [ship1,ship2,ship3]
var ships1:[Ship] = []
var maxHave = 4
var countShip: [Int] = [] 
for i in 0...maxHave - 1{
    countShip.append(maxHave - i)
}

var shipC = Ship(x: "A", y: 1, l: 1, h: 1, loop: Ship.ShipId.I)
func check(c: Field, x: String, y: Int, ship: Ship) -> Bool{
    var b: Bool
    for i in -1...1{
        for j in -1...1{ 
            if let celll = c.cond["\(A1[A1.index(of: x )! + i])\(String(y + j))"]{
                if celll !== ship{
                     shipC = celll
                     return false
                     break
                }
             }
        }
    } 
    return true
} 

func checShip(ship: Ship, cells: Field)-> Bool{    
    var bol = 0
    for h in 0...ship.h - 1{
        for l in 0...ship.l - 1{       
             if check(c: cells, x: A[A.index(of: ship.x)! + l] , y: ship.y + h, ship: ship) != true{
                 bol += 1 
             }
        }
    }
    if bol != 0{
             if ship.loop == Ship.ShipId.I{
                 print("ship №\(ship.number)  \(ship.loop)'S having  \(ship.floor) floor  will not by step, because of hear step \(shipC.number)  \(shipC.loop)'S having  \(shipC.floor) floor) ")
                 print("           Pleas, make other coordinates at ship \(ship.number) 😱 ")
             }
        return false
    } 
    else{
       for h in 0...ship.h - 1{
          for l in 0...ship.l - 1{       
               cells.cell["\(A[A.index(of: ship.x)! + l])\(ship.y + h)"] = Field.ConditionCell.healt
               cells.cond["\(A[A.index(of: ship.x)! + l])\(ship.y + h)"] = ship
          }
       }
       return true
    }   
}

func shipsComp( _ countShip: [Int])-> [Ship]{
     var ships1: [Ship] = []
     for i in 1...countShip.count{
         var ij = i - 1
         for j in 1...countShip[ij]{
             var ship = Ship(x: "A", y: 1, l: 1, h: 1, loop: Ship.ShipId.Comp)
             switch i{
                  case 1: var b = false
                         while b != true{
                               var x: String = A[Int(arc4random_uniform(9) + 1)]
                               var y: Int = Int(arc4random_uniform(9) + 1)
                               ship = Ship(x: x, y: y, l: 1, h: 1, loop: Ship.ShipId.Comp)
                               b = checShip(ship: ship, cells: cells1)
                               if b {ships1.append(ship)}
                         }/*
                    case 2: var b = false
                         while b != true{
                               var x: String = A[Int(arc4random_uniform(8) + 1)]
                               var y: Int = Int(arc4random_uniform(8) + 1)
                               var l: Int = Int(arc4random_uniform(2) + 1)
                               var h: Int = 3 - l 
                               //print(l,"lh",h)
                               ship = Ship(x: x, y: y, l: l, h: h, loop: Ship.ShipId.Comp)
                               b = checShip(ship: ship, cells: cells1)
                               if b {ships1.append(ship)}
                         }      
                    case 3: var b = false
                         while b != true{
                               var x: String = A[Int(arc4random_uniform(7) + 1)]
                               var y: Int = Int(arc4random_uniform(7) + 1)
                               var l: Int = Int(arc4random_uniform(2))
                               var h = 0
                               if l == 1 {h = 3}
                               else{h = 1; l = 3}
                               ship = Ship(x: x, y: y, l: l, h: h, loop: Ship.ShipId.Comp)
                               b = checShip(ship: ship, cells: cells1)
                               if b {ships1.append(ship)}
                    }           
                    case 4: var b = false
                         while b != true{
                               var x: String = A[Int(arc4random_uniform(6) + 1)]
                               var y: Int = Int(arc4random_uniform(6) + 1)
                               var l: Int = Int(arc4random_uniform(2) + 1)
                               var h = 0
                               if l == 1{h = 4}
                               else{h = 1; l = 4}
                               ship = Ship(x: x, y: y, l: l, h: h, loop: Ship.ShipId.Comp)
                               b = checShip(ship: ship, cells: cells1)
                         } */        
                 default: continue             
             } 
         }
     }
     return ships1
}

ships1 = shipsComp( countShip )
for ship in ships{
      checShip(ship: ship, cells: cells)
}     

func out( _ cells: Field){
    print("                 Field \(cells.id)")
    print("        A","   B","  C","  D","   E", "   F","  G","   H","   J","  K") 
    print("    ⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊")      
    for j in (1...10).reversed(){
        if j < 10 {print(terminator: "  \(j)| ")}
        else{print(terminator: "\(j)| ")}
        for i in A{
            if let str = cells.cell["\(i)\( String(j))"]{
                   print(terminator: " \(str.rawValue)")
            }    
            else{
                   print(terminator:" \(Field.ConditionCell.empty.rawValue)")
            }    
        }
        print(" |")
    }
    print("    ⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊⚊")
}

func i( _ st: String){
    print("⛏ ⛏ ⛏ ⛏ ⛏ ⛏ ⛏ ⛏ ⛏ ⛏⛏ ⛏ ⛏ ⛏ ⛏⛏ ⛏ ⛏ ⛏ ⛏")
    print("                  shot at May")
    if AB.contains(st){ 
        print()
        print()
        cells[st] = Field.ConditionCell.shot
        print()    
        out(cells)
    }
    else{
        print("coordinates \(st) error")
        out(cells)
    }
}
func comp( _ st: String){
    print("⛏ ⛏ ⛏ ⛏ ⛏ ⛏ ⛏ ⛏ ⛏ ⛏⛏ ⛏ ⛏ ⛏ ⛏⛏ ⛏ ⛏ ⛏ ⛏")

    print("                 shot at Comp")
    if AB.contains(st){ 
        print()
        print()
        cells1[st] = Field.ConditionCell.shot
        print()    
        out(cells1)
    }
    else{
        print("coordinates \(st) error")
        out(cells1)
    }
}
out(cells)
out(cells1)
i("F10")
comp("F5")
