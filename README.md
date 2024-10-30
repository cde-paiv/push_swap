# Push Swap

"In this project, I will sort data within a stack using a limited set of instructions, aiming to minimize the number of actions required.
To achieve this, I'll explore different algorithms and select the most efficient solution from multiple options to optimize data sorting." 

</br>

<img src="./image/push_image.png">

</br>

## Instruction set

For the following instructions, if the instruction is not possible, the part of
it that can't be executed won't.
The goal is to sort in ascending order, numbers into stack a. You can only use 2 stacks (a and b). 

| Code  | Instruction                         | Action                                                 |
| ----- | ----------------------------------- | ------------------------------------------------------ |
| `sa`  | swap a                              | swaps the 2 top elements of stack a                    |
| `sb`  | swap b                              | swaps the 2 top elements of stack b                    |
| `ss`  | swap a + swap b                     | both `sa` and `sb`                                     |
| `pa`  | push a                              | moves the top element of stack b at the top of stack a |
| `pb`  | push b                              | moves the top element of stack a at the top of stack b |
| `ra`  | rotate a                            | shifts all elements of stack a from bottom to top      |
| `rb`  | rotate b                            | shifts all elements of stack b from bottom to top      |
| `rr`  | rotate a + rotate b                 | both `ra` and `rb`                                     |
| `rra` | reverse rotate a                    | shifts all elements of stack a from top to bottom      |
| `rrb` | reverse rotate b                    | shifts all elements of stack b from top to bottom      |
| `rrr` | reverse rotate a + reverse rotate b | both `rra` and `rrb`                                   |

## Push Swap Demo

</br>

<img src="./image/push_swap_video.mp4">

</br>

