 import Foundation
 // функция генерации случайного массива банкнот
 func generateWallet(walletLength: Int)
 -> [Int] {
 // существующие типы банкнот
 let typesOfBanknotes = [50, 100, 500, 1000, 5000]
 // массив банкнот
 var wallet: [Int] = []
 // цикл генерации массива случайных банкнот
 for _ in 1...walletLength {
 let randomIndex = Int( arc4random_uniform(
UInt32( typesOfBanknotes.count-1 ) ) )
 wallet.append( typesOfBanknotes[randomIndex] )
 
 print(randomIndex)
 }
 return wallet
 }
 // функция подсчета денег в кошельке
 func sumWallet(aa wallet: (Int)->([Int]) )
 -> Int? {
 // вызов переданной функции
 let myWalletArray = wallet( Int( arc4random_uniform(10) ) )
 var sum: Int = 0
 for oneBanknote in myWalletArray {
 sum += oneBanknote
 }
 return sum
 }
 // передача функции в функцию
 print(sumWallet(aa : generateWallet)!)
 //banknotsFunction