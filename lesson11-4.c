let str = "D5Ahgd5gfZ"
let arr = Array(str)
print(arr)
var sortArr = arr.sorted(by: {a, b in
print("a=",a,"b=",b)
if a == "5" {return false}
if a >= "A" && a <= "Z"  {
        if a < b {print("1"); return true }
        else{print("2"); return false }
}        
        else{print("3"); return false }
})

print(sortArr)
print(arr.sorted(by: < ))
