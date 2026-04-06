#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for farm resource
typedef struct Resource {
    int id;
    char name[50];
    float quantity;
    char unit[20];
    struct Resource* next;
} Resource;

Resource* head = NULL;

// CREATE - Add resource
void addResource() {
    Resource* newNode = (Resource*)malloc(sizeof(Resource));

    printf("Enter Resource ID: ");
    scanf("%d", &newNode->id);

    printf("Enter Resource Name: ");
    scanf("%s", newNode->name);

    printf("Enter Quantity: ");
    scanf("%f", &newNode->quantity);

    printf("Enter Unit (kg/litre/etc): ");
    scanf("%s", newNode->unit);

    newNode->next = head;
    head = newNode;

    printf("✅ Resource added successfully!\n");
}

// READ - Display all resources
void displayResources() {
    if (head == NULL) {
        printf("⚠️ No resources found.\n");
        return;
    }

    Resource* temp = head;
    printf("\n--- Farm Resources ---\n");

    while (temp != NULL) {
        printf("ID: %d\n", temp->id);
        printf("Name: %s\n", temp->name);
        printf("Quantity: %.2f %s\n", temp->quantity, temp->unit);
        printf("----------------------\n");
        temp = temp->next;
    }
}

// UPDATE - Modify resource
void updateResource() {
    int id;
    printf("Enter Resource ID to update: ");
    scanf("%d", &id);

    Resource* temp = head;

    while (temp != NULL) {
        if (temp->id == id) {
            printf("Enter new name: ");
            scanf("%s", temp->name);

            printf("Enter new quantity: ");
            scanf("%f", &temp->quantity);

            printf("Enter new unit: ");
            scanf("%s", temp->unit);

            printf("✅ Resource updated successfully!\n");
            return;
        }
        temp = temp->next;
    }

    printf("❌ Resource not found.\n");
}

// DELETE - Remove resource
void deleteResource() {
    int id;
    printf("Enter Resource ID to delete: ");
    scanf("%d", &id);

    Resource *temp = head, *prev = NULL;

    if (temp != NULL && temp->id == id) {
        head = temp->next;
        free(temp);
        printf("✅ Resource deleted successfully!\n");
        return;
    }

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("❌ Resource not found.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);

    printf("✅ Resource deleted successfully!\n");
}






// Free all memory before exit
void freeAll() {
    Resource* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// Menu
void menu() {
    int choice;

    do {






        printf("\n🌿 Agriculture Monitoring System\n");
        printf("1. Add Resource\n");
        printf("2. Display Resources\n");
        printf("3. Update Resource\n");
        printf("4. Delete Resource\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);




        switch (choice) {
            case 1: addResource(); break;
            case 2: displayResources(); break;
            case 3: updateResource(); break;
            case 4: deleteResource(); break;
            case 5: freeAll(); printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 5);
}

int main() {
    menu();
    return 0;
}