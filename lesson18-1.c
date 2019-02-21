class Artist{
    var name: String
    var surName: String
    func performance(){}
    init(name: String, surName: String){
        self.name = name
        self.surName = surName
    }
}
class Dancer: Artist{
    override func performance(){
        print("Dances")
    }
}
class Singer: Artist{
    override func performance(){
        print("Sing")
    }

}
class Draftsman: Artist{
    override func performance(){
        print("Draws")
    }
    override var name: String{
        get{
           return "Way"  
        }
        set{}
    }
    override var surName: String{
        get{
           return "Bravo"
        }
        set{}
    }
}

let dancer = Dancer(name: "Max", surName: "Maxov")
let singer = Singer(name: "Nil", surName: "Nilov")
let draftsman = Draftsman(name: "Nic", surName: "Safronov")
let array: [Artist] = [dancer,singer,draftsman]
for i in array{
    print(i.name)
    print(i.surName)
    i.performance()
}