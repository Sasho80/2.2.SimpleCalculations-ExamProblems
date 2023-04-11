01.Problem: Training Lab
A training lab has a rectangular size l x w meters, without columns on the inside. The hall is divided 
into two parts: left and right, with a hallway approximately in the middle. In both parts, there are rows 
with desks. In the back of the hall, there is a big entrance door. In the front, there is a podium for the 
lecturer. A single working place takes up 70 x 120 cm (a table with size 70 x 40 cm + space for a chair 
with size 70 x 80 cm). The hallway width is at least 100 cm. It is calculated that due to the entrance 
door (which has 160 cm opening), exactly one working space is lost, and due to the podium (which 
has size of 160 x 120 cm), exactly two working spaces are lost. Write a program that reads the size 
of the training lab as input parameters and calculates the number of working places in it (look at the 
figure).
Input Data
Two numbers are read from the console, one per line: l (length in meters) and w (width in meters).
Constraints: 3 ≤ w ≤ l ≤ 100.
Output Data
Print an integer: the number of working places in the training lab.
Sample Input and Output
Input Output
15    129
8.9 
Input Output
8.4   39
5.2 

02.Problem: Vegetable Market
A gardener is selling his harvest on the vegetables market. He is selling vegetables for N coins per 
kilogram and fruits for M coins per kilogram. Write a program that calculates the earnings of the 
harvest in Euro (EUR). Assume the EUR / coin rate is fixed: 1 Euro == 1.94 coins.
Input Data
Four numbers are read from the console, one per line:
• First line: vegetable price per kilogram – a floating-point number.
• Second line: fruit price per kilogram – a floating-point number.
• Third line: total kilograms of vegetables – an integer.
• Fourth line: total kilograms of fruits – an integer.
Constraints: all numbers will be within the range from 0.00 to 1000.00.

Sample Input and Output
Input Output   Explanation 
0.194  101     Vegetables cost: 0.194 coins * 10 kg = 1.94 coins
19.4           Fruits cost: 19.4 coins * 10 kg = 194 coins
10             Total: 195.94 coins = 101 euro (= 101 * 1.94)
10

Input Output 
1.5   20.6185567010309 
2.5
10
10 
