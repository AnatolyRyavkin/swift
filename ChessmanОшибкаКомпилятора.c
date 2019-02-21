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
            print("координаты фигуры обнулены" )
          } 
            }  
var QueenBlack = Chessman(type: .Queen, color: .Black, figure:"A")
 print("Начальная -------------QueenBlack.coordinates=",QueenBlack.coordinates)
 class gameDesk {
       var desk: [Int:[String:Chessman]] = [:]
       
                init()  {
                    for i in 1...8 {
                                     desk[i] = [:]
                                      
                                    }
                        }
 /////////////////////////////////////////////////////////////////////////////////////
 
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
             set(newValua) 
                {
                    game["C",5] = QueenBlack  
                    print("jhggffddd")
               }  
                                   }
            //    game["C",5] = QueenBlack              
 //////////////////////////////////   
      func setChessman(chess: Chessman, coordinates: (String, Int))
          {
             if let oldCoordinates = chess.coordinates  
                     {
                        desk[oldCoordinates.1]![oldCoordinates.0] = nil
                    } 
             self.desk[coordinates.1]![coordinates.0] = chess
                         //тоже самое:
                         self.desk[coordinates.1] = [coordinates.0:chess]
             chess.setCoordinates(char: coordinates.0, num: coordinates.1)
          }
        func delChessman(chess: Chessman)   
        {
             if let oldCoordinates = chess.coordinates  
                     {                                                                                //    print("oldCoordinates=", oldCoordinates) 
                        desk[oldCoordinates.1]![oldCoordinates.0] = nil
                    } 
           print("Удаляем")
            chess.kill()
             print("фигура", chess.type, chess.color, " больше не стоит на доске")
          }
 
        }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////        
  var game = gameDesk()
  var provKorStr:String = "E"
  var provKorInt:Int = 8
  
  
///////////////////////////////////////////////////////////////////////////////////  
  game.setChessman(chess: QueenBlack, coordinates: ( provKorStr ,provKorInt))
////////////////////////////////////////////////////////////////////////////////////  
  
       print( QueenBlack.type, QueenBlack.color," QueenBlack.type, QueenBlack.color НА QueenBlack.coordinates" ,QueenBlack.coordinates!)
       print("??на клетке provKorStr,provKorInt= \( provKorStr,provKorInt) находится(((game[provKorStr,provKorInt])?.type)!)=   \(((game[provKorStr,provKorInt])?.type)!)")
       print( "????????на клетке( provKorStr,provKorInt) \( provKorStr,provKorInt) находиться(должно быть)QueenBlack.coordinates", QueenBlack.coordinates,") !!! а есть (game[provKorStr,provKorInt]!).coordinates!) ", (game[provKorStr,provKorInt]!).coordinates!)                                                                                     

  
/////////////////////////////////////////////////////////////////////////////////////  
  QueenBlack = Chessman(type: .Queen, color: .Black, figure:"A", coordinates:( "A", 5 ))
////////////////////////////////////////////////////////////////////////////////////////  
       print("??на клетке provKorStr,provKorInt= \( provKorStr,provKorInt) находится(((game[provKorStr,provKorInt])?.type)!)=   \(((game[provKorStr,provKorInt])?.type)!)")
       print( "????????на клетке( provKorStr,provKorInt) \( provKorStr,provKorInt) находиться(должно быть)QueenBlack.coordinates", QueenBlack.coordinates,") !!! а есть (game[provKorStr,provKorInt]!).coordinates!) ", (game[provKorStr,provKorInt]!).coordinates!)                                                                                     
