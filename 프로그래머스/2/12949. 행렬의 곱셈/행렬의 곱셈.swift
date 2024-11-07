import Foundation

func solution(_ arr1:[[Int]], _ arr2:[[Int]]) -> [[Int]] {
    
    var sumArray = [Int]()
    var resultArray = [[Int]]()
    for i in 0..<arr1.count{
        for k in 0..<arr2[0].count{
            var sum = 0
            for p in 0..<arr2.count{
                sum += arr1[i][p] * arr2[p][k]
            }
            sumArray.append(sum)
        }
        resultArray.append(sumArray)
        sumArray.removeAll()
    }
    return resultArray
}