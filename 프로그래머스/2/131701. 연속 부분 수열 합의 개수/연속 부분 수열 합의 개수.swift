import Foundation

func solution(_ elements:[Int]) -> Int {
    var result = Set<Int>()
    let long = elements + elements
    
    for idx in 0..<elements.count{
        var num = 0
        for offset in 0..<elements.count{
            num += long[idx+offset]
            result.insert(num)
        }
        num = 0
    }
    return result.count
}
