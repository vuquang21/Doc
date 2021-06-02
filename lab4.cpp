/*############################################
# University of Information Technology       #
# IT007 Operatin System			     	    #
# Vu Van Quang, 19522104                     #
#############################################*/


#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

static float averageWaitingTime = 0;
static float averageTurnAroundTime = 0;

struct Process {
	int name, arrivalTime, burstTime;
	int responeTime, waitingTime, turnAroundTime;
};

void Input(Process *p, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Enter the Process Name, Arrival Time & Burst Time: ";
		cin >> p[i].name >> p[i].arrivalTime >> p[i].burstTime;
	}
}

void ShortestRemainingTimeFirst(Process *p, int n, int *timeRemaining, int smallest) {
	timeRemaining = new int[n];
	int count = 0;
	for (int i = 0; i < n; i++) {
		timeRemaining[i] = p[i].burstTime;
	}
	for (int time = 0; count != n; time++) {
		smallest = 9;
		for (int i = 0; i < n; i++)
        	{
            		if (p[i].arrivalTime <= time && p[i].burstTime < p[smallest].burstTime && p[i].burstTime > 0)
                	smallest = i;
        	}
        	p[smallest].burstTime--;
        	if (p[smallest].burstTime == 0)
        	{
            		count++;
            		p[smallest].waitingTime = time + 1 - p[smallest].arrivalTime - timeRemaining[smallest];
            		p[smallest].turnAroundTime = time + 1 - p[smallest].arrivalTime;
        	}
        	
        	cout << "Process" << "\t" << "Respone Time" << "\t" << "Waiting Time" << "\t" << "Turnaround Time" << endl;
    		for (int i = 0; i < n; i++)
    		{
        		cout << p[i].name << "\t\t" << timeRemaining[i] << "\t\t" << p[i].waitingTime << "\t\t" << p[i].turnAroundTime << endl;
        		averageWaitingTime += p[i].waitingTime;
        		averageTurnAroundTime += p[i].turnAroundTime;
    		}
	}
}

int main()
{
	int n;
	cout << "Enter number of process: ";
	cin >> n;
	Process *p = new Process[n];
    	Input(p, n);
    	int *timeRemaining, smallest = 0;
    	ShortestRemainingTimeFirst(p, n, timeRemaining, smallest);
	cout << "Average waiting time: " << averageWaitingTime / n << endl;
	cout << "Average Turn around time: " << averageTurnAroundTime / n << endl;
	
	return 0;
}
