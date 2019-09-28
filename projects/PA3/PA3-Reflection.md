PA3 - Reflection

So in this assignment, I converted the vector of string to a vector of integer and then in a for loop
changed the third int to 0. I originally thought I was done, it looked right and I was going to close it.
However, I decided to be safe and go through each number to make sure the correct numbers were switched,
and that is where I noticed the error. The first line grabbed and pushed back was perfect, but when it came
to the second line, it was missing the first zero, which messed up the conversion from whatever number to
zero. It happened each time, and I ended up missing three numbers in the vector. Because those three 
numbers were missing, the entire for loop where I converted the red number to 0 was incorrect.

So, I got together with a classmate, and we tried to figure it out. If you look in my main.cpp you'll
see what I commented out was what we were coming up with to fix the problem. I realized it wasn't
how we were converting, it was when we were reading the file into the vector. the .push_back method was
getting rid of the first data point of each line except the first one. Which is why it looked correct
in the beginning. So, I thought, maybe the .insert method would help. We could insert a zero where the 
first zero is missing and use a for loop to move every 12 to get to the first of each new and just add
a zero. In this case, it would not matter what the original number was because we are changing the red
to zero anyway. However, we could not figure out how to get the .insert to work and scrapped that idea.

In the end, we never figured it out, so I submitted my original work with all the work we put in commented 
out. However, I feel I learned a lot more than if I had gotten it right because my classmate and I
troubleshooted and went through step by step with the break points and figured out where the problem 
existed. So while I didn't exactly complete the assignment fully, I learned more than if I had.

