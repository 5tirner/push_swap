# push_swap

# SORT ALGORITHM

This is a C program that sorts a list of numbers into ascending order by following these moves:\
- `sa` (swap a): Swap the first 2 elements at the top of stack a.\
Do nothing if there is only one or no elements.
- `sb` (swap b): Swap the first 2 elements at the top of stack b.\
Do nothing if there is only one or no elements.
- `ss` : sa and sb at the same time.
- `pa` (push a): Take the first element at the top of b and put it at the top of a.\
Do nothing if b is empty.
- `pb` (push b): Take the first element at the top of a and put it at the top of b.\
Do nothing if a is empty.
- `ra` (rotate a): Shift up all elements of stack a by 1.\
The first element becomes the last one.
- `rb` (rotate b): Shift up all elements of stack b by 1.\
The first element becomes the last one.
- `rr` : ra and rb at the same time.
- `rra` (reverse rotate a): Shift down all elements of stack a by 1.\
The last element becomes the first one.
- `rrb` (reverse rotate b): Shift down all elements of stack b by 1.\
The last element becomes the first one.
- `rrr` : rra and rrb at the same time.

The project is designed specifically to sort lists from 1 to 500 numbers, but can be modified to sort lists of different sizes.

The work in this project was divided into five sections:\
two-digit order, three-digit, four-digit, five-didgit and section to sort from one-hundred to five-hundred numbers.

* `for sort 2-nbr`:

just compare the first and second number in the list if the first is greater than the second, i will use `sa`.

* `for sort 3-nbr` the program use just one list `head`:

-> go-to `swap_three_five.c` file in my push_swap project you will find a function that named `sawp_three`.\
The function takes in a pointer to a linked list (head) and sorts the first three elements of the list in ascending order.\
The function first checks the current order of the three elements and performs specific swapping and rotation operations\
`(e.g. swap_a_algo, rotate_a_algo, rev_rotate_a_algo)`to put the elements in ascending order.\
The function uses multiple if-else statements to handle different scenarios of the element order.\
The purpose of this function is to help sort a larger list of integers by rearranging small portions of the list in a specific order.

* `for sort 4-nbr` the programe use the two list `head` `head2`:

-> go-to `swap_three_five.c` file in my push_swap project you will find a function that named `swap_four`.\
you just need to find the small one and push it to `head2` or `stack_b` then apply `swap_three` for `stack_a`.\
finally push the small one to `stack_a`.

* `for sort 5-nbr` the programe use the two list `head` `head2`:

-> go-to `swap_three_five.c` file in my push_swap project you will find a function that named `swap_five`.\
just like what do you do in `swap_four`, but you need to sent the big number first to `satck_b` and then send the samll onr to `satck_b`.\
after you apply `swap_three` on your `stack_a` do `pa` two time, then `ra` to sent the bigger to the bottum of `satck_a`.

* `from 100 to 500 hundred number`:

-> go-to `swap_hundred.c` file.\
inside of this file the program utilizes two linked lists, `head and head2`, to keep track of the unsorted and sorted numbers respectively.\
The from_head_to_head2 function moves numbers from head to head2 based on their value compared to a set range.\
The big_to_top function moves the largest number in head2 to the top of the list.

->go-to `from_head_to_head2` function, this function do most of the work:\

The function from_head_to_head2 takes in three parameters:\
`t_list **head: a pointer to a pointer to the head of a linked list`\
`t_list **head2: a pointer to a pointer to the head of another linked list`\
`int *arr (sort array): an array of integers`\
`int range: an integer value`\
The function moves elements from the first linked list (head) to the second linked list (head2),\
based on the values of the elements in the array (arr) and the range value.\
If the current element in the first linked list (*head) is less than or equal to the current value in the array (arr[i]),\
it is pushed onto the second linked list (head2) and the head of the second linked list is rotated.\
If the current element in the first linked list is greater than arr[i] but less than or equal to arr[range + i],\
it is also pushed onto the second linked list and the size of the second linked list is checked.\
If the size is greater than one and the current head of the second linked list is smaller than the next element,\
then a swap is performed on the second linked list. If neither of these conditions are met,\
the head of the first linked list is rotated.\
The process continues until all elements have been transferred from the first linked list to the second linked list.

-> now if you go-to `hundreds` function in the same file you will find a loop, this loop it will works until the `head2` become vide.\
it just take the big element in the `head2` and push it to head_2.
