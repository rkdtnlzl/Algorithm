import Foundation

func solution(_ n:Int) -> Int
{
    var result: Int = n + 1

    while result <= Int.max {
        if n.nonzeroBitCount == result.nonzeroBitCount {
            break
        }

        result += 1
    }

    return result
}