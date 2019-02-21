func ar(_ arr: [String], _ closure: (String, String?) -> Bool) -> String{
var a: String? = nil
for i in arr{
    if closure(i, a) {
        a = i
    }
}
return a!
}
let array = ["A","h","a","x","b","I"]
print("min=", ar(array , {i1, a1 in // i1, a1 in можно не писать, а в теле клужера писать $0,$1
         if a1 != nil && a1! <= i1{ return false}
         else{ return true} 
}))
print("max=", ar(array, {
         if $1 != nil && $1! >= $0{ return false}
         else{return true}
}))
var str = "f"
var sk = UnicodeScalarType(str)
print(sk)