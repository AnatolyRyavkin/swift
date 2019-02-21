let A = [1...10]
let B = ["A","B","C","D","E","F","G","H","J","K"]
class Ship{
    let x: String{
        didSet{
            if ! A.contains(x){
                print("Error x")
            } 
        }
    }
    
    let y: Int
    let l: Int
    let h: Int
    init(x: Int, y: Int, l: Int, h: Int){
        self.x = x
        self.y = y
        self.h = h
             l = l
    }
    
}