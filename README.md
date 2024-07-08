
**Course Name:** Algorithmic Problem Solving  
**Course Code:** 23ECSE309  
**Name:** Dheeraj Hegde  
**SRN:** 01FE21BEI027  
**University:** KLE Technological University, Hubballi-31  
**Portfolio domain:** Linkedin

## Table of Contents

- [Introduction](#introduction)
- [Objectives](#objectives)
- [BusinessCases](#BusinessCases)

## Introduction

Welcome to my E-Commerce Portfolio! This repository serves as a showcase of my work and accomplishments in the field of E-Commerce management and algorithmic problem-solving. Throughout this portfolio, you'll find details of my projects, experiences, and learning journey during the Algorithmic Problem Solving course at KLE Technological University.




## Objectives

- User search and Profile management by using efficient Data structures and Algortihm.
- Building Connections with other users and sharing of the recent trends ad activities.
- Having a recommendation system basis on the user activity and also relating to the activity of profile user follows.



## BusinessCases

Throughout the course, various challenges were encountered, ranging from algorithmic complexities to practical implementation hurdles. Each challenge presented an opportunity for learning and growth, contributing to the overall development.

### 1.Directed Acyclic Graph(DAG):
 We can use DAGs to manage and orchestrate data pipelines. In these pipelines, various data processing tasks (nodes) are executed in a specific order (directed edges) without any cycles (acyclic). This ensures that data flows smoothly from one stage to the next, such as data extraction, transformation, and loading (ETL) processes.<br>
 this can help us to manage resources efficiently with minimized cost.
**Design techniques and algorithms:**  
-  **Topological Sort for DAGs:** DFS based solution
   - **Time Complexity:** O(V+E) where V represents several tasks and E represents the dependencies/ edges of DAG.
   - **Space Complexity:** O(V). The extra space is needed for the stack.
   - view Implementation: [Topological_sort](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/topological_sort.cpp)
-  **Priority queues** Min/Max heap, C++ std::priority_queue
   - **Time Complexity:** O(logN) for insertion and deletion (push and pop)
   - **Space Complexity:** O(N)
   - View Implementation: [Priority](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/priority.cpp)


### 2.Efficient Search 
The users should be able to search the profiles and content across the globe, so we can use the algorithms

**Full-Text Search:** Searches within documentation and repositories.<br>
- **Algorithm:** Inverted Index <br>
- **Time Complexity:** <br>
Indexing: O(n log n) where n is the number of items.<br>
Querying: O(k + log n) where k is the number of query terms.<br>

**Trie for Prefix Search:** Supports efficient prefix-based search and autocomplete.<br>
- **Algorithm:** Trie (Prefix Tree) <br>
- **Time Complexity:** <br>
Insertion: O(m) where m is the length of the key.<br>
Search: O(m) where m is the length of the key.<br>
View Implementation: [Trie](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/trie.cpp)

### 3. Recommendation System
The users should recieve recommendations on basis of there mutual and common links they have creted where new links and content both can be recomended.<br>
**Collaborative filtering:** This technique analyzes user behavior and interactions to suggest connections, jobs, or content similar to what others with similar profiles have engaged with.  Imagine it as finding users who walk a similar professional path and recommending things that were valuable to them.
- **Time Complexity:** O(U*I^2) where U and I represent the total number of Users and Items.
- **Space Complexity:** O(U*I) for the 2D matrix  
View Implementation: [Collaborative Filtering](https://github.com/bowbowbow/CollaborativeFiltering/blob/master/recommender.cpp)

### 4. Personalized notification 
We can notify the user when other profile has viwed the users profile or when there is an any like comment on the post of user. which makes user to be active on the app and respond quickly. this makes the user updated with his profile related subjects.


### 5.Content Display to user
We can optimizes the content display by employing Lazy Propagation to update content metrics based on user interactions effectively. This approach ensures that relevant and engaging content is prominently featured to increase user engagement and interaction on the platform.<br>
- **Time Complexity:** <br>
Update with lazy propagation: O(log N)<br>
Query with lazy propagation: O(log N) per affected node

- **Space Complexity:** O(N) due to the segment tree and the lazy array.<br>
View Implementation:[Lazy Propogation](https://github.com/dheerajdhegde/dheerajdhegde.github.io/blob/main/codes/lazy_propogation.cpp)



 




