func lit() -> (Character){
 let a: Character = "\u{2640}" 
 return(a)   
}
func litera (ch:() -> (Character)) -> (String){
    let b = "\(ch())hgjhjkhbkj"
    return(b)
}
print(lit())
print(litera(ch:lit))