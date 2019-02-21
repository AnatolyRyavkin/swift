let birthDay = (21,09)
var countSec = 0
countSec = (birthDay.1 == 1) ? ((0 + birthDay.0) * 24 * 60 * 60) : countSec
countSec = (birthDay.1 == 2) ? ((0 + 31 + birthDay.0) * 24 * 60 * 60) : countSec
countSec = (birthDay.1 == 3) ? ((0 + 31 + 28 + birthDay.0) * 24 * 60 * 60) : countSec
countSec = (birthDay.1 == 4) ? ((0 + 31 + 28 + 31 + birthDay.0) * 24 * 60 * 60) : countSec
countSec = (birthDay.1 == 5) ? ((0 + 31 + 28 + 31 + 30 + birthDay.0) * 24 * 60 * 60) : countSec
countSec = (birthDay.1 == 6) ? ((0 + 31 + 28 + 31 + 30 + 31 + birthDay.0) * 24 * 60 * 60) : countSec
countSec = (birthDay.1 == 7) ? ((0 + 31 + 28 + 31 + 30 + 31 + 30 + birthDay.0) * 24 * 60 * 60) : countSec
countSec = (birthDay.1 == 8) ? ((0 + 31 + 28 + 31 + 30 + 31 + 30 + 31 + birthDay.0) * 24 * 60 * 60) : countSec
countSec = (birthDay.1 == 9) ? ((0 + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + birthDay.0) * 24 * 60 * 60) : countSec
countSec = (birthDay.1 == 10) ? ((0 + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + birthDay.0) * 24 * 60 * 60) : countSec
countSec = (birthDay.1 == 11) ? ((0 + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + birthDay.0) * 24 * 60 * 60) : countSec
countSec = (birthDay.1 == 12) ? ((0 + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30  + birthDay.0) * 24 * 60 * 60) : countSec
print("count second from the day of birth:", countSec)
if birthDay.1 < 4 {print("kvartal 1")}
if 4 <= birthDay.1 && birthDay.1 <= 6 {print("kvartal 2")} 
if 7 <= birthDay.1 && birthDay.1 <= 9 {print("kvartal 3")}
if 9 < birthDay.1 { print("kvartal 4")}
/*
if i == 2 { countDay += 0 + 31 }
if i == 3 { countDay += (0 + 31 + 28) }
if i == 4 { countDay += 0 + 31 + 28 + 31 }
if i == 5 { countDay += 0 + 31 + 28 + 31 + 30 }
if i == 6 { countDay += 0 + 31 + 28 + 31 + 30 + 31 }
if i == 7 { countDay += 0 + 31 + 28 + 31 + 30 + 31 + 30 }
if i == 8 { countDay += 0 + 31 + 28 + 31 + 30 + 31 + 30 + 31 }
if i == 9 { countDay += 0 + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 }
if i == 10 { countDay += 0 + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 }
if i == 11 { countDay += 0 + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 }
if i == 12 { countDay += 0 + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 }
2160000 12528000 22809600
*/