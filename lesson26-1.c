import Foundation
struct Point{
    var x: Int = 0
    var y: Int = 0
}
var a = Point(x: 2, y: 10)
var b = Point(x: 1, y: 20)
func +(_ a: Point, b: Point) -> Point{
    var c = Point()
    c.x = a.x + b.x
    c.y = a.y + b.y
    return c
}
func -=(_ a: inout Point, b: Point){
    a.x = a.x - b.x
    a.y = a.y - b.y
}
var c = a + b
print(c.x,"  ",c.y)
a -= b
//print(a)


a = Point(x: 2, y: 10)
b = Point(x: 1, y: 20)




infix operator %%
func %%(_ a: inout Point, b: inout Point){
    var c = Point()
    c = a
    a = b
    b = c
}
print(a,b)
a %% b
print(a,b)

 prefix operator +++
 prefix func +++ (vector: inout Point)
 {
 vector -= vector
 //return vector
 }
 
 
prefix operator -???
prefix func -???(a: inout Point){
    a.x -= 10
    a.y += 10
}
print(a)
-???a
print(a)

postfix operator --???
postfix func --???(_ a: inout Point){
    a.x -= 100
    a.y += 100
}
print(a)
a--???
print(a)
