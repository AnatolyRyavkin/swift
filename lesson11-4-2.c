var ar = [1,4,9,-1]
var sort: [Int] = [ar[0]]
for a in ar[1...ar.count-1]{
    var i = 0
    for b in sort.reversed(){
    if a > b {sort.append(a)
    i = 1
    break
    }
    }
    if i == 0{ sort.insert(a, at: 0)}
    }
print(ar)
print(sort)