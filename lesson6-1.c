 import Foundation
 let const1 = "1мммммммммм" , const2 = "hg6" , const3 = "54" , const4 = "100" , const5 = "abc"
 //var const1Unr = Int(const1) ?? 0
 //var const2Unr = Int(const2) ?? 0
 //var const3Unr = Int(const3) ?? 0
 //var const4Unr = Int(const4) ?? 0
 //var const5Unr = Int(const5) ?? 0
 //var sum = const1Unr + const2Unr + const3Unr + const4Unr + const5Unr
 var sum = (Int(const1) ?? 0) + (Int(const2) ?? 0) + (Int(const3) ?? 0) + (Int(const4) ?? 0) + (Int(const4) ?? 0)
 print(sum)
 var const1UnrOp : Int? = Int(const1) ?? nil
 var const2UnrOp : Int? = Int(const2) ?? nil
 var const3UnrOp : Int? = Int(const3) ?? nil
 var const4UnrOp : Int? = Int(const4) ?? nil
 var const5UnrOp : Int? = Int(const5) ?? nil
 
 var un = ""
 if let a = const1UnrOp
 {un += "\(a)+"}
 else {un += "\(const1UnrOp)+"}
 if let a = const2UnrOp
 {un += "\(a)+"}
 else {un += "\(const2UnrOp)+"}
 if let a = const3UnrOp
 {un += "\(a)+"}
 else {un += "\(const3UnrOp)+"}
 if let a = const4UnrOp
 {un += "\(a)+"}
 else {un += "\(const4UnrOp)+"}
 if let a = const5UnrOp
 {un += "\(a)+\(sum)"}
 else {un += "\(const5UnrOp)=\(sum)"}
 print("правильная интерполяция \(un)")
 
 print("\(Int(const1) ?? nil)+\(Int(const2) ?? nil) +\((Int(const3))! ?? nil) +\(Int(const4) ?? nil)+\(Int(const5) ?? nil)=\(sum)")

/*
// для примера  let const1 = "1" , const2 = "hg6" , const3 = "54" , const4 = "100" , const5 = "abc"
var unitOp = "\(const1UnrOp!)+\(const2UnrOp)+\(const3UnrOp!)+\(const4UnrOp!)+\(const5UnrOp)=\(sum)"
 print("Интерполяция:", unitOp)
 
 var stringUnit = ""
 if Int(const1) != nil 
 {stringUnit += const1 + "+"}
 else {stringUnit += "nil+"}
 if Int(const2) != nil
 {stringUnit += const2 + "+"}
 else {stringUnit += "nil+"}
 if Int(const3) != nil
 {stringUnit += const3 + "+"}
 else {stringUnit += "nil+"}
 if Int(const4) != nil
 {stringUnit += const4 + "+"}
 else {stringUnit += "nil+"}
 if Int(const5) != nil
 {stringUnit += const5 + "=" + String(sum)}
 else {stringUnit += "nil=" + "\( String(sum))"}
 print("конкатенация:",stringUnit)

*/