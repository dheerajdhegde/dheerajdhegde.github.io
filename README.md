
**Course Name:** Algorithmic Problem Solving  
**Course Code:** 23ECSE309  
**Name:** Dheeraj Hegde  
**SRN:** 01FE21BEI027  
**University:** KLE Technological University, Hubballi-31  
**Portfolio domain:** Linkedin

## Table of Contents

- [Introduction](#introduction)
- [Objectives](#objectives)
- [Features](#features)

## Introduction
LinkedIn is a premier professional networking platform that connects millions of individuals and businesses globally. It allows users to create comprehensive profiles detailing their skills, experiences, and accomplishments, making it easier to highlight their professional journey. LinkedIn provides a dynamic space for networking, enabling users to connect with industry peers, potential employers, and thought leaders. Additionally, the platform offers various resources such as job postings, industry news, and professional development content. By engaging on LinkedIn, you can join relevant groups, participate in discussions, and stay informed about the latest trends and opportunities in your field. Whether you're looking to advance your career, explore new job opportunities, or expand your business network, LinkedIn is an essential tool for achieving your professional aspirations.

<p align="center">
  <img src="https://github.com/dheerajdhegde/dheerajdhegde.github.io/assets/105264588/5888be17-7ad4-438e-ad59-015e9c62d426" width="300" alt="HLD-Youtube">
</p>



## Objectives

- User search and Profile management by using efficient Data structures and Algortihm.
- Building Connections with other users and sharing of the recent trends ad activities.
- Having a recommendation system basis on the user activity and also relating to the activity of profile user follows.



## Features

### 1.Directed Acyclic Graph(DAG):
 We can use DAGs to manage and orchestrate data pipelines. In these pipelines, various data processing tasks (nodes) are executed in a specific order (directed edges) without any cycles (acyclic). This ensures that data flows smoothly from one stage to the next, such as data extraction, transformation, and loading (ETL) processes.   This can help us to manage resources efficiently with minimized cost.
 <p align="center">
  <img src="https://github.com/dheerajdhegde/dheerajdhegde.github.io/assets/105264588/26ccaa1a-c28b-4ed5-b023-cd35a0f140ac" width="300" alt="HLD-Youtube">
</p>

**Design techniques and algorithms:** <br> 
-  **Topological Sort for DAGs:** DFS based solution<br>
   - **Time Complexity:** O(V+E) where V represents several tasks and E represents the dependencies/ edges of DAG.<br>
   - **Space Complexity:** O(V). The extra space is needed for the stack.<br>
   - View Implementation: [Topological_sort](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/topological_sort.cpp)<br>
-  **Priority queues** Min/Max heap, C++ std::priority_queue<br>
   - **Time Complexity:** O(logN) for insertion and deletion (push and pop)<br>
   - **Space Complexity:** O(N)<br>
   - View Implementation: [Priority](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/priority.cpp)<br>


### 2.Efficient Search 
The users should be able to search the profiles and content across the globe, so we can use the algorithms

**Full-Text Search:** Searches within documentation and repositories.<br>
- **Algorithm:** Inverted Index <br>
- **Time Complexity:** <br>
Indexing: O(n log n) where n is the number of items.<br>
Querying: O(k + log n) where k is the number of query terms.<br>

<p align="center">
  <img src="https://github.com/dheerajdhegde/dheerajdhegde.github.io/assets/105264588/03981554-44cc-48eb-8f06-a63debd0b9d8" width="500" alt="HLD-Youtube">
</p>


**Trie for Prefix Search:** Supports efficient prefix-based search and autocomplete.<br>
- **Algorithm:** Trie (Prefix Tree) <br>
- **Time Complexity:** <br>
Insertion: O(m) where m is the length of the key.<br>
Search: O(m) where m is the length of the key.<br>
View Implementation: [Trie](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/trie.cpp)

### 3. Content Recommendation System
The users should recieve recommendations of content on basis of there activitiy and the activity of there connections. so that they be updated on the content most of there links consume.<br>

<p align="center">
  <img src="https://github.com/dheerajdhegde/dheerajdhegde.github.io/assets/105264588/4e9b5fe9-4c11-454b-bbf3-d5b8a161071c" width="400" alt="HLD-Youtube">
</p>



**Collaborative filtering:** This technique analyzes user behavior and interactions to suggest connections, jobs, or content similar to what others with similar profiles have engaged with.  Imagine it as finding users who walk a similar professional path and recommending things that were valuable to them.
- **Time Complexity:** O(U*I^2) where U and I represent the total number of Users and Items.
- **Space Complexity:** O(U*I) for the 2D matrix  
View Implementation: [Collaborative Filtering](https://github.com/bowbowbow/CollaborativeFiltering/blob/master/recommender.cpp)

### 4. Personalized notification 
We can notify the user when other profile has viwed the users profile or when there is an any like comment on the post of user. which makes user to be active on the app and respond quickly. this makes the user updated with his profile related subjects.

Notifications in linkdein are for keeping users informed about activities relevant to their projects and interactions. They provide real-time updates on events such as comments likes discussions. Notifications help users stay informed about discussions they’re involved in or grouos they’re interested in, ensuring timely responses and active participation in collaborative workflows. Users can manage notifications through personalized settings, choosing to receive updates via email, web notifications, or both, based on their preferences.

We can employs event-driven architecture to handle these events, where each event triggers specific actions or notifications based on predefined rules and user preferences. This approach enables seamless integration of real-time updates into the platform, enhancing collaboration and ensuring that users stay informed about critical activities within their projects. By efficiently managing event handling and dispatch, We can facilitates smooth communication, timely responses, and effective management across its platform.<br>
- **Time Complexity:** O[1]


### 5.Content Display to user
We can optimizes the content display by employing Lazy Propagation to update content metrics based on user interactions effectively. This approach ensures that relevant and engaging content is prominently featured to increase user engagement and interaction on the platform.<br>

<p align="center">
  <img src="https://github.com/dheerajdhegde/dheerajdhegde.github.io/assets/105264588/e3be1afa-519a-40e6-b850-328c5f91c426" width="400" alt="HLD-Youtube">
</p>

- **Time Complexity:** <br>
Update with lazy propagation: O(log N)<br>
Query with lazy propagation: O(log N) per affected node

- **Space Complexity:** O(N) due to the segment tree and the lazy array.<br>
View Implementation:[Lazy Propogation](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/lazy_propogation.cpp)

### 6. Connections
Our users should get recommendations of new connections on the basis of there previous connection. here we can find out new connection by figuriong the mutual connections between the user links. we can use algorithms such as BFS(Breadth First Search) and DFS(Depth First Search) to find the shoretes or nearest connection in the network of user. 

<p align="center">
  <img src="https://github.com/dheerajdhegde/dheerajdhegde.github.io/assets/105264588/293ff03d-1a5c-4f23-868c-93f6bd060595" width="300" alt="HLD-Youtube">
</p>


**BFS** <br>
- **Time Complexity:** O(V + E) where V is the number of vertices and E is the number of edges in the graph<br>
- **Space Complexity:** O(V + E), where V is the number of nodes and E is the number of edges. The space complexity of the algorithm is O(V).<br>
View Implementation:[BFS](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/BFS.cpp)

**DFS** <br>
- **Time Complexity:** s O(V + E), where V represents the number of vertices and E represents the number of edges in the graph.<br>
- **Space Complexity:** O(V), where V represents the number of vertices in the graph.<br>
View Implementation:[DFS](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/DFS.cpp)

### 7. Collaboration or Groups
We can recommend users the professional groups in a logical and sequential order, considering their current affiliations, interests, and activities. Joining these relevant groups can greatly enhance users' professional networks, provide valuable content, and foster meaningful interactions. Here we can use dijkstra to find the nearest link with the same skills and intrests and can make a group with them.

<p align="center">
  <img src="https://github.com/dheerajdhegde/dheerajdhegde.github.io/assets/105264588/eedc9f32-0c1d-40de-9359-c5bd8d334524" width="550" alt="HLD-Youtube">
</p>


**Dijkstra**
- **Time Complexity:**  O(V2) when using a simple array implementation or O((V + E) log V) with a priority queue.
- **Space Complexity:**  O(V) to O(E + V), where V is the number of vertices and E is the number of edges in the graph.
  View Implementation:[Dijkstra](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/dijkstra.cpp)



### 8. Load Balancing
Our app handles a high volume of data requests over a network, directing user requests to the server with minimal resource usage, such as CPU, memory, and bandwidth. This is particularly crucial when popular posts are being watched by millions of users. Given that our servers vary in resources like RAM and memory, it's essential to manage incoming requests effectively and direct them to servers that can process them efficiently. Load balancing algorithms such as Round Robin and Weighted Round Robin help distribute requests based on server metrics.[5]

<p align="center">
  <img src="https://github.com/dheerajdhegde/dheerajdhegde.github.io/assets/105264588/49815250-1f76-4f63-b9b2-6b5750c170fb" width="500" alt="HLD-Youtube">


**Round Robin**: Static, Greedy approach
- **Time Complexity:** O(1) if number of servers are static.
- **Space Complexity:** O(N) where N represents number of servers.
  View Implementation:[Round_robin](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/Round_robin.cpp)
**Weighted Round Robin**: Static, Greedy approach
-**Time Complexity:** O(1) if number of servers are static.
-**Space Complexity:** O(N) where N represents number of servers.
  View Implementation:[Weighted_Round_robin](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/Weighted_RR.cpp)


### 9. Job Recommendation
For recommendation of jobs for users we can sort the data and display the tabel of hiring data whcih matches with the profile data of users. to do this we can use merge sort which has best performance for large datasets and can give less complexity.

<p align="center">
  <img src="https://github.com/dheerajdhegde/dheerajdhegde.github.io/assets/105264588/e2113594-638a-44a0-9514-6c24f85ff5d5" width="500" alt="HLD-Youtube">


**Merge Sort**: 
- **Time Complexity:** O(N*log(N)) here N number of modes.
- **Space Complexity:** O(N) where N represents number of nodes.
  View Implementation:[Merge_sort](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/Merge_sort.cpp)


### 10. Activity
The activity of user to be maintained as the metrics to know the time spent, likes, dislikes. here we can implement an fenwick tree where it stores the time stamp or the count of access. from where we can get time of specific hour or day by range sum queries
**Fenwick Tree**
- **Time Complexity:** O(NlogN) for tree, O(logN) for update where N is the number of nodes.
- **Space Complexity:** O(N)
 View Implementation:[Fenwick_tree](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/Fenwick_tree.cpp).[6]


### 11. Skill score
We can have a test or survey for the users and have a skill score which can be then diff with other user skill score which shares the same skills and intrests. so that user can get where user is placed in the rank of skill. Here we can use diff algorithms 

<p align="center">
  <img src="https://github.com/dheerajdhegde/dheerajdhegde.github.io/assets/105264588/41fd14e9-3db4-4e3e-8a53-78308b1f80f8" width="500" alt="HLD-Youtube">
</p>

**Diff Array implementation**
- **Time Complexity:**  O(N), where N is the number of skills .
- **Space Complexity:**  O(M + K), where M is the number of skills and K is the number of recommended skills.
 View Implementation:[Diff](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/diff.cpp)
  
### 12. Efficient Storage of Data
We need to store the user data efficiently which can save our resources and time. so we need to compress some data as mages videos and more and store in the database. to carryout these we can use huffman coding for compression of the data. it is a losless compression so the here the loss of data is minimum.

<p align="center">
  <img src="https://github.com/dheerajdhegde/dheerajdhegde.github.io/assets/105264588/db64c961-56a5-4132-99a7-f1e7107db5e0" width="300" alt="HLD-Youtube">
</p>

**Huffman coding:** Greedy technique
- **Time Complexity:** O(nlog(n)) where n is number of unique characters.
- **Space Complexity:** Linear [O(n)], for storing Huffman tree and encoded data.
View Implementation:[Huffman_coding](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/huffmann.cpp)
- 

### 13. Spam Filter
We should also have an service where spam content or illogical content can be prevented and ersased from the data so we can use algorithms such as Bayesian Spam Filter to detect spam content where this is model which is trained to detect whether the content is spam or not. so this is a probability algorihtm where we differentiate the data as spam or not


### 14. Auto suggest:
While searching any content user tend to make some typing mistakes so to prevent them or to correct them we can use algorithms such as radix tree where the data stored in nodes in a serial of words where as the user types we move towards deeper intree and can guess the word while the user is typing.

<p align="center">
  <img src="https://github.com/dheerajdhegde/dheerajdhegde.github.io/assets/105264588/42ced362-59f9-4f9b-b1d5-77edc135e899" width="300" alt="HLD-Youtube">
</p>

**Radix Tree**
- **Time Complexity:** O(n) where n is number of word in node.
- **Space Complexity:** O(N), where N is the total number of characters in all the stored strings.
View Implementation:[Radix_tree](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/radix.cpp)

## Refernces
[1]Wikipedia. -"Directed Acyclic Graph". [https://en.wikipedia.org/wiki/Directed_acyclic_graph.]
[2] Dremio. (2024). "Huffman Coding". Online. Dreamio. [https://www.dremio.com/wiki/huffman-coding/](https://www.dremio.com/wiki/huffman-coding/)  
[3] Wikipedia. (2024). "Dijkstra's Algorithm". Online. Wikipedia. [https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm)   
[4] Ravi K. (2024). "Topological Sorting". Online. Naukri. [https://www.naukri.com/code360/library/topological-sorting](https://www.naukri.com/code360/library/topological-sorting)  
[5] PsychzNetworks. (2020). "CDN and Load Balancer: Ultimate combination for efficient content delivery". Online. PsychzNetworks. [https://www.psychz.net/client/blog/en/cdn-and-load-balancer-ultimate-combination-for-efficient-content-delivery-.html](https://www.psychz.net/client/blog/en/cdn-and-load-balancer-ultimate-combination-for-efficient-content-delivery-.html)  
[6]GeeksForGeeks. "Fenwick Tree for efficient activity ananlysis "[https://www.geeksforgeeks.org/binary-indexed-tree-or-fenwick-tree-2/]





 




