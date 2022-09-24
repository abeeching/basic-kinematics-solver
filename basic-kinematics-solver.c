#include <stdio.h>
#include <stdlib.h>
#include <math.h> // will be needed for power and square root functions

// initialization of all relevant variables to be used in function
double initialTime, finalTime, initialPos, finalPos, initialVelocity, finalVelocity, acceleration = 0;

// function prototypes for all functions used in this program
double velocityWithPos(double, double, double);
double velocityWithTime(double, double, double);
double accelerationWithPosition(double, double, double);
double accelerationWithTime(double, double, double);
double position(double, double, double, double);

// main function
int main() {
	int menu; // to mark character
	double changeTime = 0;
    double changePos = 0;
	do { // beginning of do-while loop
		system("cls"); // used to clear up any previous work and in all subsequent switch cases
		printf("Kinematic Equation Solver\n");
		printf("----------------------------------\nType the number of what you want to do.\n"); // menu starts here & choices listed
		printf("1. I know the initial and final times and velocity. I want to find acceleration.\n");
		printf("2. I know the initial and final positions and velocity. I want to find acceleration.\n");
		printf("3. I want to find the final velocity, and I know position and acceleration.\n");
		printf("4. I want to find the final velocity, and I know time and acceleration.\n");
		printf("5. I want to find the final position of an object.\n");
		printf("6. I would like some general information.\n");
		printf("7. I want to exit the program.\n");
        scanf("%d", &menu);

        switch (menu) { // beginning of switch
        	case 1:
        	    system("cls");
            	printf("Enter initial time: \n"); //user enters variable for initial time
            	scanf("%lf", &initialTime); //saves variable as a double to initialTime
            	printf("Enter final time: \n"); //user enters variable for initial time
            	scanf("%lf", &finalTime);//saves variable as a double to finalTime
            	changeTime = finalTime - initialTime; // calculate change in time
            	printf("Enter initial velocity: \n"); //user enters variable for initial velocity
            	scanf("%lf", &initialVelocity);//saves variable as a double to initialVelocity
            	printf("Enter final velocity: \n"); //user enters variable for initial velocity
            	scanf("%lf", &finalVelocity);//saves variable as a double to finalVelocity
            	// determines acceleration by passing values to accelerationWithTime - see below function
            	printf("The acceleration is %lf\n", accelerationWithTime(changeTime, initialVelocity, finalVelocity));
            	system("pause"); // pause input to allow user to read - used in all subsequent cases
            	break; //end case a

        	case 2:
        	    system("cls");
            	printf("Enter initial position: \n"); //user enter variable for initial position
            	scanf("%lf", &initialPos);//saves variable as a double to initialPos
            	printf("Enter final position: \n"); //user enter variable for initial position
            	scanf("%lf", &finalPos);//saves variable as a double to finalPos
            	changePos = finalPos - initialPos;
            	printf("Enter initial velocity: \n"); //user enter variable for initial velocity
            	scanf("%lf", &initialVelocity);//saves variable as a double to initialVelocity
            	printf("Enter final velocity: \n"); //user enter variable for initial velocity
            	scanf("%lf", &finalVelocity);//saves variable as a double to finalVelocity
            	// determines acceleration by passing values to accelerationWithPosition
            	printf("The acceleration is %lf\n", accelerationWithPosition(changePos, initialVelocity, finalVelocity));
            	system("pause");
            	break; //end case b

        	case 3:
        	    system("cls");
            	printf("Enter initial position: \n"); //user enter variable for initial position
            	scanf("%lf", &initialPos);//saves variable as a double to initialPos
            	printf("Enter final position: \n"); //user enter variable for initial position
            	scanf("%lf", &finalPos);//saves variable as a double to finalPos
            	changePos = finalPos - initialPos;
            	printf("Enter initial velocity: \n"); //user enter variable for initial velocity
            	scanf("%lf", &initialVelocity);//saves variable as a double to initialVelocity
            	printf("Enter acceleration: \n"); //user enter variable for acceleration
            	scanf("%lf", &acceleration);//saves variable as a double to acceleration
            	// determines velocity by passing values to velocityWithPos
            	printf("The final velocity is %lf.\n", velocityWithPos(changePos, acceleration,  initialVelocity));
            	system("pause");
            	break; //end case c

            case 4:
                system("cls");
            	printf("Enter initial time: \n"); //user enter variable for initial time
            	scanf("%lf", &initialTime); //saves variable as a double to initialTime
            	printf("Enter final time: \n"); //user enter variable for initial time
            	scanf("%lf", &finalTime);//saves variable as a double to finalTime
            	changeTime = finalTime - initialTime;
            	printf("Enter initial velocity: \n"); //user enter variable for initial velocity
            	scanf("%lf", &initialVelocity);//saves variable as a double to initialVelocity
            	printf("Enter acceleration: \n"); //user enter variable for acceleration
            	scanf("%lf", &acceleration);//saves variable as a double to acceleration
            	// determines velocity by passing values to velocityWithTime
            	printf("The final velocity is %lf.\n", velocityWithTime(changeTime, acceleration, initialVelocity));
            	system("pause");
            	break; //end case d

        	case 5:
        	    system("cls");
            	printf("Enter initial time: \n"); //user enter variable for initial time
            	scanf("%lf", &initialTime);//saves variable as a double to initialTime
            	printf("Enter final time: \n"); //user enter variable for initial time
            	scanf("%lf", &finalTime);//saves variable as a double to finalTime
            	changeTime = finalTime - initialTime;
            	printf("Enter initial velocity: \n"); //user enter variable for initial velocity
            	scanf("%lf", &initialVelocity);//saves variable as a double to initialVelocity
            	printf("Enter acceleration: \n"); //user enter variable for acceleration
            	scanf("%lf", &acceleration);//saves variable as a double to acceleration
            	printf("Enter initial position: \n"); //user enter variable for initial position
            	scanf("%lf", &initialPos);//saves variable as a double to initialPos
            	// position calculated by passing values to position function
            	printf("The final position is %lf.\n", position(initialPos, initialVelocity, changeTime, acceleration));
            	system("pause");
            	break; //end case e

            case 6: // information statement
                system("cls");
                printf("Please note that this program cannot be used to solve all kinematics problems, only a handful of them.\n");
                printf("Initial position and time values cannot be solved for in this iteration of the program.\n");
                printf("This program allows you to find the values for the following:\n");
                // tell user what can be calculated
                printf("-Velocity with time,\n-velocity with position,\n-acceleration with time,\n-acceleration with position,\n-and final position.\n");
                system("pause");
                break;

            case 7: // terminate program
                system("cls");
                break;

            default: // if anything else is inputted
                system("cls");
                printf("ERROR: Please choose from one of the available options, 1-7.\n");
                system("pause");
                break;
        } // end of switch
	} while (menu != 7); // end of do-while - list condition
	printf("Thank you for using the program. Press any key to exit.");
}

// function to calculate the final velocity with initial velocity, acceleration, and position
double velocityWithPos (double changePos, double acceleration, double initialVelocity) {
	return finalVelocity = sqrt((pow(initialVelocity, 2)) + (2 * acceleration * changePos));
}

// function to calculate the final velocity with initial velocity, acceleration, and time
double velocityWithTime (double changeTime, double acceleration, double initialVelocity) {
	return finalVelocity = initialVelocity + (acceleration * changeTime);
}

// function to calculate the acceleration with velocity and position
double accelerationWithPosition (double changePos, double initialVelocity, double finalVelocity) {
	double accelerationPos;
	return accelerationPos = (pow(initialVelocity, 2) - pow(finalVelocity, 2)) / changePos;
}

// function to calculate the acceleration with velocity and time
double accelerationWithTime (double changeTime, double initialVelocity, double finalVelocity) {
    double accelerationTime;
    return accelerationTime = (finalVelocity - initialVelocity) / changeTime;
}

// function to calculate the final position of a particle
double position (double initialPos, double initialVelocity, double changeTime, double acceleration) {
	double finalPos;
	return finalPos = initialPos + (initialVelocity * changeTime) + (0.50 * acceleration * changeTime * changeTime);
}
