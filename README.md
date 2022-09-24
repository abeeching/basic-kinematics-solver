# basic-kinematics-solver
[FALL 2019] - A basic 2D kinematics equation solver. First project-based program made at FPU; decided to upload for posterity's sake.

## Preface:
I am beginning to upload a variety of projects from my time at FPU (better late than never, right?), and I decided to start with this one just to see how far I've come since then.

## Introduction:
In Fall 2019, I was tasked to create a program that could be used to help solve problems from my coursework; the idea of the project was to demonstrate the applications of programming. I was taking Physics I at the time, so I figured I could create a program that would solve some basic motion problems. It only solves problems in one dimension (e.g. you're unable to input vectors with x- and y-components), but it allows you to find acceleration, velocity, and position given that you know other information).

This was a collaborative project, but unfortunately I do not have the GitHub details of my collaborators at this time.

## How to Use:
The .c file will have to be downloaded and compiled manually; I never did compile this into a proper executable because I was running it exclusively from CodeBlocks, my code editor at the time, so it did all the work for me.

If you want to copy this repository to your computer, navigate to the directory you want to clone it into on the command line and type this:
```
git clone https://github.com/abeeching/basic-kinematics-solver
```

Then if you want to compile this yourself:
```
gcc basic-kinematics-solver.c -o basic-kinematics-solver.exe
```

Using this is pretty straightforward, since the instructions are given within the program itself. This program lets you solve five basic kinematics problems:
1. Find acceleration given an initial time, a final time, and a velocity.
2. Find acceleration given an initial position, a final position, and a velocity.
3. Find final velocity given an initial position, a final position, initial velocity, and acceleration.
4. Find final velocity given an initial time, a final time, initial velocity, and acceleration.
5. Find final position given an initial time, a final time, initial velocity, acceleration, and an initial position.

When you start this program, you'll be prompted to select a number 1-7 that corresponds with the conditions given for the problem you're trying to solve. From there, you'll be prompted to Selecting option 6 prints out some information about the program itself, noting that the program itself cannot solve all kinematics problems--particularly those involving initial or final time/position.

Selecting option 7 allows you to end the program, and pressing any key after that exits the program.

## Reflections:
Wow, coming back to a freshman-year project after working on a larger application for a full year makes for an... interesting experience. I'm certainly not calling myself an full-fledged expert programmer; I've definitely made some significant mistakes even in my most recent project, but I know a lot more than I did coming into university.

I find it interesting that we decided to write separate functions that solved each problem type, even though we placed everything into different switch cases. I would say that this is because we needed to meet some quota for the number of topics we needed to incorporate from the course (as evidenced by the overview document), but we already *had* code that was repeated at multiple places in the program: the code to calculate differences in time and position! If we needed functions, we could have used those. I'm guessing we didn't since it was easier to type out the operations, but I now realize that, if we messed up and made the same mistake every time we typed in that line of code, we would have to go back and correct every instance of that mistake. It would be easy to do in a small program like this one, but in a larger-scale program that would be complete agony.

I also found it interesting that I limited the program's scope to one-dimensional kinematics. According to the date on this program (October of that semester), I feel like I would have already learned enough about two-dimensional kinematics to be able to create some problem-solver for that. I guess it was easier to stick to one-dimensional kinematics--I don't recall if my collaborators were taking Physics I or not. Creating a 2D kinematics solver that can also solve the problems this couldn't might make for an interesting challenge though, so I might look into throwing that together sometime.

I also feel like the structure of the program could be better, though to be fair, this *was* in C and we didn't have access to, say, optional arguments for functions and such (as I was writing this, I was thinking that we could use a general function that takes all the parameters the user supplies and solves different problems depending on which parameters were and weren't given. That might make for a more complex program design though... hmm.).

Also, a slightly-irrelevant fun fact: I remembered that we never actually learned how to properly debug in this class. At least, I remember the topic of debugging being deferred to my *third* programming course... which was an advanced programming course. Not to rag on my professor(s) but some discussion of how debugging tools work would've been nice; it would have saved me *so much headache.*

All in all, I can't rag on this program too much. It was the very first program in which I was given freedom to throw together some solution. Everyone's gotta start somewhere, right?

**Additional Documents:
The original design document submitted for the assignment: [Basic Kinematics Solver Write-up.pdf](https://github.com/abeeching/basic-kinematics-solver/files/9637864/Basic.Kinematics.Solver.Write-up.pdf)
