var arGlas = ["a","i","e","o","u","y"]
    arGlas += ["A","I","E","O","U","Y"]
var arSogl = ["b","c","d","f","g","h","j","k","l","m","n","p","t","w","v","x","z","q","r","s"]
    arSogl += ["B","C","D","F","G","H","J","K","L","M","N","P","T","W","V","X","Z","Q","R","S"]
var arNum = ["0","1","2","3","4","5","6","7","8","9"]
var str = "jhADoery159&%$sallJGFAUXZ$%)=50"
var ar: [String] = []
for i in str{
    ar += ["\(i)"]
            }
var sortAr = ar.sorted(by: { a, b -> Bool in
    print("a= ",a,  " b=",b)
    if arGlas.contains(a) && a < b {print("!!!!!!!!!!!!!!!");return true}
    if arGlas.contains(a) && a > b && arGlas.contains(b) {print("///////////////");return false}
    
    if arSogl.contains(a) && !(arGlas.contains(b)) && a < b {print("................");return true}
       else if arSogl.contains(a) && arSogl.contains(b)  /*!(arGlas.contains(b)) && !(arNum.contains(b))*/ && a > b {print(">>>>>>>>>>>>>>>");return false}
            else if arSogl.contains(a) && arGlas.contains(b){print("<<<<<<<<<<<<<<<,");return false}
            
    if arNum.contains(a) && !(arGlas.contains(b)) && !(arSogl.contains(b)) &&  a < b {print("------------"); return true}
       else if arNum.contains(a) && arNum.contains(b) /*!(arGlas.contains(b)) && !(arSogl.contains(b))*/ &&  a > b {print("++++++++++++++++"); return false}
            else if arNum.contains(a) && (arSogl.contains(b) || arGlas.contains(b)) {print("================"); return false} 
    if  !arSogl.contains(a) && !arGlas.contains(a) && !arNum.contains(a) {print("simvol"); return false}      
       
    print("***************");return true
    
    
    
    
})
print(ar)
print(sortAr)
print(ar.sorted(by: < ))
var s = "("
s.lowercased()