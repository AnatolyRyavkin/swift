import Foundation
extension String{
    mutating func insert(range: Range<Int>, text: String){
        let start = range.lowerBound
        let end = range.upperBound 
        let startIndex = self.index(self.startIndex, offsetBy: start)
        let index = self.index(self.startIndex, offsetBy: end)
        //let range = self.index(startIndex, offsetBy: 0)..<index
        let range = startIndex..<index
        self.replaceSubrange(range, with: text)
    }
}
var s = "123456789"
s.insert(range: 1..<6, text: "0000000000000")
print(s)