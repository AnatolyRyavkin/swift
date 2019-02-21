var array:[Int] = [1,3,8,25,6]
print(array)
print(array.sorted(by: > ))
print(array)
array = [1,44,81,4,277,50,101,51,8]
print(array)
var sortedArray = array.sorted(by: <)
print(sortedArray)
array = [-100,100,0,20,3,9,-5,10,11,-10]
print(array)
print(array.sorted(by: {
print("сортировка $0=\($0) S1=\($1)")
return $0 < $1
}))

