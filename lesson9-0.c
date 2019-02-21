main: for _ in 1...100{
               for i in 1...10{
                   
                   if i <= 2{
                       continue
                   }
                   print("i=",i)
                   if i == 5{
                       break main
                   }
               }
}