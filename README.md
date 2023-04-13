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

03.Problem: Change Tiles
The tiles on the ground in front of an apartment building need changing. The ground has a square 
shape with side of N meters. The tiles are "W" meters wide and "L" meters long. There is one bench 
on the ground with width of “M” meters and length of “O” meters. The tiles under it do not need to 
be replaced. Each tile is replaced for 0.2 minutes. Write a program that reads the size of the ground, 
the tiles and the bench from the console, and calculates how many tiles are needed to cover the 
ground and what is the total time for replacing the tiles.
Example: ground with size 20 m has area of 400 m2
. A bench that is 1 m wide and 2 m long, has area 
of 2 m2
. One tile is 5 m wide, 4 m long and has area of 20 m2
. The space that needs to be covered is
400 - 2 = 398 m2
. Therefore, 398 / 20 = 19.90 tiles are necessary. The time needed is 19.90 * 0.2 = 
3.98 minutes. 
Input Data
The input data comes as 5 numbers, which are read from the console:
• N – length of a side of the ground within the range of [1 … 100].
• W – width per tile within the range of [0.1 … 10.00].
• L – length per tile within the range of [0.1 … 10.00].
• М – width of the bench within the range of [0 … 10].
• О – length of the bench within the range of [0 … 10].
Output Data
Print on the console two numbers: number of tiles needed for the repair and the total time for 
changing them, each on a new line.

Sample Input and Output
Input Output  Input Output 
20    19.9    40    3302.08333333333
5     3.98    0.8   660.416666666667
4             0.6
1             3
2             5

04.Problem: Money
Peter lives in Bulgaria and is keen about money exchange, trading, cryptocurrencies and financial 
markets. Some time ago, Peter bought Bitcoins and paid for them in Bulgarian levs (BGN). Now, he is 
going on vacation in Europe and he needs Euro (EUR). Apart from the Bitcoins, he has Chinese yuans
(CNY) as well. Peter wants to exchange his money for Euro for the tour. Write a program that 
calculates how much Euro he can buy, depending on the following exchange rates:
• 1 Bitcoin (BTC) = 1168 BGN
• 1 Chinese yuan (CNY) = 0.15 dollars (USD)
• 1 Dollar (USD) = 1.76 BGN
• 1 Euro (EUR) = 1.95 BGN
The exchange office has commission fee within 0% to 5% from the final sum in Euro.
Input Data
Three numbers are read from the console:
• On the first line – number of Bitcoins. Integer within the range of [0 … 20].
• On the second line – number of Chinese yuans. Floating-point number within the range of [0.00 
… 50 000.00].
• On the third line – commission fee. Floating-point number within the range of [0.00 … 5.00].
Output Data
Print one number on the console – the result of the exchange of currencies. Rounding is not 
necessary.
Sample Input and Output
Input Output           Input     Output 
1     569.668717948718 7         10659.47   
5                      50200.12
5                      3

Input Output
20    12442.24
5678
2.4

