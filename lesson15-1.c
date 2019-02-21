struct File{
    enum TypeFile{
        case hid
        case nothid
    }
    let name: String
    
    var wayFile: String{
        get{
        var wayFile = wayDir + "/" + name
        return wayDir
        }
    }    
    
    var wayDir: String
    
    static let maxSize = 100
    
    let type: TypeFile 
    
    var contextFile: String
}
var foto = File(name: "foto.pdf", wayDir: "C:/MayComputer/Foto", type: File.TypeFile.hid, contextFile: "aaaaaaaaaaaaaaaaabbbbbbbbbbbbb")
print(foto.wayFile)