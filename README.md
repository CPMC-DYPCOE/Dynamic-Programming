
<div align = "left">

<h1 align="left"> <font size="5"> <b> DYNAMIC PROGRAMMING </b></h1>

<p>Dynamic Programming is mainly an optimization over plain recursion. Wherever we see a recursive solution that has repeated calls for same inputs, we can optimize it using Dynamic Programming. The idea is to simply store the results of subproblems, so that we do not have to re-compute them when needed later. This simple optimization reduces time complexities from exponential to polynomial.</p>

 ---


<div align="left">
<h2>Why Dynamic Programming</h2>
● Overlapping Subproblems <br>
● Why calculate the answers for the subproblems again and again<br>
● DP helps covers all possible cases<br>
</div>
 
<h2>Greedy V/S DP</h2>
<h3>Greedy (one direction) </h3>
<p>Pick k elements from a list of N elements such that their sum is maximum.</p>

<h3> DP (try out all directions) </h3>
<p>Pick k elements from a list of n elements such that a particular condition holds. ((f..........))<br>
Time complexity<br>
1. For trying out every possibility - C(n,k) => nCk  (brute force)<br>
2. With DP (break problem into sub-problems and also storing subproblems)  - O(n*k) => dp[n][k]</p>
 
 ---
 
<h2>Basic DP question</h2>
<h4>Find the sum of first n natural numbers. Without using the formula (N * (N + 1 )) / 2</h4>
<h3>Basic solution</h3>
<pre>
int sum = 0;
for (int i = 1; i <= n; i++)
{
    sum += i;
}
cout << sum;
</pre>
<p>sum variable denotes the sum of n natural number</p>

<h3>DP solution</h3>
<pre>
int dp[n + 1];
for (int i = 1; i <= n; i++)
{
    dp[i] = i + dp[i - 1];
}
cout << dp[n];
</pre>
<p>Here, dp[i] signify sum till i </p>
</div>

 ---
 
<h2>4 things to care about in DP problems</h2>

<h3>1. State</h3>
<p>A subproblem that we want to solve. The subproblem may be complex or easy to solve but the final aim is to solve the final problem which may be defined by a relation between the smaller sub problems
(representation of a subproblem -> what does it signify)</p>

<h3>2. Transition</h3>
<p>Calculate the answer of state by using the answer of other smaller state (subproblems) </p>

<h3>3. Base case</h3> 
<p>The transition expression will itself give the base case (points where the transition fails)</p>

<h3>4. Final subproblem</h3> 
<p>Final state that the answer lies in</p>

---

<h2>Fibonacci Number</h2>
<h4>Find the Nth Fibonacci Number where F(n) = F(n-1) + F(n-2)<br>
F(1) = 1<br>
F(2) = 1<br>
F(3) = F(2) + F(1) = 2<br>
F(4) = F(3) + F(2) = 3<br>
F(5) = F(4) + F(3) = 5<br>
</h4>
<p>DP Solution</p>
<pre>
int dp[n + 1]; // state
dp[1] = 1;
dp[2] = 1;
for (int i = 3; i <= n; i++)
{
    dp[i] = dp[i - 1] + dp[i - 2]; // transition
}
cout << dp[n] << endl; // Final subproblem
</pre>

<h4>Comparing with and without DP solutions</h4>
