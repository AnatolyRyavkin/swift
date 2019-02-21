extension UInt64{
    func binary() -> String{
        var result = ""
        
        for i in 0..<64{
            let mask: UInt64 =  1 << i // 2.pow(i)//
            let set = self & mask != 0
            result = (set ? "1" : "0") + result 
        } 
         return result
    }
}
enum Color{
    case Black
    case White
    
}
func chec(_ cell: String) -> Color?{
     var color: Color? = nil
     let deskColor: UInt64 = 0b1010101001010101101010100101010110101010010101011010101001010101
     let litArr = ["A","B","C","D","E","F","G","H"]
     if let num = Int(String(cell[cell.index(before: cell.endIndex)])){
        if let litIndex = litArr.index(of: String(cell[cell.startIndex])){
            if num > 0 && num < 9{
                 let masc: UInt64 = 1 << (litIndex * 8 + (num - 1))
                 if masc & deskColor == 0{
                     color = Color.White
                     //print("White")
                 }
                 else{
                     color = Color.Black
                     //print("Black")
                 }
            }     
        }
     }
     if color == nil{
         print("dont same cell--   ",cell)
     }
     return color

} 
print(chec("B10"))
for i in ["A","B","C","D","E","F","G","H"]{
    for j in (1...8).reversed(){
        if let a = chec("\(i)\(String(j))"){
            if a == Color.Black{print(terminator: "💹")}
            else{print(terminator: "📉")}
        }
    }
    print()
}

/*     let deskColor: UInt64 = 0b1010101001010101101010100101010110101010010101011010101001010101
     let masc: UInt64 = 1 << 0
     print(masc.binary())
     print(deskColor.binary())
     if deskColor & masc == 0{
         print("++++++")
     }
     else{
         print("------")
     }
*/
