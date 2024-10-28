import Foundation

func solution(_ s:String) -> Bool {
    var ans:Bool = false
    var tempArr: [String] = []

    for bracket in s {
        if !tempArr.isEmpty && tempArr[tempArr.endIndex - 1] == "(" && bracket == ")" {
            tempArr.removeLast()
        } else {
            tempArr.append(String(bracket))
        }
    }

    ans = tempArr.isEmpty ? true : false
    
    return ans
}