var chesPole: [String:Bool] = [:] 
let x = ["a","b","c","d","e","f","g","h"]
let y = [1,2,3,4,5,6,7,8]
var i1 = 0 , j1 = 0
for i in y
    {i1 += 1 //; var s = ""
     for j in x
    {j1 += 1  
     //if (i1%2 != 0 && j1%2 != 0) || (i1%2 == 0 && j1%2 == 0)
     //{chesPole[j + String(i)] = false ;  s = "black"
//поменяли


         chesPole[j + String(i)] = (i1%2 == j1%2) ? false : true
         
         
         
     //}
     //else{chesPole[j + String(i)] = true ;  s = "white"}
          print(terminator:" \(j + String(i)) --  \(chesPole[j + String(i)]!) )   ||  ")
    }
        print()
    }


//chesPole[j + String(i)] = (i1%2 == j1%2) ? false : true