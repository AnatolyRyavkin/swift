func array( ar: [Int]) -> [Int]{
    var arrInv: [Int] = [] //Array(repeating: 0, count: ar.count)
    for i in (0...ar.count - 1).reversed(){
        arrInv.append(ar[i])
    }
    return arrInv
}
let ar = [1,2,3,4,5,100,6,85,65]
print(ar)
let arInv = array(ar: ar)
print(arInv)




func poslInv(pos: Int...) -> [Int]{
    var arr:[Int] = []
    for i in pos{
        arr += [i]
    }
        return array(ar: arr)
    }
print(poslInv(pos: 1,2,3,4))

func posInv1(posled pos: Int...) -> [Int]{
    return array(ar: pos)
}
print(posInv1(posled: 1,10,100,100))