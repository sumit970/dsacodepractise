class queue
{
    int k;
    int n;
    int *front;
    int *rear;
    int *arr;
    int freespot;
    int *next;

    queue(int n, int k)
    {
        this->k = k;
        this->n = n;
        arr = new int[n];
        freespot = 0;
        next = new int[n];

        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

        for (int i = 0; i < n; i++)
        {
            next[i] = i - 1;
        }
        
        next[n-1] = -1;

    }
};