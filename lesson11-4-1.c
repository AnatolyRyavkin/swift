var ar: [Int] = [1,20,25,9,5,-5]
print(ar)
var sort: [Int] = []
sort += [ar[0]]
for a in ar[1...ar.count-1]{
    var i = 0
    print("a=",a,"i=",i)
    for  (index, b) in sort.enumerated().reversed(){
    print("a=",a,"b=",b,"i=",i,"index=",index)
        if a > b {
            sort.insert(a, at: index)
            print("a=",a,"index=",index,"sort=",sort)
            print("exit to b if giv true")
            break
        }
        i += 1
        print("exit to b if not wrok")
    }
    if i == sort.count{
    print("i=",i,"sort.count=",sort.count)
        sort.insert(a, at: sort.count)
    }
}
print(sort)


//for (index, value) in shoppingList.enumerated()