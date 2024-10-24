func solution(_ s:String) -> String {
  let strArr = s.split(separator: " ")
  var numberArray: [Int] = []
  
  for index in strArr {
    guard let number = Int(index) else { return " " }
    numberArray.append(number)
  }
  
  return "\(numberArray.min()!) \(numberArray.max()!)"
}