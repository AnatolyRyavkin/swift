typealias  sport = (pris:Int, otj:Int, pod:Int)
var recordI : sport
recordI = (10,15,5)

print("I : Prisedaniy caunt= \(recordI.0) , Otjimaniy caunt= \(recordI.otj) , Podtyagivaniy count= \(recordI.2) ")
var recordG : sport = (7,9,1) 
print("G : Prisedaniy count= \(recordG.0) , Otjimaniy count= \(recordG.1), Podtyagivaniy count= \(recordG.pod)") 
print("recordI=\(recordI)")
print("recordG=",recordG)

let prom : sport = recordI
recordI = recordG
recordG = prom
print("recordI=\(recordI)")
print("recordG=",recordG)
var tupleRasnica : sport = (recordG.0 - recordI.0 , recordG.1 - recordI.1 , recordG.2 - recordI.2)
print("tupieRasnica:", tupleRasnica)

var ssport = (priss:1, otj:2, pod:3)

print("ssport.priss=" ,ssport.priss, " !!!!  отдельно не выдает print(priss)-ошибка")