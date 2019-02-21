class Family{
    var father: Father!
    init(){
    father = Father()
    print("family generated")
    }
    deinit{
        print("family del")
    }
    func printFamily(){
        print("father: \(father.name)")

    }
}

class Father{
    var name: String = "bob"
    var family: Family!
    init(){
         // family = Family()
          print("father generated")
    }
    init(name: String, family: Family){
        self.name = name
        self.family = family
        family.father = self
        print("init father")
    }
    
    deinit{print("father del")}
    
    lazy var printFamily: () -> () = {
        self.family.printFamily()
    }

}


var family: Family! = Family()
//var father: Father! = Father()//(name: "An", family: family)


 //family = nil
// family.printFamily()
//father = nil
//family.printFamily()
//family = nil

//family.father.printFamily()


