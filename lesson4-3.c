typealias TupleInfo = (nameStudent:String!, nambeCar:String?, valueContr:Int?)
var studentOne : TupleInfo=(nil,nil,nil)
var studentTwo:TupleInfo=(nil,nil,nil)
var studentThree:TupleInfo=(nil,nil,nil)
var studentFour:TupleInfo=(nil,nil,nil)
var studentFive:TupleInfo=(nil,nil,nil)
studentOne=("Anatoly Ryavkin", "B403ET750",5)
studentTwo=("Aleksandr Ryavkin", "Y170XO90",4)
studentThree=("Pavlova Ekaterina","A100AA750",nil)
studentFour=("Ivanov Ivan",nil,nil)
studentFive=("Petrov Petr",nil,3)
var masStudents=[studentOne,studentTwo,studentThree,studentFour,studentFive ]
var i=0
for provStud in masStudents
     { i+=1
       print("--------------------------------------------------------------------------")
       print("| " , i , " | ", provStud.0!,terminator:"  |  " )
       if let provCar = provStud.1
          {print("car namber:", provCar,terminator:"  |  ")}
       else{print("car not",terminator:"  |  ")}
       if let provContr = provStud.2
          {print("value contr:",provContr,"  |  ")}
       else{print("noofing contr  |")}
       print("---------------------------------------------------------------------------")
      } 