let ship1 = ["a1","a2"]
let ship2 = ["b4","c4","d4"]
let ship3 = ["f10"]
let ships = [ship1,ship2,ship3]
var cells: [(coor: String, lable: Int)] = []
for ship in ships{
        for coor in ship{
            cells.append((coor,ship.count))
        }
}
//var cell: [(coor: String, label: Int)] = [("a2",1),("d5",2),("e5",2)]
var shot = ("a2")
var j = 0
mainLoop: for i in cells{
            switch i{
            case let (x,y) where x == shot && y == 1: print("kill"); j = 1; break mainLoop 
            case let (x,y) where x == shot && y >= 1: print("wounded"); j = 1; break mainLoop
            default: break
        } 
    }
if j == 0{
    print("by")
}
