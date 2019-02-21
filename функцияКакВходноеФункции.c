 func handle( _ wallet: [Int], closure: (Int) -> Bool) -> [Int] {
 var returnWallet = [Int]()
 for banknot in wallet {
 if closure(banknot) {
 returnWallet.append(banknot)
 }
 }
 return returnWallet
 }
 // функция сравнения с числом 100
 func compare100(banknot: Int) ->Bool {
 return banknot==100
 }
 // функция сравнения с числом 1000
 func compareMore1000(banknot:Int) -> Bool {
 return banknot>=1000
 }
 var wallet = [10,50,100,100,5000,100,50,50,500,100]
 handle(wallet, closure: compare100)
 print(handle(wallet, closure: compareMore1000))