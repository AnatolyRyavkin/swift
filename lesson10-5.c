func vary(_ inter: String) -> (String){
    let strSmol = inter.lowercased()
    var strNew = ""
    let nambers = ["0":"zero","1":"one","2":"two","3":"three","4":"four","5":"fave","6":"six","7":"seven","8":"eath","9":"nain"]
    for char in strSmol{
    switch char{
        case "a", "e" , "i" , "o" , "u" , "y" : strNew += " \(String(char).uppercased())"
        case "b","c","d","f","g","h","m","n","k","l","p","r","s","t","W","v","x","z" : strNew += " \(char)"
        case _ where nambers[String(char)] != nil : strNew += " \(nambers[String(char)]! )"
        default: break
        }
       // strNew += " "
    }
    return strNew
} 
var str = "1A2a3b4B5r6R         ,,,,,,,,,,,1234567890asdfghjkASDFGHJK"
print(str)
print(vary(str))