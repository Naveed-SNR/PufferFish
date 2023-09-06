Here are pseudocodes for the algorithms you've mentioned:

1. **Quick Sort:**
```plaintext
QuickSort(arr, low, high)
    if low < high
        pivotIndex = Partition(arr, low, high)
        QuickSort(arr, low, pivotIndex - 1)
        QuickSort(arr, pivotIndex + 1, high)

Partition(arr, low, high)
    pivot = arr[high]
    i = low - 1
    for j = low to high - 1
        if arr[j] <= pivot
            i++
            Swap(arr[i], arr[j])
    Swap(arr[i + 1], arr[high])
    return i + 1
```

2. **Merge Sort:**
```plaintext
MergeSort(arr)
    if length(arr) > 1
        mid = length(arr) / 2
        left = arr[0...mid-1]
        right = arr[mid...length(arr)-1]
        MergeSort(left)
        MergeSort(right)
        Merge(arr, left, right)

Merge(arr, left, right)
    i = j = k = 0
    while i < length(left) and j < length(right)
        if left[i] < right[j]
            arr[k] = left[i]
            i++
        else
            arr[k] = right[j]
            j++
        k++
    while i < length(left)
        arr[k] = left[i]
        i++
        k++
    while j < length(right)
        arr[k] = right[j]
        j++
        k++
```

3. **Insertion Sort:**
```plaintext
InsertionSort(arr)
    for i = 1 to length(arr)
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key
            arr[j + 1] = arr[j]
            j--
        arr[j + 1] = key
```

4. **Binary Search:**
```plaintext
BinarySearch(arr, target)
    low = 0
    high = length(arr) - 1
    while low <= high
        mid = (low + high) / 2
        if arr[mid] == target
            return mid
        else if arr[mid] < target
            low = mid + 1
        else
            high = mid - 1
    return -1  // Not found
```

5. **Knapsack Problem (Greedy Approach):**
```plaintext
GreedyKnapsack(items, capacity)
    Sort items by value-to-weight ratio in decreasing order
    knapsack = []
    totalValue = 0
    for item in items
        if item.weight <= capacity
            knapsack.append(item)
            totalValue += item.value
            capacity -= item.weight
    return knapsack, totalValue
```

6. **Knapsack Problem (Branch and Bound):**
```plaintext
BranchAndBoundKnapsack(items, capacity)
    Initialize a priority queue Q
    Initialize a node with no items selected (root node)
    Insert root node into Q with its optimistic value
    bestValue = 0
    while Q is not empty
        currentNode = Q.pop()
        if currentNode.optimisticValue <= bestValue
            continue
        if currentNode.level == len(items)
            if currentNode.value > bestValue
                bestValue = currentNode.value
            continue
        includeNode = createNodeWithItem(currentNode, items[currentNode.level])
        excludeNode = createNodeWithoutItem(currentNode, items[currentNode.level])
        if includeNode.weight <= capacity
            Q.insert(includeNode)
        Q.insert(excludeNode)
    return bestValue

createNodeWithItem(parentNode, item)
createNodeWithoutItem(parentNode, item)
```

7. **Knapsack Problem (Backtracking):**
```plaintext
BacktrackingKnapsack(items, capacity, currentIndex)
    if currentIndex < 0 or capacity <= 0
        return 0
    if items[currentIndex].weight > capacity
        return BacktrackingKnapsack(items, capacity, currentIndex - 1)
    else
        includeItem = items[currentIndex].value + BacktrackingKnapsack(items, capacity - items[currentIndex].weight, currentIndex - 1)
        excludeItem = BacktrackingKnapsack(items, capacity, currentIndex - 1)
        return max(includeItem, excludeItem)
```

8. **Traveling Salesman Problem (Greedy Approach):**
```plaintext
GreedyTSP(graph)
    Start from any city as the current city
    Mark the current city as visited
    Initialize tour to current city
    Repeat until all cities are visited
        Find the nearest unvisited city to the current city
        Mark that city as visited
        Add it to the tour
        Update the current city to the newly visited city
    Add the starting city to the tour to complete the cycle
    Return the tour and its total cost
```

9. **Traveling Salesman Problem (Dynamic Programming):**
```plaintext
DynamicProgrammingTSP(graph)
    n = number of cities
    Create a memoization table memo of size 2^n x n
    Initialize memo with maximum values
    Initialize the memo table for the base case (0, city) with the cost to reach city from the starting city
    for subproblemSize = 2 to n
        for each subset S of cities of size subproblemSize that includes the starting city
            for each city v in S other than the starting city
                memo(S, v) = min(memo(S - {v}, u) + cost(u, v)) for all u in S and u != v
    Calculate the minimum cost of returning to the starting city from any other city in memo
    Reconstruct the tour using memo
    Return the tour and its total cost
```

10. **Longest Common Subsequence (Dynamic Programming):**
```plaintext
LongestCommonSubsequence(X, Y)
    m = length(X)
    n = length(Y)
    Create a 2D array dp of size (m+1) x (n+1)
    for i = 0 to m
        for j = 0 to n
            if i == 0 or j == 0
                dp[i][j] = 0
            else if X[i-1] == Y[j-1]
                dp[i][j] = dp[i-1][j-1] + 1
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1])
    Initialize an empty string result
    Start from

 dp[m][n] and backtrack to construct the longest common subsequence
    Return the result string
```

11. **N-Queen Problem:**
```plaintext
NQueen(n)
    Initialize an empty n x n chessboard
    if SolveNQueen(0, n) returns true
        return the chessboard with queens placed
    else
        return "No solution exists"

SolveNQueen(row, n)
    if row == n
        return true
    for each column c from 0 to n-1
        if isSafe(row, c)
            place a queen at (row, c)
            if SolveNQueen(row + 1, n) returns true
                return true
            remove the queen from (row, c)
    return false

isSafe(row, col)
    Check if no queens threaten the cell (row, col)
    return true if safe, false otherwise
```

12. **Matrix Multiplication (Dynamic Programming):**
```plaintext
MatrixMultiplication(A, B)
    n1, m1 = dimensions of matrix A
    n2, m2 = dimensions of matrix B
    if m1 != n2
        return "Invalid input: Incompatible matrix dimensions"
    Create a result matrix C of size n1 x m2
    for i = 0 to n1-1
        for j = 0 to m2-1
            C[i][j] = 0
            for k = 0 to m1-1
                C[i][j] += A[i][k] * B[k][j]
    return matrix C
```

13. **Dijkstra's Algorithm:**
```plaintext
Dijkstra(graph, start)
    Initialize distances to all vertices as infinity except for start (0)
    Initialize an empty set visitedVertices
    Create a priority queue Q
    Add start vertex to Q with distance 0
    while Q is not empty
        currentVertex = vertex in Q with the minimum distance
        Remove currentVertex from Q
        if currentVertex is in visitedVertices
            continue
        Add currentVertex to visitedVertices
        for neighbor in neighbors of currentVertex
            distanceThroughCurrent = distance to currentVertex + edgeWeight(currentVertex, neighbor)
            if distanceThroughCurrent < distance to neighbor
                update distance to neighbor
                add neighbor to Q with updated distance
    return distances
```

14. **Prim's Algorithm:**
```plaintext
Prim(graph)
    Initialize an empty set MST (Minimum Spanning Tree)
    Initialize a priority queue Q
    Add any vertex as the starting vertex to MST
    Add all edges connected to the starting vertex to Q
    while Q is not empty
        currentEdge = edge with the minimum weight in Q
        Remove currentEdge from Q
        if adding currentEdge does not form a cycle in MST
            Add currentEdge to MST
            Add the vertex connected by currentEdge to MST
            Add all edges connected to this new vertex to Q
    return MST
```

15. **Floyd-Warshall Algorithm:**
```plaintext
FloydWarshall(graph)
    n = number of vertices in graph
    Initialize a 2D array dist of size n x n with initial values
    for each vertex v
        dist[v][v] = 0
    for each edge (u, v) with weight w
        dist[u][v] = w
    for k from 1 to n
        for i from 1 to n
            for j from 1 to n
                if dist[i][j] > dist[i][k] + dist[k][j]
                    dist[i][j] = dist[i][k] + dist[k][j]
    return dist
```

Please note that these are pseudocode representations of the algorithms, and you may need to adapt them to your specific programming language and data structures.