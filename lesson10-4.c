func array(collechion ar: inout [Int]) -> [Int]{
    var arrInv: [Int] = [] 
       /* for i in (0...ar.count - 1).reversed(){
        arrInv.append(ar[i])
    }*/
    ar.reverse()
   arrInv = ar 
   return arrInv
}
var ar = [1,2,3,4,5,100,6,85,65]
print(ar)
print(array(collechion: &ar))
print(ar)

