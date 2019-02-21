class Animals{
    var hand = 0
    var foot = 0
    var head = 1
    var paws = 0
    var water = false
    var sapiens = false
}
class Human: Animals{
    override var hand: Int{
        get{
            return 2
        }
        set{}
    }    
    override var sapiens: Bool{
        get{
            return true
        }
        set{}
    }    
}
class Dog: Animals{
    override var paws: Int{
      get{
         return 4
      }
      set{}
    }  
}
class Giraffe: Animals{
    override var paws: Int{
        get{
            return 4
        }
        set{}
    }    
}
class Crocodil: Animals{
    override var water: Bool{
         get{
             return true
         }
         set{}
    }     
}
class Monkey: Animals{
    override var hand: Int{
        get{
            return 2
        }
        set{}
    }    
}


var man1 = Human()
var man2 = Human()
var dog1 = Dog()
var dog2 = Dog()
var giraffe1 = Giraffe()
var giraffe2 = Giraffe()
var crocodil1 = Crocodil()
var crocodil2 = Crocodil()
var monkey1 = Monkey()
var monkey2 = Monkey()

var animals: [Animals] = [man1,man2,dog1,dog2,giraffe1,giraffe2,crocodil1,crocodil2,monkey1,monkey2]

typealias FourPaws = Animals
typealias BiHand = Animals
//class BiHand: Animals{} не катит
typealias Sapiens = Human

var biHand: [BiHand] = []
var fourPaws: [FourPaws] = []
var crocodils: [Crocodil?] = []
var sapiens: [Sapiens] = []

var countOll = 0
for i in animals{
         // print(i.hand,"  ", i.sapiens, " ", i.paws," ", i)
          switch i{
              case _ where i.sapiens == true : sapiens.append(i as! Sapiens)
                     fallthrough
              case _ where i.hand == 2 : biHand.append(i as! BiHand)
                    //fallthrough
              case _ where i.water == true ://print(i) 
              crocodils.append(i as? Crocodil)
                   //fallthrough
              case _ where i.paws == 4 : fourPaws.append(i as! FourPaws)

              
              default : print("not case")
          }
countOll += 1


    /* if let animal = i as? {
           biHand.append(animal)
     }
     if i.paws == 4{
             fourPaws.append(i as! FourPaws)
     }*/
}
print("двурукиe: \(biHand.count), четырехлапые \(fourPaws.count), разумные \(sapiens.count), крокодилы \(crocodils.count) всего: \(countOll)")
//print(crocodils)




