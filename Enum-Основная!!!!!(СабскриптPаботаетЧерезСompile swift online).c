enum Chess 
     {
            enum CharFig:String
                                 {
                                 case KingBlack="|♚"  
                                 case QueenBlack="|♛"
                                 case CastleBlack="|♜"
                                 case BishopBlack="|♝"
                                 case KnightBlack="|♞"
                                 case PawnBlack="|♟"

                                 case KingWhite="♔|"
                                 case QueenWhite="♕|"
                                 case CastleWhite="♖|"
                                 case BishopWhite="♗|"
                                 case KnightWhite="♘|"
                                 case PawnWhite="♙|"
                                 }   
                     case Figura(koordinats:(String,Int),simvol:CharFig)

// функция доставания названия и символа фигуры
                 func outSimFig () -> (CharFig)
                           {
                                  switch self {
                                        case .Figura (let coor, let risFig):
                                         return (risFig)
                                              }
                           }
// функция вывода данных о фигуре                           
                 func outKoor () -> ()
                               {
                                  switch self {
                                        case .Figura (let coor, let risFig):
                                         print(" на клетке [\(coor.0) \(coor.1 )] стоит \(risFig) \(risFig.rawValue)")
                                              }
                               }
 // функция установки в фигуру новых координат из перечисления

                 mutating func rewKoorFig(  _ koor0 : String , _ koor1 : Int) -> ()
                 {
                     let coorBuk:[Int] = ["A".hashValue, "B".hashValue, "C".hashValue ,"D".hashValue ,"E".hashValue ,"F".hashValue ,"G".hashValue ,"H".hashValue ]
                     
                     let coorCif:[Int] = [8,7,6,5,4,3,2,1]
                     
                    
                     print(coorBuk)
                     var koor0H = koor0.hashValue
                                 // )  &&                             
                                 
                                if  coorCif.contains(koor1) && coorBuk.contains(koor0H)
                                {
                                              switch self
                                              {
                                               case .Figura (var coor, var risFig):
                                               let fig = Chess.Figura(koordinats:(koor0 ,koor1) , simvol: risFig)
                                               self = fig 
                                              // print("Установка координат через внутреннюю  функцию")
                                              // print("функция переставляет фигуру \(risFig) на  \(koor0 ,koor1)")
                                               } 
                                }  
                                else {
                                      print("\( self.outSimFig ()) на \(koor0,koor1) ходить нельзя")
                                      print("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
                                      print("")
                                     }
                 }  
          subscript (  )-> ()
                             {
                                 get
                                    {
                                           // var a:String
                                          //  var b:Int
                                            switch self {
                                            case .Figura (let coor, let risFig):
                                            print( "  \(risFig) \(risFig.rawValue) стоит на клетке: \(coor)")
                                           // a = coor.0
                                           // b = coor.1
                                                         }
                                       return () 
                                    }
                                    
/*     a:String, b:Int в выходные параметры если запускать СЕТ, и изменить  ГЕТ тогда
           !!!!!!!!!!!!!!!!!!!!!!!! но в CODE не идет- ошибка
           работает в    compile swift online !!!!!!!!!!!!!!!!!!!!!!
set ( newValue )
                                    {
                                    print(terminator: " сабскрипт-изменение на клетке:")
                                    print(newValue)
                                    var vrem:Chess
                                    vrem = self.rewKoorFig(  "C"  , 8)
                                  //  print(vrem)
                                  //  print(self) 
                                    self=vrem
                                  //  print(vrem)  
                                  //  print(self)    
                                   // return()    
                                     }  
                            
*/
                             }
   }
// функция установки в фигуру новых координат
             func r( _ fig :inout Chess, _ koor0 : String, _ koor1 : Int) -> ()
                 {
                                      fig = Chess.Figura(koordinats:(koor0 ,koor1) ,simvol: fig.outSimFig())
                                      print("Установка координат через внешнюю функцию")
                  }
//  функция вывода доски 
   func chessPole( _ massivFigur:[Chess]) -> ()
      {
        let coorBuk:[String] = ["A", "B", "C" ,"D" ,"E" ,"F" ,"G" ,"H" ]
        let coorCif:[Int] = [8,7,6,5,4,3,2,1]
        print("    A  B  C  D   E   F   G  H")
         for cCif in coorCif
           {
           print(  cCif, terminator:" ")
           for cBuk in coorBuk
            { 
             var registr=0
             var coordinPerebor = (cBuk , cCif )
             var coordinFigury : (String,Int)
              var figRis:String
               for element in massivFigur
                { 
                         switch element
                                {
                                  case .Figura (let coor, let risFig):
                                  coordinFigury = coor
                                  figRis = risFig.rawValue
                                 }
                              
                               switch coordinPerebor
                                {
                                  case  (coordinFigury.0 , coordinFigury.1) :
                                  registr=1
                                  if cBuk != "H"
                                     {
                                      print(terminator: figRis)
                                      }
                                    else { 
                                      print(figRis,cCif)
                                         }
                                  default : break      
                                }
               }
             if registr == 0  
                                            {
                                                 var numP:Int
                                                  numP=cCif
                                                            if cBuk != "H"
                                                                       {
                                                                          switch cBuk {
            case"A"where(numP % 2) == 0,"C"where(numP % 2) == 0,"E"where(numP % 2) == 0,"G"where(numP % 2) == 0:print("█", terminator:" ")
            case"A"where(numP % 2) != 0,"C"where(numP % 2) != 0,"E"where(numP % 2) != 0,"G"where(numP % 2) != 0:print("▒", terminator:" ")
            case"B"where(numP % 2) == 0,"D"where(numP % 2) == 0,"F"where(numP % 2) == 0,"H"where(numP % 2) == 0:print("▒", terminator:" ")
            case"B"where(numP % 2) != 0,"D"where(numP % 2) != 0,"F"where(numP % 2) != 0,"H"where(numP % 2) != 0:print("█", terminator:" ")
            default: print("?")
                                                                                    }
                                                                       }            
                                                               else  
                                                                       {
                                                                            switch cBuk {
                                                                                    case "H" where numP % 2 != 0  : print("█|", numP)
                                                                                    case "H" where numP % 2 == 0  : print("▒|", numP)
                                                                                    default: print("?")  
                                                                                       }
                                                                        } 
                                           }
           }
         }
         print("    A  B  C  D   E  F   G  H")
         print("///////////////////////////////////////////////////////")
         print("")
      }
var kB = Chess.Figura(koordinats: ("D",8) , simvol:.KingBlack)
var qB = Chess.Figura(koordinats: ("E",8) , simvol:.QueenBlack)
var cB1 = Chess.Figura(koordinats: ("A",8) , simvol:.CastleBlack)
var cB2 = Chess.Figura(koordinats: ("H",8) , simvol:.CastleBlack)
var bB1 = Chess.Figura(koordinats: ("C",8) , simvol:.BishopBlack)
var bB2 = Chess.Figura(koordinats: ("F",8) , simvol:.BishopBlack)
var knB1 = Chess.Figura(koordinats: ("B",8) , simvol:.KnightBlack)
var knB2 = Chess.Figura(koordinats: ("G",8) , simvol:.KnightBlack)
var pB1 = Chess.Figura(koordinats: ("A",7) , simvol:.PawnBlack)
var pB2 = Chess.Figura(koordinats: ("B",7) , simvol:.PawnBlack)
var pB3 = Chess.Figura(koordinats: ("C",7) , simvol:.PawnBlack)
var pB4 = Chess.Figura(koordinats: ("D",7) , simvol:.PawnBlack)
var pB5 = Chess.Figura(koordinats: ("E",7) , simvol:.PawnBlack)
var pB6 = Chess.Figura(koordinats: ("F",7) , simvol:.PawnBlack)
var pB7 = Chess.Figura(koordinats: ("G",7) , simvol:.PawnBlack)
var pB8 = Chess.Figura(koordinats: ("H",7) , simvol:.PawnBlack)

var kW = Chess.Figura(koordinats: ("D",1) , simvol:.KingWhite)
var qW = Chess.Figura(koordinats: ("E",1) , simvol:.QueenWhite)
var cW1 = Chess.Figura(koordinats: ("A",1) , simvol:.CastleWhite)
var cW2 = Chess.Figura(koordinats: ("H",1) , simvol:.CastleWhite)
var bW1 = Chess.Figura(koordinats: ("C",1) , simvol:.BishopWhite)
var bW2 = Chess.Figura(koordinats: ("F",1) , simvol:.BishopWhite)
var knW1 = Chess.Figura(koordinats: ("B",1) , simvol:.KnightWhite)
var knW2 = Chess.Figura(koordinats: ("G",1) , simvol:.KnightWhite)
var pW1 = Chess.Figura(koordinats: ("A",2) , simvol:.PawnWhite)
var pW2 = Chess.Figura(koordinats: ("B",2) , simvol:.PawnWhite)
var pW3 = Chess.Figura(koordinats: ("C",2) , simvol:.PawnWhite)
var pW4 = Chess.Figura(koordinats: ("D",2) , simvol:.PawnWhite)
var pW5 = Chess.Figura(koordinats: ("E",2) , simvol:.PawnWhite)
var pW6 = Chess.Figura(koordinats: ("F",2) , simvol:.PawnWhite)
var pW7 = Chess.Figura(koordinats: ("G",2) , simvol:.PawnWhite)
var pW8 = Chess.Figura(koordinats: ("H",2) , simvol:.PawnWhite)

var massivFigur:[Chess] = [kB,qB,cB1,cB2,bB1,bB2,knB1,knB2,pB1,pB2,pB3,pB4,pB5,pB6,pB7,pB8,kW,qW,cW1,cW2,bW1,bW2,knW1,knW2,pW1,pW2,pW3,pW4,pW5,pW6,pW7,pW8]
chessPole(massivFigur)

pB5.rewKoorFig("E",6)
chessPole([kB,qB,cB1,cB2,bB1,bB2,knB1,knB2,pB1,pB2,pB3,pB4,pB5,pB6,pB7,pB8,kW,qW,cW1,cW2,bW1,bW2,knW1,knW2,pW1,pW2,pW3,pW4,pW5,pW6,pW7,pW8])
pW5.rewKoorFig("E",10)
chessPole([kB,qB,cB1,cB2,bB1,bB2,knB1,knB2,pB1,pB2,pB3,pB4,pB5,pB6,pB7,pB8,kW,qW,cW1,cW2,bW1,bW2,knW1,knW2,pW1,pW2,pW3,pW4,pW5,pW6,pW7,pW8])

//kB.rewKoorFig("E",4)
//qB.rewKoorFig("D",8)
//kB[]
//qB[]             
//r( &kB , "E" , 8 )
//kB.outKoor()
//kB[]=("C",8)-работает в compile swift online
//massivFigur = [kB,qB,cB1,cB2,bB1,bB2,knB1,knB2,pB1,pB2,pB3,pB4,pB5,pB6,pB7,pB8] //а так не обновляется!!!!
//chessPole(massivFigur)
