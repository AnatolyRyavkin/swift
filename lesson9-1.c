let str = "длиждлпорудацуадуцш2388328723нщ8ылпдлорплорплошугшгунешурп4984длолу65464654654650,ююююю//.=-"
var sumGlas = 0, sumSogl = 0, sumCif = 0, sumSim = 0, sum = 0
for i in str{
    switch i{
    case "а","е","и","о","у","э","ю","я","ё","ы": sumGlas += 1; print("гласная--\(i)")
    case "б","в","г","д","ж","з","к","л","м","н","п","р","с","т","ф","х","ц","ч","щ","ж","ш","ъ","ь": sumSogl += 1; print("согласная--\(i)")
    case let j where Int("\(j)") != nil : sumCif += 1; sum += Int("\(j)")!; print("цифра--\(i)") 
    //case let a as Character(Int(a)) : sumCif += 1; //sum += Int("\(j)")!; print("цифра--\(i)")
    default: sumSim += 1; print("символ--\(i)")
    }
}
print("sumGlas =\(sumGlas)   sumSogl =\(sumSogl)   sumCif =\(sumCif)   sumSim =\(sumSim)  sum =\(sum)")
var a: Character = "a"
var b: Character = "1"
print(Int("\(a)"))
print(Int("\(b)"))
