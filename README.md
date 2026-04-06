AGRICULTURE MONITOTING 



Got it — you want a **clean, professional README exactly like that format**, but for your **Agriculture Monitoring System (linked list version)**. Here it is 👇

---

# 🌿 **Agriculture Resource Management System**

## **Abstract**

The *Agriculture Resource Management System* is a console-based application developed in **C programming language**.
It helps manage farm resources such as seeds, fertilizers, and water efficiently using **CRUD operations**.

The system uses a **singly linked list** for dynamic data storage and memory management. Unlike file-based systems, this program stores data temporarily during execution and clears memory upon exit. It is ideal for understanding **data structures and pointer-based operations** in C.

---

## **Features**

* ➕ **Add Resource** – Insert new farm resources with ID, name, quantity, and unit
* 📋 **View Resources** – Display all stored resources
* ✏️ **Update Resource** – Modify existing resource details using ID
* ❌ **Delete Resource** – Remove a resource from the list
* 🧠 **Dynamic Memory Management** – Uses `malloc()` and `free()`
* 🔁 **Menu-Driven Interface** – Easy navigation for users

---

## **Technical Requirements**

### **1. System Requirements**

* Any system capable of running a C program
* Terminal / Command Prompt access
* Minimal RAM (lightweight program)

---

### **2. Software Requirements**

* GCC / Clang / Turbo C compiler
* Code editor (VS Code, CodeBlocks, Dev-C++, etc.)
* Command-line interface

---

### **3. Programming Requirements**

* Knowledge of:

  * Structures (`struct`)
  * Pointers and linked lists
  * Functions
  * Loops and conditional statements
  * Standard I/O (`printf`, `scanf`)

---

### **4. Memory Management Requirements**

* Dynamic allocation using `malloc()`
* Proper deallocation using `free()`
* Avoid memory leaks using cleanup function

---

### **5. Compilation Requirements**

* C compiler installed and configured

```
gcc agriculture.c -o agriculture
```

---

## ⚙️ **Fundamental Requirements**

### **1. User Interface**

* Display a clear menu with all operations
* Accept user input via keyboard
* Show formatted output and messages
* Repeat menu until user exits

---

### **2. Resource Operations**

* Add new resources with details
* View all resources in list format
* Update resource using unique ID
* Delete resource by ID

---

### **3. Data Management**

* Store data dynamically using linked list
* Maintain proper node connections
* Ensure no memory leaks
* Clear all data before program exit

---

### **4. Program Flow**

* Display menu → accept user choice
* Call respective functions:

  * `addResource()`
  * `displayResources()`
  * `updateResource()`
  * `deleteResource()`
* Handle invalid inputs
* Exit safely using `freeAll()`

---

## **Project File Structure**

```
Agriculture-Resource-System/
│
├── agriculture.c      # Main source code
└── README.md          # Project documentation
```

---

## **How to Compile and Run**

### **Step 1: Open Terminal**

Navigate to the project folder.

---

### **Step 2: Compile**

```
gcc agriculture.c -o agriculture
```

---

### **Step 3: Run**

```
./agriculture
```

---

### **On Windows**

```
agriculture.exe
```

---

## **Sample Output**

### **MAIN MENU**

```
🌿 Agriculture Monitoring System
1. Add Resource
2. Display Resources
3. Update Resource
4. Delete Resource
5. Exit
Enter choice:
```

---

### **1. ADD RESOURCE**

```
Enter Resource ID: 101
Enter Resource Name: Seeds
Enter Quantity: 25
Enter Unit: kg

✅ Resource added successfully!
```

---

### **2. VIEW RESOURCES**

```
--- Farm Resources ---
ID: 101
Name: Seeds
Quantity: 25.00 kg
----------------------
```

---

### **3. UPDATE RESOURCE**

```
Enter Resource ID to update: 101
Enter new name: Fertilizer
Enter new quantity: 30
Enter new unit: kg

✅ Resource updated successfully!
```

---

### **4. DELETE RESOURCE**

```
Enter Resource ID to delete: 101

✅ Resource deleted successfully!
```

---

