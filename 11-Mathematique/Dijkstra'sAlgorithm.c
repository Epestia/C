#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

// Define the structure for nodes
typedef struct {
    int x, y;
    double g; // Cost from start to the current node
    double h; // Heuristic cost estimate to the goal
    double f; // g + h
    int walkable;
    struct Node* parent;
} Node;

// Define the structure for a priority queue
typedef struct {
    Node** nodes;
    int size;
    int capacity;
} PriorityQueue;

// Create a new node
Node* create_node(int x, int y, int walkable) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->x = x;
    node->y = y;
    node->g = DBL_MAX;
    node->h = 0;
    node->f = DBL_MAX;
    node->walkable = walkable;
    node->parent = NULL;
    return node;
}

// Create a priority queue
PriorityQueue* create_priority_queue(int capacity) {
    PriorityQueue* pq = (PriorityQueue*)malloc(sizeof(PriorityQueue));
    pq->nodes = (Node**)malloc(sizeof(Node*) * capacity);
    pq->size = 0;
    pq->capacity = capacity;
    return pq;
}

// Swap nodes in the priority queue
void swap(Node** a, Node** b) {
    Node* temp = *a;
    *a = *b;
    *b = temp;
}

// Push a node onto the priority queue
void pq_push(PriorityQueue* pq, Node* node) {
    pq->nodes[pq->size++] = node;
    int i = pq->size - 1;
    while (i && pq->nodes[i]->f < pq->nodes[(i - 1) / 2]->f) {
        swap(&pq->nodes[i], &pq->nodes[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Pop a node from the priority queue
Node* pq_pop(PriorityQueue* pq) {
    if (pq->size == 0) return NULL;
    Node* root = pq->nodes[0];
    pq->nodes[0] = pq->nodes[--pq->size];
    int i = 0;
    while ((2 * i + 1) < pq->size) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int smallest = i;
        if (left < pq->size && pq->nodes[left]->f < pq->nodes[smallest]->f) smallest = left;
        if (right < pq->size && pq->nodes[right]->f < pq->nodes[smallest]->f) smallest = right;
        if (smallest == i) break;
        swap(&pq->nodes[i], &pq->nodes[smallest]);
        i = smallest;
    }
    return root;
}

// Calculate the heuristic (Euclidean distance)
double heuristic(Node* a, Node* b) {
    return sqrt((a->x - b->x) * (a->x - b->x) + (a->y - b->y) * (a->y - b->y));
}

// Reconstruct the path
void reconstruct_path(Node* node) {
    if (node->parent != NULL) {
        reconstruct_path(node->parent);
    }
    printf("(%d, %d) ", node->x, node->y);
}

// A* search algorithm
void astar(Node** grid, int width, int height, Node* start, Node* goal) {
    PriorityQueue* open_set = create_priority_queue(width * height);
    start->g = 0;
    start->h = heuristic(start, goal);
    start->f = start->h;
    pq_push(open_set, start);

    while (open_set->size > 0) {
        Node* current = pq_pop(open_set);
        if (current == goal) {
            reconstruct_path(goal);
            printf("\n");
            return;
        }

        for (int dx = -1; dx <= 1; dx++) {
            for (int dy = -1; dy <= 1; dy++) {
                if (dx == 0 && dy == 0) continue;
                int nx = current->x + dx;
                int ny = current->y + dy;
                if (nx >= 0 && nx < width && ny >= 0 && ny < height) {
                    Node* neighbor = &grid[ny][nx];
                    if (!neighbor->walkable) continue;
                    double tentative_g = current->g + heuristic(current, neighbor);
                    if (tentative_g < neighbor->g) {
                        neighbor->parent = current;
                        neighbor->g = tentative_g;
                        neighbor->h = heuristic(neighbor, goal);
                        neighbor->f = neighbor->g + neighbor->h;
                        pq_push(open_set, neighbor);
                    }
                }
            }
        }
    }

    printf("No path found\n");
}

int main() {
    int width = 5, height = 5;
    Node** grid = (Node**)malloc(sizeof(Node*) * height);
    for (int y = 0; y < height; y++) {
        grid[y] = (Node*)malloc(sizeof(Node) * width);
        for (int x = 0; x < width; x++) {
            grid[y][x] = *create_node(x, y, 1);
        }
    }

    // Set up obstacles
    grid[1][1].walkable = 0;
    grid[1][2].walkable = 0;
    grid[1][3].walkable = 0;

    Node* start = &grid[0][0];
    Node* goal = &grid[4][4];

    astar(grid, width, height, start, goal);

    // Free memory
    for (int y = 0; y < height; y++) {
        free(grid[y]);
    }
    free(grid);

    return 0;
}
