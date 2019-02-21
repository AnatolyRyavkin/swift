let constFirst = "12345"
let constSecond = "145jg"
let constThird = "568fh"
let constFourth = "jdjd5"
let constFifth = "6592"
let constMas = [constFirst , constSecond , constThird , constFourth , constFifth]
var sumConst = 0
var i = 0
for prom in constMas
  {
      print(prom)
      if let promDif = Int(prom)
             {sumConst += promDif
              print(constMas[i], "writing")   
             }
      else   { print(constMas[i],"not writing")}
      i += 1  
  }
print("sumConst=", sumConst)

var sumConst1:Int = 0
if Int(constFirst) != nil
{ sumConst1 = sumConst1 + Int(constFirst)!}
if let promDif = Int(constSecond)
{ sumConst1 = sumConst1 + promDif}
if Int(constThird) != nil
{sumConst1 = sumConst1 + Int(constThird)!}
if let promDif = Int(constFourth)
{sumConst1 = sumConst1 + promDif}
if Int(constFifth) != nil
{sumConst1 = sumConst1 + Int(constFifth)!}
print("sumConst1=", sumConst1)