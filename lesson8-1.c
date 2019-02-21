var schoolMagazine: [String:Int] = [:]
print("Magazins:", schoolMagazine)
schoolMagazine = ["Petrov" : 5 , "Ivanov" : 3]
print("Magazins:", schoolMagazine)
schoolMagazine["Vasehkin"] = 4
print("Magazins:", schoolMagazine)
schoolMagazine["Ivanov"] = 4
print("Magazins:", schoolMagazine)
schoolMagazine["Petrov"] = nil
print("Magazins:", schoolMagazine)
//countryDict.countryDict.removeValue "Беларусь"(forKey: "BEL")
print(schoolMagazine.removeValue(forKey: "Ivanov")!)
print("Magazins:", schoolMagazine)
print(schoolMagazine.updateValue(5, forKey: "Ryavkin"))
print("Magazins:", schoolMagazine)
var totalScore = 0
var n = 0
for (i,j) in schoolMagazine
{totalScore += (j)
n += 1
print(n," forKey=",i,"          Value=",j)
}
let averageScore: Double = Double(totalScore)/Double(n)
print("totalScore=\(totalScore)\naverageScore=\(averageScore)")