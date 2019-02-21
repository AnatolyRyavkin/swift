class Family{
    var mather: Mather!
    weak var father: Father!
    var children: [Child] = [] 
    init(){
    print("family generated")
    }
    deinit{
        print("family del")
    }
    func printFamily(){
        print("father: \(father.name), mather: \(mather.name)")
        var j = 1
        for i in children{
           print("child\(j): \(i.name)")
           j += 1
        }   
    }
}

class Mather{
    let name: String
    let family: Family
    init(name: String, family: Family){
        self.name = name
        self.family = family
        family.mather = self
        print("mather generated")
    }
    deinit{print("mather del")}
}

class Father{
    var name: String
    unowned var family: Family
    init(name: String, family: Family){
        self.name = name
        self.family = family
        family.father = self
        print("father generated")
    }
    deinit{print("father del")}
    
    lazy var printFamily: () -> () = {[unowned self] in
        self.family.printFamily()
    }
    lazy var printMather = {[unowned self] in
        print("mather: \(self.family.mather.name)")
    }
    func printChild(){ 
        var j = 1
        for i in family.children{()
           print("child\(j): \(i.name)")
           j += 1
        }   
    }
}

class Child{
    var name: String
    unowned var family: Family
    init(name: String, family: Family){
        self.name = name
        self.family = family
        family.children.append(self)
        print("\(self.name) child №\(family.children.count) generated")
    }
    deinit{
       print("\(self.name) child  del")
    }    
    func game(){
        print("Mather \(family.mather.name) giv my play")
    }
    func child(childCount: Int){
        print("Hello \(family.children[childCount].name)")
    }
}
//var closure: () -> ()
//if true{
//var closure: () -> ()
var family: Family? = Family()
let father = Father(name: "An", family: family!)
let mather  = Mather(name: "Jan", family: family!)
let child1 = Child(name: "Nik", family: family!)
let child2 = Child(name: "Bob", family: family!)
//father.printChild()
//father.printFamily()
//()family.printFamily
//closure = {[unowned family] in print(family.mather.name)}
//closure()    [unowned family] 
//father.printMather()
//}
family = nil
//father.printFamily()




