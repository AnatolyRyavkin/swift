class Family{
    var father: Father!
    var mather: Mather!
    init(){
        father = Father()
        print("family init")
    }
    deinit{
        print("family deinit")
    }
}
class Father{
    var name = "father"
    var mather: Mather!
    init(){
        mather = Mather()
        print("father init")
    }
    deinit{
        print("father deinit")
    }
    lazy var clouser: () -> () = { [unowned self] in print(self.mather.name)}
}
class Mather{
    var name = "mather"
    init(){
         print("mather init")
    }
    deinit{
        print("mather deinit")
    }
}

var family: Family? = Family()
print(family!.father.name)
family?.father.clouser()
family = nil
