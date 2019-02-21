extension Int{
    func pow(_ a: Int) -> Int{
         var res = self
         if a != 0{
              for _ in 1..<a {
                 res *= self
              }
         }
         else{
             res = 1
         }
         return res
    }
}

extension UInt8{
    func binary() -> String{
        var result = ""
        
        for i in 0..<8{
            let mask =  1 << i // 2.pow(i)//
            let set = self & UInt8(mask) != 0
            result = (set ? "1" : "0") + result 
        } 
         return result
    }
}
/*var a: UInt8 = 57
print(a.binary())
print((5 as UInt8).binary())
a += 5
print(a.binary())
print((4 as UInt8).binary())
a -= 4
print(a.binary())
a = a &* 8
print(a.binary())
a = 255
a = a &+ 1
print(a)
a = a &- 1
print(a)
*/

extension Int8{
    func binary() -> String{
        var result = ""
        
        for i in 0..<8{
            let mask =  1 << i // 2.pow(i)//
            //print(Int8(mask),"  ",self)
            let set = Int(self) & mask != 0
            result = (set ? "1" : "0") + result 
        } 
         return result
    }
}

var c: Int8 = -127
print(c.binary())
