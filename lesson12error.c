enum Chessman{

    enum Color{
       case White
       case Black
    }
    enum ChesName: String{
       case KingWhite = "Kw"
       case QueenWhite = "Qw"
       case RookWhite = "Rw"
       case ElephantWhite = "Ew"
       case HorseWhite = "Hw"
       case PawnWhite = "Pw"
       case KingBlack = "Kb"
       case QueenBlack = "Qb"
       case RookBlack = "Rb"
       case ElephantBlack = "Eb"
       case HorseBlack = "Hb"
       case PawnBlack = "Pb"
    }
    
    case King(color: Color, lit: String, num: Int, name: ChesName)
    case Queen(color: Color, lit: String, num: Int, name: ChesName)
    case Rook(color: Color, lit: String, num: Int, name: ChesName)
    case Elephant(color: Color, lit: String, num: Int, name: ChesName)
    case Horse(color: Color, lit: String, num: Int, name: ChesName)
    case Pawn(color: Color, lit: String, num: Int, name: ChesName)
    
}

var kingW = Chessman.King(color: .White, lit: "a", num: 1, name: .KingWhite )
var queenW: Chessman = .Queen(color: .White, lit: "b", num: 1, name: .QueenWhite)
var kingB: Chessman = .King(color: .Black, lit: "g", num: 8, name: .KingBlack)
var pawnB1: Chessman = .Pawn(color: .Black, lit: "g", num: 7, name: .PawnBlack)
var pawnW1: Chessman = .Pawn(color: .White, lit: "a", num: 2, name: .PawnWhite)




var arChess: [Chessman] = [kingW,queenW,kingB,pawnB1,pawnW1]
//print(arChess)

func printDesk (_ chess: Chessman) -> (){
    switch chess {
    case King(let color, let lit, let num, let name): print("Chess Piece:  \(name) is in coordinates\(lit,num) simbol: \(name.rawValue)")
    case Queen(let color, let lit, let num, let name): print("Chess Piece:  \(name) is in coordinates\(lit,num) simbol: \(name.rawValue)")
    case Rook(let color, let lit, let num, let name): print("Chess Piece:  \(name) is in coordinates\(lit,num) simbol: \(name.rawValue)")
    case Elephant(let color, let lit, let num, let name): print("Chess Piece:  \(name) is in coordinates\(lit,num) simbol: \(name.rawValue)")
    case Horse(let color, let lit, let num, let name): print("Chess Piece:  \(name) is in coordinates\(lit,num) simbol: \(name.rawValue)")
    case Pawn(let color, let lit, let num, let name): print("Chess Piece:  \(name) is in coordinates\(lit,num) simbol: \(name.rawValue)")
        
      // case .Chess(let color, let lit, let num, let name):
      // print("Chess Piece:  \(name) is in coordinates\(lit,num) simbol: \(name.rawValue)")
}
}
for i in arChess{
    printDesk(i)
}
