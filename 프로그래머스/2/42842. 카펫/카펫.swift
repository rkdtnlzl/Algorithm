import Foundation

func solution(_ brown:Int, _ yellow:Int) -> [Int] {
    let sum = brown + yellow
    for i in 1...Int(sqrt(Double(sum))) {
        if sum % i == 0 {
            let j = sum / i
            if (i - 2) * (j - 2) == yellow {
                return [j, i]
            }
        }
    }
    return []
}