let A = ["A","B","C","D","E","F","G","H","J","K"]
let B: [Int] = [1,2,3,4,5,6,7,8,9,10]
let HL: [Int] = [1,2,3,4]
class Ship{
    let x: String  
    let y: Int
    let l: Int
    let h: Int
    enum ConditionShip{
        case healt
        case inj1
        case inj2
        case inj3
        case kill
    }    
    var condShip: ConditionShip     
    init(x: String, y: Int, l: Int, h: Int){
        self.condShip = ConditionShip.healt 
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
    
} 
class Field{
    var cell: [String: ConditionCell] = [:]
    enum ConditionCell: String{
        case empty = "🔲"
        case healt = "📶" 
        case inj = "❎"
        case rep = "🔄"
    }
}
var cells = Field()
var ship1 = Ship(x: "F", y: 5, l: 2, h: 3)
var ship2 = Ship(x: "B", y: 3, l: 3, h: 1)
var ship3 = Ship(x: "G", y: 9, l: 4, h: 1)
var ships = [ship1,ship2,ship3]
for i in A{
    for j  in B{        
        for s in ships{
            //print(A.index(of: i)!, A.index(of: s.x )!, j, s.y)
            if  ( A.index(of: i)! < A.index(of: s.x)! + (s.l) && A.index(of: i)! >= A.index(of: s.x)! && (j < s.y + s.h) && j >= s.y)  ||  ((j < s.y + s.h) && j >= s.y && ( A.index(of: i)! < A.index(of: s.x)! + (s.l) && A.index(of: i)! >= A.index(of: s.x)!)) {
               // print("!!!!!!!!!!!!!")
                cells.cell["\(i)\( String(j))"] = Field.ConditionCell.healt
            }
            if cells.cell["\(i)\( String(j))"] == nil{
                cells.cell["\(i)\( String(j))"] = Field.ConditionCell.empty
            }    
        }    
    }
}

func out(){
    print("    A"," B"," C","  D"," E", "  F"," G"," H"," J","  K")
    for j in (1...10).reversed(){
        if j < 10 {print(terminator: "  \(j)")}
        else{print(terminator: "\(j)")}
        for i in A{
            if let str = cells.cell["\(i)\( String(j))"]{
                   print(terminator: " \(str.rawValue)")
            }    
            else{
                   print(terminator:"Error")
            }    
        }
        print()
    }
}

out()