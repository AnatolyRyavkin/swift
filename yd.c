class A{
    var b: Int? = nil
    convenience init(b: Int){
        self.init()
        self.b = b
    }
    //init(){
    //    self.b = nil
    //}
}
var a = A()
print(a.b)