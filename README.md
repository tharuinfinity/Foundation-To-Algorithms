# Foundation-To-Algorithms
The image you sent me contains a coding question about employee performance evaluation. The text in the image is as follows:


**Question 1 (10 marks)**

You are an IT company's manager. Based on their performance over the last N working days, you must rate your employee. You are given an array of N integers called workload, where workload[i] represents the number of hours an employee worked on an ith day. The employee must be evaluated using the following criteria:

* Rating the maximum number of consecutive working days when the employee has worked more than 6 hours.

**Task**

Determine the employee rating.

**Example**

**Assumptions**

* N = 12
* workload = [2, 3, 7, 8, 7, 6, 3, 8, 12, 11, 12, 10]

**Approach**

Workload with consecutive hours > 6 = [2, 3, 7, 8, 7, 6, 3, 8, 12, 11, 12, 10] => Longest Interval
= [8, 12, 11, 12, 10]

Therefore return 5.

**Input format**

* The first line contains an integer N denoting the number of working days.
* The second line contains a space-separated integer array workload where workload[i] represents the number of hours an employee worked on an ith day.

