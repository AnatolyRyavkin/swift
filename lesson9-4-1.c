typealias Ship = (x: Int , y: Int, w: Int, h: Int)
let ship1: Ship = (3,8,4,1)
let ship2 = (6,4,2,1)
let ship3 = (2,3,1,3)
let ship4 = (10,10,1,1)
let ships = [ship1, ship2,ship3, ship4]
let point = (4,8)
var i = 0, j = 0
for ship in ships{
    switch ship{
        case let (x,y,w,h) where ((x <= point.0 && (x+w) > point.0 ) && (y <= point.1 && (y+h) > point.1)) && (w > 1 || h > 1) : print("попал")
        case let (x,y,w,h) where ((x <= point.0 && (x+w) > point.0 ) && (y <= point.1 && (y+h) > point.1)) && (w == 1 && h == 1) : print("убил")
        default: i += 1 
    }
    j += 1
}
if i == j{
    print("мимо")
}    