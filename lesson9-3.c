import Foundation
let students = [("Аванов", "Иван", "Иванович"),("Петров","Петр","Петрович"),("Васечкин","Василий","Алексеевич")]
for i in students{
    switch i{
        case let (x,_,_) where x.hasPrefix("А") || x.hasPrefix("П") : print(x)    //x[x.startIndex] == "А" || x[x.startIndex] == "О": print(x)
        case let (x,y,_) where y[y.startIndex] == "В" || y[y.startIndex] == "Д": print(x," ",y)
        case let (x,_,z) where z[z.startIndex] == "П" || z[z.startIndex] == "Е": print(x)
        default: print(i.0 , i.1 , i.2)  
    }
}

/*
var str = "hgcvkjh"
var str1 = [""]
var j = 0
for i in str{
    str1[j] = "\(i)"
    j += 1
}    
var character: String = str1[1]

import foundation 
let students = [("Иванов", "Иван", "Иванович"),("Петров","Петр","Петрович"),("Васечкин","Василий","Алексеевич")]
for i in students{
        switch i{
                    case let (x,_,_) where x.hasPrefix("А") || x.hasPrefix("О"): print(x)
                    case let (x,y,_) where y.0 == "В" || y.0 == "Д": print(x," ",y)
                    case let (_,_,z) where z.0 == "З" || z.0 == "Е": print(z)
                   default: print(i)  
    }
}
*/