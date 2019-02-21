var tuple : (statusCode : Int? , message : String? , errorMessage : String? )
tuple = (nil ,nil,nil)
if let statusCodeProv = tuple.statusCode
 {      if statusCodeProv >= 200 && statusCodeProv <= 300
                {   if let provMess = tuple.message
                           {
                            print("message:" , provMess)
                           }
                    else {print("sboy")}
                }
        else 
            {
                 if let provErMess = tuple.errorMessage
                     {  
                      print("errorMessege:" , provErMess)
                     }
                 else {print("cboy")}
            }
 }
 
else {print("Error Warning Pac Uteryn")}

print("2++++++++++++++++++++++++++")

tuple = (1,"mes","er")
if let messageProv = tuple.message
     {print("message:", tuple.message!)}
   else 
       { if let provErMes = tuple.errorMessage
           {print("errorMessage",provErMes) }
         else{print("cboy")} 
       }
 

