let chesCell:(String,Int) = ("e" ,3)
if
   (((chesCell.0 == "a" || chesCell.0 == "c" || chesCell.0 == "e" || chesCell.0 == "g")  && chesCell.1 % 2 == 0 )
   || ((chesCell.0 == "b" || chesCell.0 == "d" || chesCell.0 == "f" || chesCell.0 == "h" ) && chesCell.1 % 2 != 0)) && chesCell.1 <= 8
       { print("chesCell \(chesCell) black") }

else if 
   ((chesCell.0 == "a" || chesCell.0 == "c" || chesCell.0 == "e" || chesCell.0 == "g" && chesCell.1 % 2 != 0)
   || (chesCell.0 == "b" || chesCell.0 == "d" || chesCell.0 == "f" || chesCell.0 == "h" && chesCell.1 % 2 == 0)) && chesCell.1 <= 8
       { print("chesCell \(chesCell) white") }  
else
       {(print(" chesCell not exist"))}   
