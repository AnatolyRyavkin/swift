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

enum CheckList: UInt8{
    case Bread =   0b00000001
    case Fish =    0b00000010
    case Apple =   0b00000100
    case Chicken = 0b00001000
    static func chec(_ chec: UInt8){
        switch chec{
            case _ where ((chec|CheckList.Bread.rawValue) > 0): print("bread yes"); fallthrough
            case _ where ((chec|CheckList.Fish.rawValue) > 0): print("fish yes"); fallthrough
            case _ where ((chec|CheckList.Apple.rawValue) > 0): print("apple yes"); fallthrough
            case _ where ((chec|CheckList.Chicken.rawValue) > 0): print("chicken yes")
            default: print("dont oll")
        }
    }
    static func inite(_ chec: UInt8, _ value: [CheckList]) -> UInt8{
        var chec1: UInt8 = 0
        for i in value{
           chec1 = chec1|i.rawValue
           print(chec1.binary())
           print("init", i)
        }   
         return chec1
    }
}
extension CheckList{
    static func inite1(_ chec: inout UInt8,_ value: CheckList){
        chec = chec|value.rawValue
        print("init", value)
    } 
}
var a: UInt8 = 0b00000000
CheckList.inite1(&a,CheckList.Fish)
//CheckList.chec(a)
print(a.binary())
//print(CheckList.inite(0b00000000,[CheckList.Fish,CheckList.Apple]).binary())
//print(a.binary())