import Foundation

func solution(_ k:Int, _ m:Int, _ score:[Int]) -> Int {
    
    var score = score.sorted(by:>) 
    var emptyArray = Array(repeating:0, count:m)
    var count = 0
    var result = 0
    
    for i in 0..<(score.count / m) * m{
        emptyArray[count] = score[i]
        count += 1
        if count == m{
            result = result + (emptyArray[m-1] * m)
            count = 0
        }
    }
    
    return result
}