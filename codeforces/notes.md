## 1703b - ICPC Balloons
My first solved exercise on Codeforces! Yay.
Extremely easy. Most of the time I took was learning the basic syntax for C++.
I had no idea that there are basic optimizations that can be used to speed up basic
io functionality. I'll build a basic template file, and I'll use it going forward.

I did use a map for my solution, but a much better solution would be to use an array
of 26 elements (to keep track of solved problems from A to Z).

# 1760C - Advantage
Still, logically very simple. Again, mostly struggles with C++, nothing out of the
ordinary. I used a vector for my solution to store the list of the participant's
strenghts, and actually was stumped for a bit on why nothing was working when I was
using `int[n]`, where n was an int recovered from `std::cin`. It seem that on G++,
it's allowed to do that, only if `n` is initialized and set right before it.
Obviously, since my `n` was not constant, the array wasn't properly set up.
Nothing else of note other than that.
