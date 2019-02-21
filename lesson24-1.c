extension Int{
    var isNegative: Bool{
        return self < 0 ? true : false
    }    
    var isPositive: Bool{
        return isNegative != true ? true : false
    }
}
print( (-10).isNegative)
print(10.isPositive)