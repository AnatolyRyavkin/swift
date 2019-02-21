import Foundation

struct Fale{
    enum Enum{
        case hid
        case op
    }

    var file: String
    
    var text: String
    
    var type: Enum
    
    var name: String{
        get{
        var words: [String] = file.components(separatedBy: "/")
        let fileExt = words.removeLast()//words[words.count - 1]
        let words1: [String] = fileExt.components(separatedBy: ".")
        let exp = words1[1]
        let name = words1[0] 
        //words.removeLast()
        var j = ""
        for i in words{
            j += "\(i)/" 
        }    
        let dir = j    
        return name     
        }
    }
    
    var exp: String{
        get{
        var words: [String] = file.components(separatedBy: "/")
        let fileExt = words.removeLast()//words[words.count - 1]
        let words1: [String] = fileExt.components(separatedBy: ".")
        let exp = words1[1]
        let name = words[0] 
        //words.removeLast()
        var j = ""
        for i in words{
            j += i
        }    
        let dir = j    
        return exp     
        }
    }
    
    var dir: String{
        get{
        var words: [String] = file.components(separatedBy: "/")
        let fileExt = words.removeLast()//words[words.count - 1]
        let words1: [String] = fileExt.components(separatedBy: ".")
        let exp = words1[1]
        let name = words[0] 
        //words.removeLast()
        var j = ""
        for i in words{
            j += "\(i)/"
        }    
        let dir = j     
        return dir
        }
    }
    
    var dir1: String{
        get{
        var words: [String] = file.components(separatedBy: "/")
        let fileExt = words.removeLast()//words[words.count - 1]
        let words1: [String] = fileExt.components(separatedBy: ".")
        let exp = words1[1]
        let name = words[0] 
        //words.removeLast()
        var j = ""
        words.removeLast()
        for i in words{
            j += "\(i)/"
        }    
        let dir = j     
        return dir
        }
    }
    
    
    
    var saze: Int{
        didSet{
             if saze > 1000{
             print("saze biger 1000")
             }   
        }
    }
}

var foto = Fale(file: "C:/mayDocuments/foto/xxxx.pdf", text: "gdmfgmuypoiuytrfghjkjhg", type: Fale.Enum.hid, saze: 100)
print( foto.saze, "    ", foto.name,"   ", foto.dir ,"   ", foto.exp,"    ", foto.dir1, "   ", foto.text,"   ", foto.type) 