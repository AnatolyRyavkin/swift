enum AnimalName{
    case Cat
    case Dog
    case Parrot
    case Crocodile
    case Rat
}
class Animal{
    let name: AnimalName
    init(name: AnimalName){
        self.name = name
    }
    func cru(){
        print(" I  \(self.name)")
    }
}

class Cat: Animal{
    init(){
        super.init(name: AnimalName.Cat)
    }
    override func cru(){
        super.cru()
        print("myau")
    }
}
class Dog: Animal{
    init(){
        super.init(name: AnimalName.Dog)
    }
    override func cru(){
        super.cru()
        print("gaf")
    }
} 
class Parrot: Animal{
    init(){
        super.init(name: AnimalName.Parrot)
    }
    override func cru(){
        super.cru()
        print("arrr")
    }
} 
class Crocodile: Animal{
    init(){
        super.init(name: AnimalName.Crocodile)
    }
    override func cru(){
        super.cru()
        print("rrrrrrrrrrr")
    }
}
class Rat: Animal{
    init(){
        super.init(name: AnimalName.Rat)
    }
    override func cru(){
        super.cru()
        print("pipipi")
    }
} 

let cat = Cat()
let dog = Dog()
let parrot = Parrot()
let crocodile = Crocodile()
let rat = Rat()

class Human{
    let name: String
    var mather: Women?
    var father: Man?
    var brother: [Man]?
    var sister: [Women]?
    var animal: [Animal]?
    init(_ name: String){
        self.name = name
    }
}
class Man: Human{
    func dd(){
        print("dd")
    }
}
class Women: Human{
    func atdd(){
        print("atdd")
    }
}

let valera = Man("Valera")
valera.animal = [cat,crocodile]
let raya = Women("Raya")
raya.animal = [cat]
let vova = Man("Vova")
let tanya = Women("Tanya")
tanya.animal = [cat]
let tanya1 = Women("Tanya1")
tanya1.animal = [cat, parrot]
let mihsa = Man("Mihsa")
mihsa.animal = [cat,crocodile]
let any = Women("Any")
any.animal = [cat,rat,parrot,dog]
let sasha2 = Man("Sasha2")
sasha2.animal = [cat,rat,parrot,dog]
let sasha = Man("Sasha")
sasha.animal = [cat,rat,parrot,dog,crocodile]
let julia = Women("Julia")
julia.animal = [cat,rat,parrot,dog,crocodile]
let oleg = Man("Oleg")
oleg.animal = [cat,rat,parrot,dog,crocodile]
let anat = Man("Anat")
anat.animal = [cat,rat,parrot,dog]
let kat = Women("Kat")
kat.animal = [cat,crocodile]
let vitya = Man("Vitya")
vitya.animal = [cat,dog,crocodile]
let olya = Women("Olya")
olya.animal = [cat,rat,parrot]
let lesha = Man("Lesha")
lesha.animal = [cat,crocodile]
let katy1 = Women("Katy1")
let nadya = Women("Nadya")
nadya.animal = [cat]
let andrey = Man("Andrey")
andrey.animal = [cat,crocodile]
let ilya = Man("Ilya")
ilya.animal = [cat,rat]
let tema = Man("Tema")
tema.animal = [cat,rat,parrot,dog,crocodile]
let andrey1 = Man("Andrey1")
let dasha = Women("Dasha")
dasha.animal = [cat,dog,crocodile]
let denis = Man("Denis")
denis.animal = [cat,rat,parrot,dog]
let sashaW = Women("SashaW")
sashaW.animal = [cat,rat,parrot,dog,crocodile]
let alex = Man("Alex")
let valya = Women("Valya")

let family: [Human] = [alex,valya,dasha,denis, sashaW,andrey1,tema,ilya,nadya,valera,raya,vova,tanya,tanya1,mihsa,any,sasha2,sasha,julia,oleg,anat,kat,vitya,olya,lesha,katy1,andrey]

tanya1.mather = valya
tanya1.father = alex
vitya.mather = valya
vitya.father = alex
nadya.father = alex
nadya.mather = valya
dasha.father = sasha
dasha.mather = sashaW
dasha.brother = [denis]
denis.father = sasha
denis.mather = sashaW
denis.sister = [dasha]
ilya.mather = olya
ilya.father = andrey1
ilya.brother = [tema]
tema.mather = olya
tema.father = andrey1
tema.brother = [ilya]
julia.mather = kat
julia.father = anat
julia.brother = [oleg]
oleg.father = anat
oleg.mather = kat
oleg.sister = [julia]
kat.mather = raya
kat.father = valera
kat.sister = [tanya]
tanya.sister = [kat]
tanya.father = valera
tanya.mather = raya
anat.mather = tanya1
anat.father = vova
anat.brother = [sasha]
sasha.mather = tanya1
sasha.father = vova
sasha.brother = [anat]
vova.brother = [valera]
valera.brother = [vova]
mihsa.brother = [sasha2]
mihsa.sister = [any]
mihsa.father = andrey
mihsa.mather = tanya
any.father = andrey
any.mather = tanya
any.brother = [mihsa]
any.brother? += [sasha2]
sasha2.sister = [any]
sasha2.brother = [mihsa]
sasha2.mather = tanya
sasha2.father = andrey
vitya.sister = [tanya1]
tanya1.brother = [vitya]
nadya.brother = [vitya]
nadya.sister = [tanya1]
vitya.sister? += [nadya]
tanya1.sister = [nadya]
olya.mather = katy1
olya.father = vitya
olya.brother = [lesha]
lesha.mather = katy1
lesha.father = vitya
lesha.sister = [olya]

func countKindred(_ human: Human) -> (Int,Int,Int,Int,Int,Int,Int,Int){
     var countBrother: Int = 0
     var countSister = 0
     var countCousin = 0
     var countCousinSister = 0
     var countSecondCousin = 0
     var countCousinSisterSecond = 0
     var countUncle = 0
     var countAunt = 0
     if let a = human.brother{
         countBrother = a.count
     }
     if let a = human.sister{
         countSister = a.count
     }
//////////////////////////////////////////////////////////////////////////////////////////////

     if human.father?.brother != nil{
        for i in  (human.father?.brother)!{
            countUncle += 1
            var h = 0
            var h1 = 0
            for j in family{
               if j.father === i && j is Man{
                   countCousin += 1
                   h += 1
                   if j.mather?.brother != nil && h == 1{
                      for a in (j.mather?.brother)!{
                          for b in family{
                              if b.father === a && b is Man{
                                  countSecondCousin += 1
                              }
                              else if b.father === a && b is Women{
                                  countCousinSisterSecond += 1
                              }
                           }
                      }
                   }
               }
               else if i === j.father && j is Women{
                   countCousinSister += 1
                   h1 += 1
                   if j.mather?.sister != nil && h1 == 1{
                      for a in (j.mather?.sister)!{
                          for b in family{
                              if b.mather === a && b is Man{
                                  countSecondCousin += 1
                              }
                              else if b.mather === a && b is Women{
                                  countCousinSisterSecond += 1
                              }
                          }
                      }
                   }
               }
            }            
        }
     }
     
///////////////////////////////////////////////////////////////////////////////////////////////////// 

     if human.father?.sister != nil{
        for i in  (human.father?.sister)!{
            var h = 0
            var h1 = 0
            countAunt += 1
            for j in family{
               if i === j.mather && j is Man{
                   countCousin += 1
                   h += 1
                   if j.father?.brother != nil && h == 1{
                      for a in (j.father?.brother)!{
                          for b in family{
                              if b.father === a && b is Man{
                                  countSecondCousin += 1
                              }
                              else if b.father === a && b is Women{
                                  countCousinSisterSecond += 1
                              }
                           }
                      }
                   }
               } 
               else if i === j.mather && j is Women{
                   countCousinSister += 1
                   h1 += 1
                   if j.father?.sister != nil && h1 == 1{
                      for a in (j.father?.sister)!{
                          for b in family{
                              if b.mather === a && b is Man{
                                  countSecondCousin += 1
                              }
                              else if b.mather === a && b is Women{
                                  countCousinSisterSecond += 1
                              }
                          }
                      }
                   }
               }
            }            
        }
     }
//////////////////////////////////////////////////////////////////////////////////////////////

     if human.mather?.brother != nil{
        for i in  (human.mather?.brother)!{
            countUncle += 1
            var h = 0
            var h1 = 0
            for j in family{
               if i === j.father && j is Man{
                   countCousin += 1
                   h += 1
                   if j.mather?.brother != nil && h == 1{
                      for a in (j.mather?.brother)!{
                          for b in family{
                              if b.father === a && b is Man{
                                  countSecondCousin += 1
                              }
                              else if b.father === a && b is Women{
                                  countCousinSisterSecond += 1
                              }
                           }
                      }
                       
                   }
               }
               else if i === j.father && j is Women{
                   countCousinSister += 1
                   if j.mather?.sister != nil && h1 == 1{
                      for a in (j.mather?.sister)!{
                          for b in family{
                              if b.mather === a && b is Man{
                                  countSecondCousin += 1
                              }
                              else if b.mather === a && b is Women{
                                  countCousinSisterSecond += 1
                              }
                          }
                      }
                   }
               }
            }            
        }
     }
//////////////////////////////////////////////////////////////////////////////////////

     if human.mather?.sister != nil{
        for i in  (human.mather?.sister)!{
            countAunt += 1
            var h = 0
            var h1 = 0
            for j in family{
               if i === j.mather && j is Man{
                   countCousin += 1
                   h += 1
                   if j.father?.brother != nil && h == 1{
                      for a in (j.father?.brother)!{
                          for b in family{
                              if b.father === a && b is Man{
                                  countSecondCousin += 1
                              }
                              else if b.father === a && b is Women{
                                  countCousinSisterSecond += 1
                              }
                           }
                      }
                       
                   }
               } 
               else if i === j.mather && j is Women{
                   countCousinSister += 1
                   h1 += 1
                   if j.father?.sister != nil && h1 == 1{
                      for a in (j.father?.sister)!{
                          for b in family{
                              if b.mather === a && b is Man{
                                  countSecondCousin += 1
                              }
                              else if b.mather === a && b is Women{
                                  countCousinSisterSecond += 1
                              }
                          }
                      }
                       
                   }
               }
            }            
        }
     }

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

///////////////         at grandFather , grandFather           ////////////////////////////


    if let grandFatherSecond = human.father?.mather?.brother{
         for i in grandFatherSecond{
             for j in family{
                 if j.father === i  {
                     for k in family{
                         if (k.father === j || k.mather === j) && k is Man{
                             countSecondCousin += 1
                         }
                         else if (k.father === j || k.mather === j) && k is Women{
                             countCousinSisterSecond += 1
                         }
                     }
                 }
             }
         }
         
     }  
     
/////////////////////////////////////////////////////////////////////////////////

     if let grandMatherSecond = human.father?.mather?.sister{
         for i in grandMatherSecond {
             for j in family{
                 if j.mather === i {
                     for k in family{
                         if (k.father === j || k.mather === j) && k is Man{
                             countSecondCousin += 1
                         }
                         else if (k.father === j || k.mather === j) && k is Women{
                             countCousinSisterSecond += 1
                         }
                     }
                 }
             }
         }
         
     }
//////////////////////////////////////////////////////////////////////////////////////////

       if let grandMatherSecond  = human.father?.father?.sister{
         for i in grandMatherSecond {
             for j in family{
                 if j.mather === i {
                     for k in family{
                         if (k.father === j || k.mather === j) && k is Man{
                             countSecondCousin += 1
                         }
                         else if (k.father === j || k.mather === j) && k is Women{
                             countCousinSisterSecond += 1
                         }
                     }
                 }
             }
         }
         
     }
//////////////////////////////////////////////////////////////////////////////////////////////////////

  if let grandFatherSecond = human.father?.father?.brother{
         for i in grandFatherSecond{
             for j in family{
                 if j.father === i {
                     for k in family{
                         if (k.father === j || k.mather === j) && k is Man{
                             countSecondCousin += 1
                         }
                         else if (k.father === j || k.mather === j) && k is Women{
                             countCousinSisterSecond += 1
                         }
                     }
                 }
             }
         }
         
     }
     
     
     /////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

     if let grandMatherSecond  = human.mather?.mather?.sister{
         for i in grandMatherSecond {
             for j in family{
                 if j.mather === i {
                     for k in family{
                         if (k.father === j || k.mather === j) && k is Man{
                             countSecondCousin += 1
                         }
                         else if (k.father === j || k.mather === j) && k is Women{
                             countCousinSisterSecond += 1
                         }
                     }
                 }
             }
         }
         
     }
     
         if let grandFatherSecond = human.mather?.mather?.brother{
         for i in grandFatherSecond{
             for j in family{
                 if j.father === i {
                     for k in family{
                         if (k.father === j || k.mather === j) && k is Man{
                             countSecondCousin += 1
                         }
                         else if (k.father === j || k.mather === j) && k is Women{
                             countCousinSisterSecond += 1
                         }
                     }
                 }
             }
         }
         
     }
//////////////////////////////////////////////////////////////////////////////////////////

       if let grandMatherSecond  = human.mather?.father?.sister{
         for i in grandMatherSecond {
             for j in family{
                 if j.mather === i {
                     for k in family{
                         if (k.father === j || k.mather === j) && k is Man{
                             countSecondCousin += 1
                         }
                         else if (k.father === j || k.mather === j) && k is Women{
                             countCousinSisterSecond += 1
                         }
                     }
                 }
             }
         }
         
     }
//////////////////////////////////////////////////////////////////////////////////////////////////////

  if let grandFatherSecond = human.mather?.father?.brother{
         for i in grandFatherSecond{
             for j in family{
                 if j.father === i {
                     for k in family{
                         if (k.father === j || k.mather === j) && k is Man{
                             countSecondCousin += 1
                         }
                         else if (k.father === j || k.mather === j) && k is Women{
                             countCousinSisterSecond += 1
                         }
                     }
                 }
             }
         }
         
     }
////////////////////////////////////////////////////////////////////////////////////////     
    
    return (countBrother, countCousin, countSecondCousin, countSister, countCousinSister, countCousinSisterSecond, countUncle, countAunt)
}

for i in family{
     print("--------------------------------------------------------")
     print(i.name)
     if let men = i as? Man{
            print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@")
            men.dd()
            print("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@")
     }
     if i is Women{
             print("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&")
            (i as! Women).atdd()
             print("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&")
     }
     let arrKindred = countKindred(i)
     print()
     print(i.name, "  have kindred: ")
     print("---------------------------------")
     print("count Brother: \(arrKindred.0)")
     print("count Sister: \(arrKindred.3)")
     print("count Uncle:  \(arrKindred.6)")
     print("count Aunt:  \(arrKindred.7)")
     print("count Cousin:  \(arrKindred.1)")
     print("count Cousin Sister:  \(arrKindred.4)")
     print("count Cousin Second:  \(arrKindred.2)")
     print("count Cousin Sister Second: \(arrKindred.5)")
     if let animals = i.animal{
        var j1 = 0
        for i1 in animals{
           j1 += 1
           print("animal №\(j1): ", i1.name)
        }
     } 
     else{
     print("animal not")
     }
     print("---------------------------------")

}
var arrayAnimal: [Animal] = []

for i in family{
    if let animals = i.animal{
        for j in animals{
            arrayAnimal.append(j)
        }
    }
}

var countCat = 0
var countDog = 0
var countParrot = 0
var countCrocodile = 0
var countRat = 0

for i in arrayAnimal{
    switch i{
        case is Cat: countCat += 1
             i.cru()
        case is Dog: countDog += 1
             i.cru()
        case is Parrot: countParrot += 1
             i.cru()
        case is Crocodile: countCrocodile += 1
             i.cru()
        case is Rat: countRat += 1
             i.cru()
        default: print("?")
    }
}
print("******************************")
print("oll animal: ", arrayAnimal.count)
print("cat: ", countCat)
print("dog: ", countDog)
print("parrot: ", countParrot)
print("crocodile: ", countCrocodile)
print("Rat: ", countRat)






