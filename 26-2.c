struct Size{
    var width: Int = 0
    var heigth: Int = 0
}
struct Point{
    var x: Int = 0
    var y: Int = 0
} 
struct Rect{
    var size: Size
    var point: Point
}

func +(a: Rect, b: Rect) -> Rect{
    var c = Rect(size: Size(), point: Point())
    c.point.x = a.point.x + b.point.x
    c.point.y = a.point.y + b.point.y
    c.size.width = a.size.width + b.size.width
    c.size.heigth = a.size.heigth + b.size.heigth
    return c
}
func -(a: Rect, b: Rect) -> Rect{
    var c = Rect(size: Size(), point: Point())
    c.point.x = a.point.x - b.point.x
    c.point.y = a.point.y - b.point.y
    c.size.width = a.size.width - b.size.width
    c.size.heigth = a.size.heigth - b.size.heigth
    return c
}
func +=(a: inout Rect, b: Rect){
        a = a + b
}
func -=(a: inout Rect, b: Rect){
        a = a - b
}
var a = Rect(size: Size(width: 5, heigth: 10), point: Point(x: 3,y: 3))
var b = Rect(size: Size(width: 20,heigth: 30), point: Point(x: 10,y: 10))
print(a + b)
print(a - b)
a += b
print(a)
a -= b
print(a)