class Transport{
    let capacity: Int
    let speed: Int
    let expenseFuel100Km: Int
    let costOneLFuel: Int
    init(capacity: Int, speed: Int, expenseFuel100Km: Int, costOneLFuel: Int){
        self.capacity = capacity
        self.speed = speed
        self.expenseFuel100Km = expenseFuel100Km
        self.costOneLFuel = costOneLFuel
    }
    var costOneKm: Double{
        return (Double(expenseFuel100Km) * Double(costOneLFuel)) / 100
    } 
    
    func costPerson(_ kmOneTrip: Int, _ countPersons: Int ) -> (Int, Int,Int){
        var countTrip: Int{
            get{
                if countPersons % capacity == 0 {
                    return countPersons / capacity
                }
                else{
                    return countPersons / capacity + 1
                }
            }
            set{}
        }
        //print(costOneKm)
        print(" Count trips", countTrip)
        let countMany = ((kmOneTrip * countTrip * 2) - kmOneTrip) * Int(costOneKm)
        let countTime = ((kmOneTrip * 2 * countTrip) - kmOneTrip) / speed
        let costOnePax = countMany / countPersons
        return (countMany: countMany, countTime: countTime, costOnePax: costOnePax)
    }
}

class Car: Transport{
    init(){
        super.init(capacity: 4, speed: 80, expenseFuel100Km: 10, costOneLFuel: 50)
    }
}

class Train: Transport{
    init(){
        super.init(capacity: 400, speed: 140, expenseFuel100Km: 7000, costOneLFuel: 2 )
    }
}

class Aircraft: Transport{
    init(){
        super.init(capacity: 150, speed: 900, expenseFuel100Km: 300, costOneLFuel: 50 )
    }
}
let car = Car()
let train = Train()
let aircraft = Aircraft()

let array: [Transport] = [car,train,aircraft]
for i in array{
    let ollTripsParametris: (countMany: Int, countTime: Int, costOnePax: Int) = i.costPerson(2000,1000)
    print("Oll many:", ollTripsParametris.countMany,"rub", "      Oll time:", ollTripsParametris.countTime,"h", "    costOnePax:", ollTripsParametris.costOnePax)
}