var ar = [1,5,6,-5,0,8,-1]
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