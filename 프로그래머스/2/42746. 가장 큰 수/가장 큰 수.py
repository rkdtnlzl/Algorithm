def solution(numbers):
    answer = ''
    
    numbers_str = [str(i) for i in numbers]
    numbers_str.sort(key=lambda i: i*3, reverse = True)
    
    answer = str(int("".join(numbers_str)))
    
    return answer