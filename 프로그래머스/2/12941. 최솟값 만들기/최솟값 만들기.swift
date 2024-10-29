import Foundation

func solution(_ A:[Int], _ B:[Int]) -> Int
{
    var ans = 0
    var n = A.count
    
    var A = A.sorted(by: { $0 < $1 })
    var B = B.sorted(by: { $1 < $0 })
    
    for i in 0..<n {
        ans += A[i] * B[i]
    }
    return ans
}