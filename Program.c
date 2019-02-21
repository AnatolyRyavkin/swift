func sum(valletiche val: [Int], type: Int? = nil) -> ( total:Int, count: Int) {
    var sum = 0
    var count = 0
    for value in val{
        if (type == nil) || (value == type!){
            sum += value
            count += 1
        }
    }
    return(sum,count)
}
let wallet = [1,10,50,10,50,10,100]
var a = sum(valletiche: wallet)
print(a.total)

func sum(range r: Int...) -> Int{
    var sum = 0
    for value in r{
        sum += value
    } 
    return sum
}
print(sum(range: 1,1,5,6))
print(sum(range: 1))


func mod(a: Int) -> Int {
    var b: Int = 0
    if a < 0 {b = -a}
    else {b = a}
    return b
}
