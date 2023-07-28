bool is_fanarray(int array[], int n)  {
    
    int arrayCheckForward[n];
    int arrayCheckBackward[n];

    for (int i = 0; i < n; i++) {
        arrayCheckForward[i] = array[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        arrayCheckBackward[n - i - 1] = array[i];
    }

    bool status = true;
    for (int i = 0; i < n; i++) {
        if (arrayCheckForward[i] != arrayCheckBackward[i])
        {
            status = false; 
            break;
        }
    }
    return status;
}
