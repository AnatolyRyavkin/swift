func calculateStatistics(scores: [Int]) -> (min: Int, max: Int, sum: Int) {
    var min = scores[0]
    var max = scores[0]
    var sum = 0
    
    for score in scores {
        if score > max {
            max = score
        } 
       // else
       if
        score < min {
            min = score
        }
       if score == 100 { print("Идивжопу")}
       
         else { print("молодец")
     
     }
        sum += score
    }
    
    return (min, max, sum)
}
let statistics = calculateStatistics(scores: [ 1000, 10,   100])
print(statistics.sum)
print(statistics)


