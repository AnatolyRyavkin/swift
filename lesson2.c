print(Int64.max,Int64.min,Int32.min,Int32.max,Int16.max,Int16.min,Int8.max,Int8.min)
print(UInt64.max,UInt.min,UInt32.max,UInt32.min,UInt16.max,UInt16.min,UInt8.max,UInt8.min)
let constInt = 15
let constDouble = -12.9
let constFloat:Float = -2.1
print(constInt)
print(constDouble)
print(constFloat)
let sumInt = Int(Double(constInt) + constDouble + Double(constFloat))
let sumDouble = Double(constInt)+constDouble+Double(constFloat)
let sumFloat = Float(constInt) + Float(constDouble) + constFloat
print("sumInt= \(sumInt) , sumDouble=\(sumDouble) ,sumFloat=\(sumFloat)")
      if sumDouble > Double(sumInt) 
           {print("Summa Double biger")}
      else if sumDouble < Double(sumInt)
           {print("Summa Int biger")}
      else {print("Sums Int and Double ident")}       
           