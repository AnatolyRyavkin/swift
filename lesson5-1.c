var birthDay = (21,09)//(25,5)

var monthBirth = birthDay.1
var dayBirth = birthDay.0
var countDay=0
//let months = (yan:31,feb:30,mar:31,apr:30,may:31,jun:30,jul:31,aug:31,sen:31,okt:30,nov:30,dec:31])
let months = [31 , 28 ,  31 ,  30 ,  31 ,  30 ,  31 ,  31 ,  31 ,  30 ,  30 ,  31 ]
for i in 0...(monthBirth-2)
{
countDay += months[i]
print(months[i], "   ", countDay)
}
countDay += dayBirth
var countSec = countDay*24*60*60
print("count second=",countSec)

//(yan,feb,mar,apr,may,jun,jul,aug,sen,okt,nov,dec)
