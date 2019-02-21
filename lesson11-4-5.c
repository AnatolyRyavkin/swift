/*var ar = [1,5,6,-5,0,8,-1]
var sort = [ar[0]]
for a in ar[1...ar.count-1]{
    var i = 0
    for (index, b) in sort.enumerated().reversed(){
    print("a=\(a) b=\(b)")
         if true {i = 1}
           else{
               sort.insert(a, at: index + 1)
               i = 0
               break
               }
    }
    if i == 1{
        sort.insert(a, at: 0)
    }
}
print(ar)
print(sort)
//ar = [1,5,6,-5,0,8,-1]*/   
////////////////////////////////////////////////////,"b","a","e","a","p","y"    (b == "y" || b == "a" || b == "i" || b == "o" || b == "e") "a", "e", "y", "o", "i",
///b == "y" || b == "a" || b == "i" || b == "o" 

var ar = ["b","a","i"]
var sort = ar.sorted(by: {a1, b1 -> Bool in
print("a= \(a1)   b= \(b1)")
var a = Character(a1)
var b = Character(b1)
switch a {
    case  "a", "i" , "a" ,"i" where b == "a" || b == "i" :
    if a < b {
         print("---------------")
          return true}
    else { 
         print("===============")
         return false}
         
// проблема в свиче:если видит последнюю букву в кейсе то проверяет условие кейса,
//а если буква в кейсе в середине то запускает в него вне зависимости от выполнения условия по в

    case  "a","i" where  b != "a" || b != "i" : 
    print("******************")
    return true
    
    case "b" where  b == "a" || b == "i"  :
    print("////////////////////////////////")
    return false
    
    case "b" where b == "b" :
    
    if a < b {return true}
    else { return false}
 
    default:
    print("+++++++++++++++++++++++")
    return true
}
//return true
})
print(ar)
print(sort)
//print("A=", "A".hashValue, "B=", "B".hashValue, "a=", "a".hashValue)
//print(ar.sorted(by: < ))