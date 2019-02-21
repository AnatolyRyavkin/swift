enum Chess 
     {
            enum CharFig:String
                                 {
                                 case KingBlack="♚"
                                 case QueenBlack="♛"
                                 case CastleBlack="♜"
                                 case BishopBlack="♝"
                                 case KnightBlack="♞"
                                 case PawnBlack="♟"

                                 case KingWhite="♔"
                                 case QueenWhite="♕"
                                 case CastleWhite="♖"
                                 case BishopWhite="♗"
                                 case KnightWhite="♘"
                                 case PawnWhite="♙"
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
                       
                       
              func rewKoorFig(  _ koor0 : String , _ koor1 : Int) -> (Chess)
                 {
                                      
                                              switch self
                                              {
                                               case .Figura (let coor, let risFig):
                                               let fig = Chess.Figura(koordinats:(koor0 ,koor1) , simvol: risFig)
                                              // Chess.Figura(koordinats:(koor0 ,koor1) , simvol: risFig) = fig
                                              // self = fig  
                                              // init( self:fig)
                                                  print("функция меняет координату")
                                              return(fig)

                                               }     
                 }  
                 
           
           subscript (  )-> (a:String, b:Int)
                             {
                                 get
                                    {
                                        /*
                                            var a:String
                                            var b:Int
                                            switch self {
                                            case .Figura (let coor, let risFig):
                                            print( terminator: "  \(risFig) \(risFig.rawValue) стоит на клетке ")
                                            a = coor.0
                                            b = coor.1
                                                         }
                                       return (a,b ) 
                                       */
                                       return("L",1) 
                                   
                                    }
                                    
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
                            

                             }


   }
   
// функция установки в фигуру новых координат
             func r( _ fig :inout Chess, _ koor0 : String, _ koor1 : Int) -> ()
                 {
                                      fig = Chess.Figura(koordinats:(koor0 ,koor1) ,simvol: fig.outSimFig())
                  }
                  


var kB = Chess.Figura(koordinats: ("D",8) , simvol:.KingBlack)
//var qB = Chess.Figura(koordinats: ("C",8) , simvol:.QueenBlack)
//kB.outKoor()
//r( &kB , "E" , 8 )
kB.outKoor()
kB=kB.rewKoorFig("F",7)
kB.outKoor()
//print(kB[])
kB[]=("C",8)
kB.outKoor()
print(kB)