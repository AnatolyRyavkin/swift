 class Chessman {
   enum ChessmanType {
    case King
    case Castle
    case Bishop
    case Pawn
    case Knight

    case Queen
                      }
          enum CheesmanColor {
               case Black
               case White
                             }
 var type: ChessmanType
 let color: CheesmanColor
 var coordinates: (String, Int)? = nil
 let figureSymbol: Character
            init(type: ChessmanType, color: CheesmanColor, figure:
                 Character){
                     self.type = type
                     self.color = color
                     self.figureSymbol = figure
                           }
         init(type: ChessmanType, color: CheesmanColor, figure:
          Character, coordinates: (String, Int)){
                self.type = type
                self.color = color
                self.figureSymbol = figure
                self.setCoordinates(char: coordinates.0, num:
                coordinates.1)
                                                 }
        func setCoordinates(char c:String, num n: Int)
          {
          self.coordinates = (c, n)
          }
          func kill()
          {
            self.coordinates = nil
          } 
            }  


//////////////////////////      класс шахматная доска         //////////////////////

 class gameDesk {
       var desk: [Int:[String:Chessman]] = [:]
       
                init()  {
                    for i in 1...8 {
                                     desk[i] = [:]
                                      
                                    }
                        }
           ///////////////////////////                                     сабскрипт      //////////////////////////////////////////////////////////
 
           subscript(alpha: String, number: Int)-> Chessman?
                             {
                                 get
                                    {
                                    if let chessman = self.desk[number]![alpha]
                                                                                {  
                                                                    return chessman
                                                                    }
                                      return nil
                                    }
                                 set(newValue)
                                    {
                                   // print("изменение:")
                                    if newValue !== nil {
                                      self.setChessman(chess:newValue, coordinates: (alpha,number))}
                                      else { 
                                      self.delChessmanSet(coordinates: (alpha, number))
                                      }
                                    }
                              }       
           //////////////////////////////////                             функция установки фигуры                   ////////////////////////  
          func setChessman(chess: Chessman?, coordinates: (String, Int))
          {
             if let oldCoordinates = chess?.coordinates  
                     {
                     
                     
                     
                        print("Переставили  ", (chess?.figureSymbol)!)
                        desk[oldCoordinates.1]![oldCoordinates.0] = nil
                    } 
                 //   else { print("новая фигура на доске  ", (chess?.figureSymbol)!)}
                    
             self.desk[coordinates.1]![coordinates.0] = chess!
                         //тоже самое:
                        // self.desk[coordinates.1] = [coordinates.0:chess]
           
             chess?.setCoordinates(char: coordinates.0, num: coordinates.1)
          }
/////////////////////                                           функция удаления фигуры через сабскрипт     /////////////////////

          func delChessmanSet(coordinates: (String, Int))
                 {
                     self.desk[coordinates.1]![coordinates.0]?.kill() 
                                                    print(" фигура  \(((self.desk[coordinates.1]![coordinates.0]))?.figureSymbol) убита" )
                                                    
                    desk[coordinates.1]![coordinates.0] = nil
                  }
                  
   
///////////////////////         функция вывода на экран доски с фигурами      /////////////////////

    func printDesk()
                      {
                      
           let bukv : [String] = [ "A" , "B" , "C" , "D" , "E" , "F" , "G" , "H" ]
            print("     A   B  C  D  E   F   G  H")
           print("    ________________________         ")
               for num in 1...8
                          {
                          let numP=9-num
                          print(numP,"|", terminator: " ")
                            for bu in bukv
                              {
                                  if desk[numP]![bu] == nil
                                        {
                                          if bu != "H" {
                                            
 switch bu {
             case"A"where(numP % 2) == 0,"C"where(numP % 2) == 0,"E"where(numP % 2) == 0,"G"where(numP % 2) == 0:print("█", terminator:" ")
             case"A"where(numP % 2) != 0,"C"where(numP % 2) != 0,"E"where(numP % 2) != 0,"G"where(numP % 2) != 0:print("▒", terminator:" ")
             case"B"where(numP % 2) == 0,"D"where(numP % 2) == 0,"F"where(numP % 2) == 0,"H"where(numP % 2) == 0:print("▒", terminator:" ")
             case"B"where(numP % 2) != 0,"D"where(numP % 2) != 0,"F"where(numP % 2) != 0,"H"where(numP % 2) != 0:print("█", terminator:" ")
                                                              default: print("?")
                                                            }
                                                        } 
                                              else   {
                                               switch bu {
                                                          case "H" where numP % 2 != 0  : print("█|", numP)
                                                          case "H" where numP % 2 == 0  : print("▒|", numP)
                                                             default: print("?")  
                                                          }
                                                     }
                                    }
                                  else 
                                      {
                                            if bu != "H" {print(((self.desk[numP]![bu])!).figureSymbol, terminator: "|")}
                                             else {print(((self.desk[numP]![bu])!).figureSymbol,terminator: "")
                                                print("|",numP)
                                                  }
                                             
                                      }
                              }
                          }
                          print("   ▔▔▔▔▔▔▔▔▔▔▔      ")
                          print("     A   B  C  D  E   F   G  H")
                          print("  ")
                          print("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%")
                           print(" 🎃 ")
                      }
        
        }
        
    
        
var QueenBlack = Chessman(type: .Queen, color: .Black, figure:"♛")
var KingBlack = Chessman(type: .King, color : .Black , figure: "♚")
var CastleBlack1 = Chessman(type: .Castle, color: .Black, figure:"♜")
var BishopBlack1 = Chessman(type: .Bishop, color : .Black , figure: "♝")

var KnightBlack1 = Chessman(type: .Knight, color : .Black , figure: "♞")
var CastleBlack2 = Chessman(type: .Castle, color: .Black, figure:"♜")
var BishopBlack2 = Chessman(type: .Bishop, color : .Black , figure: "♝")
var PawnBlack2 = Chessman(type: .Pawn, color: .Black, figure:"♟")
var KnightBlack2 = Chessman(type: .Knight, color : .Black , figure: "♞")
var PawnBlack3 = Chessman(type: .Pawn, color: .Black, figure:"♟")
var PawnBlack4 = Chessman(type: .Pawn, color: .Black, figure:"♟")
var PawnBlack5 = Chessman(type: .Pawn, color: .Black, figure:"♟")
var PawnBlack6 = Chessman(type: .Pawn, color: .Black, figure:"♟")
var PawnBlack7 = Chessman(type: .Pawn, color: .Black, figure:"♟")
var PawnBlack8 = Chessman(type: .Pawn, color: .Black, figure:"♟")
var PawnBlack1 = Chessman(type: .Pawn, color: .Black, figure:"♟")

var QueenWhite = Chessman(type: .Queen, color: .White, figure:"♕")
var KingWhite = Chessman(type: .King, color : .White , figure: "♔")
var CastleWhite1 = Chessman(type: .Castle, color: .White, figure:"♖")
var BishopWhite1 = Chessman(type: .Bishop, color : .White , figure: "♗")
var PawnWhite1 = Chessman(type: .Pawn, color: .White, figure:"♙")
var KnightWhite1 = Chessman(type: .Knight, color : .White , figure: "♘")
var CastleWhite2 = Chessman(type: .Castle, color: .White, figure:"♖")
var BishopWhite2 = Chessman(type: .Bishop, color : .White , figure: "♗")
var PawnWhite2 = Chessman(type: .Pawn, color: .White, figure:"♙")
var KnightWhite2 = Chessman(type: .Knight, color : .White , figure: "♘")
var PawnWhite3 = Chessman(type: .Pawn, color: .White, figure:"♙")
var PawnWhite4 = Chessman(type: .Pawn, color: .White, figure:"♙")
var PawnWhite5 = Chessman(type: .Pawn, color: .White, figure:"♙")
var PawnWhite6 = Chessman(type: .Pawn, color: .White, figure:"♙")
var PawnWhite7 = Chessman(type: .Pawn, color: .White, figure:"♙")
var PawnWhite8 = Chessman(type:Chessman.ChessmanType.Pawn, color: .White, figure:"♙")

var game = gameDesk()
game.printDesk()
game ["A",1]=CastleWhite1
game ["B",1]=KnightWhite1
game ["C",1]=BishopWhite1
game ["D",1]=QueenWhite
game ["E",1]=KingWhite
game ["F",1]=BishopWhite2
game ["G",1]=KnightWhite2
game ["H",1]=CastleWhite2
game ["A",2]=PawnWhite1
game ["B",2]=PawnWhite2
game ["C",2]=PawnWhite3
game ["D",2]=PawnWhite4
game ["E",2]=PawnWhite5
game ["F",2]=PawnWhite6
game ["G",2]=PawnWhite7
game ["H",2]=PawnWhite8
game ["B",7]=PawnBlack2
game ["A",7]=PawnBlack1    

game ["C",7]=PawnBlack3
game ["D",7]=PawnBlack4
game ["E",7]=PawnBlack5
game ["F",7]=PawnBlack6
game ["G",7]=PawnBlack7
game ["H",7]=PawnBlack8
game ["A",8]=CastleBlack1
game ["B",8]=KnightBlack1
game ["C",8]=BishopBlack1
game ["D",8]=QueenBlack
game ["E",8]=KingBlack
game ["F",8]=BishopBlack2
game ["G",8]=KnightBlack2
game ["H",8]=CastleBlack2
game.printDesk()

game ["E",4]=PawnWhite5
game ["E",5]=PawnBlack5
game ["B",5]=BishopWhite2
game ["C",6]=PawnBlack3
game ["C",6]=BishopWhite2
game ["m",7]=nil
game.printDesk()


