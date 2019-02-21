func chess ( a: String , b: Int) ->  String {
    switch a {
        case _ where (a == "a" || a == "c" || a == "e" || a == "g") && b % 2 == 0 : return("белая")
        case _ where (a == "a" || a == "c" || a == "e" || a == "g") && b % 2 != 0 : return("черная")
        case _ where (a == "b" || a == "d" || a == "f" || a == "h") && b % 2 == 0 : return("черная")
        case _ where (a == "b" || a == "d" || a == "f" || a == "h") && b % 2 != 0 : return("белая")
        default: return("нет такой клетки")
    } 
}
print(chess(a: "a",b: 1))
print(chess(a: "a",b: 2))
print(chess(a: "a",b: 3))
print(chess(a: "a",b: 4))
print(chess(a: "f",b: 1))
print(chess(a: "f",b: 2))
print(chess(a: "f",b: 3))
let d = (chess(a: "n",b: 4))

