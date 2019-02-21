let man = ("ivanov",25)
switch man{ 
     case let(i,a) where a <= 16 : print("children",a,i)
     case let(i,a) where a > 16 && a <= 60 : print("man",a,i)
     case let(i,a) where a > 60 : print("old",a,i) 
     default: break
}
     
           
