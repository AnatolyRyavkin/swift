extension UInt32{
    func binary() -> String{
        var result = ""
        
        for i in 0..<32{
            let mask =  1 << i // 2.pow(i)//
            let set = Int(self) & mask != 0
            result = (set ? "1" : "0") + result 
        } 
         return result
    }
}
for _ in 1...3{
var a: UInt32 = 1
//print(a.binary())
for i in 0...30{
    a = a << 1
    print(a.binary())
    
}
for i in 0...30{
    a = a >> 1
    print(a.binary())
}
}