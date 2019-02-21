func ar(_ arr: [Int], _ closure: (Int, Int?) -> Bool) -> Int{
var a: Int? = nil
for i in arr{
    if closure(i, a) {
        a = i
    }
}
return a!
}
let array = [1,100,-600,56,40,90,0]
print("min=", ar(array , {i1, a1 in // i1, a1 in можно не писать, а в теле клужера писать $0,$1
         if a1 != nil && a1! <= i1{ return false}
         else{ return true} 
}))
print("max=", ar(array, {
         if $1 != nil && $1! >= $0{ return false}
         else{return true}
}))