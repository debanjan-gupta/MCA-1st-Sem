#include<stdio.h>
#include<stdlib.h>

void display(int arr[], int *count)
{
    for (int i = 0; i < *count; i++)
    {
        printf("%d ",arr[i]);
    }
}

void insert(int arr[],int *count, int pos, int val)
{
    //shift element to the right
    for (int i = *count; i > pos; i--)
    {
        arr[i]=arr[i-1];  
    }
    arr[pos]=val;
    (*count)++;
    printf("Array after Insertion: ");
    display(arr, count);
}

void delete(int arr[], int *count, int pos)
{
    //shift element to the left
    for (int i = pos; i < *count - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*count)--;
    printf("Array after Deletion: ");
    display(arr, count);
}


int main()
{
    int max=100;
    int arr[max], count, choice, pos, val;

    printf("Enter number of Elements: ");
    scanf("%d",&count);

    printf("Enter %d elements:\n",count);
    for(int i=0;i<count;i++)
    {
        scanf("%d",&arr[i]);
    }

    while (1)
    {
        printf("\nMenu\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
    

        switch (choice)
        {
        case 1:
            printf("Enter position to insert: ");
            scanf("%d",&pos);
            if (pos>=count || pos<0)
            {
                printf("\nInvalid position!\n");
                break;
            }
            
            printf("Enter Value: ");
            scanf("%d",&val);
            insert(arr, &count, pos, val);
            break;

        case 2:
            printf("Enter position to delete: ");
            scanf("%d",&pos);
            if (pos>=count || pos<0)
            {
                printf("\nInvalid position!\n");
                break;
            }      
            delete(arr, &count, pos);
            break;

        case 3:
            printf("Array Elements: ");
            display(arr, &count);
            printf("\n");
            break;

        case 4:
            printf("Exiting...\n");
            return 0;
        
        default:
            printf("Invalid choice!\n");
            break;
        }
    }
    
    return 0;
}