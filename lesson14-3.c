import Darwin.C.math
struct Cut{
    init(_ a: (Double, Double), _ b: (Double, Double)){
        self.A = Point(x: a.0, y: a.1)
        self.B = Point(x: b.0, y: b.1)
    }
    struct Point{
        var x: Double
        var y: Double
    }
    var A: Point
    var B: Point
    var C: Array<Double>{
        get{
            var cX = A.x >= B.x ? (A.x - B.x) / 2 + B.x : (B.x - A.x) / 2 + A.x
            var cY = A.y >= B.y ? (A.y - B.y) / 2 + B.y : (B.y - A.y) / 2 + A.x
            return [cX,cY]
        }
        set(newValue){
            var cDifX = C[0] - newValue[0]
            var cDifY = C[1] - newValue[1]
            A.x += cDifX
            B.x += cDifX
            A.y += cDifY
            B.y += cDifY
        }
        
    }
    var length: Double{
        get{
           var d = sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2))
           //var d = sqrt( (A.x - B.x) * (A.x - B.x) + (A.y - B.y)*(A.y - B.y))
           return d
        }
        set(newValue){
            var BprX = A.x + (newValue * (B.x - A.x)) / length
            var BprY = A.y + (newValue * (B.y - A.y)) / length
            B.x = BprX
            B.y = BprY
        }
    }    
}


var point = Cut((0.0,0.0), (10.0,10.0))

//var point = Cut(A: Cut.Point(x: 14, y: 10.0), B: Cut.Point(x: 4, y: 10 )) по умолчанию
print("A : (\(point.A.x),\(point.A.y)) ------  B:(\(point.B.x),\(point.B.y))")
print("length: ", point.length)
print("center: \(point.C)")

point.length = 2

print("A : (\(point.A.x),\(point.A.y)) ------  B:(\(point.B.x),\(point.B.y))")
print("length: ", point.length)
print("center: \(point.C)")
