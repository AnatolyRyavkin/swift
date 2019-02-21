import Foundation
class Game{
    var xField: Int
    var yField: Int
    var xPoint: Int
    var yPoint: Int
    var xBox: Int
    var yBox: Int
    
    init(_ xFieldIn: Int, _ yFieldIn: Int, _ xPointIn: Int, _ yPointIn: Int){
        self.xField = xFieldIn < 10 ? xFieldIn : 10 
        self.yField = yFieldIn < 10 ? yFieldIn : 10 
        self.xPoint = xField - Int(xField / 2)
        self.yPoint = yField - Int(yField / 2)
        self.xBox = xField - xPoint
        self.yBox = yField - yPoint
    }
    
    init(){
        self.xField =  Int( arc4random_uniform(6)) + 1
        self.yField = xField
        self.xPoint = xField - Int( arc4random_uniform(UInt32(xField)))
        self.yPoint = xField - Int( arc4random_uniform(UInt32(xField)))
        self.xBox =  xField - Int( arc4random_uniform(UInt32(xField)))
        self.yBox =  xField - Int( arc4random_uniform(UInt32(xField)))
    }
    
    func Out(){
        for i in (1...self.yField).reversed(){
            for j in  1...self.xField{
              switch (j,i){
                  case (self.xPoint,self.yPoint) : print(terminator: "🐺" )
                  case (self.xBox,self.yBox) : print(terminator: "🐇")
                  default : print(terminator: "💹")
              }
            }
            print()
        }
        print()
    }
    
    enum Vector: String{
        case Rigth = "R"
        case Left = "L"
        case Up = "U"
        case Down = "D"
        }  
    func Go(_ go: String){
        switch go{
        case Vector.Rigth.rawValue : 
             if self.xPoint + 1 > self.xField  {
             break
             }
             if self.xPoint + 1 == self.xBox && self.yPoint == self.yBox {
                 self.xBox = 0
                 self.yBox = 0
                 print("Victori 🐺 !!!!")
             }
             self.xPoint += 1
        case Vector.Left.rawValue :
        
        
             if self.xPoint - 1 == 0  {
             break
             }
             if (self.xPoint - 1 == self.xBox  && self.yPoint == self.yBox) && (self.xBox - 1) != 0 {
                 print("Victori 🐺 !!!!")
                 self.xBox -= 1
                 //self.yBox = 0
                 self.xPoint -= 1
                 break
             }
             if (self.xPoint - 1 == self.xBox  && self.yPoint == self.yBox) && (self.xBox - 1) == 0 {
                 print("Dont")
                 break
             }
             self.xPoint -= 1
             
             
        case Vector.Up.rawValue: 
             if self.yPoint + 1 > self.yField {
             break
             }
             if self.yPoint + 1 == self.yBox  && self.xPoint == self.xBox {
                 self.xBox = 0
                 self.yBox = 0
                 print("Victori 🐺 !!!!")
             }
             self.yPoint += 1                
        case Vector.Down.rawValue:
         if self.yPoint - 1 == 0 {
             break
             }
             if self.yPoint - 1 == self.yBox   && self.xPoint == self.xBox {
                 self.xBox = 0
                 self.yBox = 0
                 print("Victori 🐺 !!!!")
             }
             self.yPoint -= 1
        default : break 
        }
        self.Out()
    }
}
var game = Game(6,5,5,3)
game.Out()
game.Go("R")
game.Go("D")
game.Go("L")
game.Go("L")
game.Go("L")
