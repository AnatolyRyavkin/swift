func print1(f:() -> Int) -> (){
for i in 1...10{
    if f() == 1{
    print(i,(1000))
}
}
}
func a() -> Int{
    print("0000000000000")   
    return 1
}
//a()
//print1(f: a)
print1(f: {() -> Int in print("uhkgukgyku"); return 1})//or print1(f: {(print("uhkgukgyku"); return 1})
func zero(_ f:() -> () ) -> (){
    f()
    for i in 1...5{
    print(i)
    }
    f()
}
zero({print("I can rid at swift")})