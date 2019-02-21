enum Chessman{

    enum Color{
       case White
       case Black
    }
    enum ChesName: String{
       case KingWhite = "♚"
       case QueenWhite = "♛"
       case RookWhite = "♜"
       case ElephantWhite = "♝"
       case HorseWhite = "♞"
       case PawnWhite = "♟"
       case KingBlack = "♔"
       case QueenBlack = "♕"
       case RookBlack = "♖"
       case ElephantBlack = "♗"
       case HorseBlack = "♘"
       case PawnBlack = "♙"
    }
    case Chess(color: Color , lit: String, num: Int, name: ChesName)
 }
////////////////////////////////////////////////////////////////////////////////////////

var kingW = Chessman.Chess(color: .White, lit: "a", num: 1, name: .KingWhite )
var queenW: Chessman = .Chess(color: .White, lit: "b", num: 1, name: .QueenWhite)
var kingB: Chessman = .Chess(color: .Black, lit: "g", num: 8, name: .KingBlack)
var pawnB1: Chessman = .Chess(color: .Black, lit: "g", num: 7, name: .PawnBlack)
var pawnW1: Chessman = .Chess(color: .White, lit: "a", num: 2, name: .PawnWhite)

var arChess: [Chessman] = [kingW,queenW,kingB,pawnB1,pawnW1]

////////////////////////////////////////////////////////////////////////////////////////

func printChess (_ chess: Chessman) -> (){
    switch chess {
       case .Chess(let color , let lit, let num, let name):
       print("Chess Piece:  \(name) is in coordinates\(lit,num) simbol: \(name.rawValue)")
}
}

////////////////////////////////////////////////////////////////////////////////////////

func printChessman(_ arr: [Chessman]) -> (){
for i in arr{
    printChess(i)
}
}

//////////////////////////////////////////////////////////////////////////////////

func boolChessman(_ arr: [Chessman], x: String, y: Int ) -> Bool {
   var j: Bool = true     //пустая клетка - true
mainloop:   for i in arr{
     j = true
     switch i{
       case .Chess(let color , let lit, let num, let name):
       if (lit, num) == (x, y) { 
       j = false 
       print(terminator:"|\(name.rawValue)")
       break mainloop}
       default: j = true
}
}
return j
}

//////////////////////////////////////////////////////////////////////////////////////////////////

func printDesk() -> (){
    let litDic:[Int: String] = [1: "a", 2: "b", 3: "c", 4: "d", 5: "e", 6: "f", 7: "g", 8: "h"]
    print()
    print("    A   B  C  D   E   F  G  H")
    for i in (1...8).reversed(){
        print(i,terminator:" ")
        for j in 1...8{
            if boolChessman(arChess, x: litDic[j]! , y: i){
            i % 2 == j % 2 ? print(terminator:" \u{2591}") : print(terminator:" \u{2588}")
}
}
        print(" ",i)    
}
    print("    A   B  C  D   E   F  G  H")
}
printDesk()

////////////////////////////////////////////////////////////////////////////////////////////////

func mod(_ a: Int) -> Int {
    var b = 0
    //a < 0 ? b = a : b = a + 1 
    if a < 0 { b = -a}
    else {b = a}
    return b
}

///////////////////////////////////////////////////////////////////////////////////////////////

func transformPosition( _ chess: inout Chessman, _ newCoordinates: (x: String, y: Int)) -> (){
    let litArr = ["a", "b", "c", "d", "e", "f", "g", "h"]
    let litDic:[String: Int] = ["a":1, "b":2, "c":3, "d":4, "e":5, "f":6, "g":7, "h":8]
    if  litArr.contains(newCoordinates.0) && newCoordinates.1 >= 1 && newCoordinates.1 <= 8 {
      switch chess {
      case .Chess(let color , let lit, let num, let name):
           switch name{
                case .KingWhite: 
                      if mod(litDic[newCoordinates.0]! - litDic[lit]!) <= 1 && mod(newCoordinates.1 - num) <= 1{
                               chess = Chessman.Chess(color: color, lit: newCoordinates.0, num: newCoordinates.1 , name: name)
}
                      else {print("так \(name) не ходит")}  
                default: print("по \(name) не доделано")
} 
}
}
     else{print("Coordinata wrong")}
//}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////



transformPosition(&kingW, ("b",3))
transformPosition(&queenW, ("d",3))
arChess = [kingW,queenW,kingB,pawnB1,pawnW1]
printDesk()
