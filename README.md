

---

# 🌿 farm-resource-crud-management

📘 **Farm Resource Management System (CRUD using Linked List / Graph Concept)**

---

## 👥 Team Members

* v.pallavi
* R.jayanthi

---

## 🎯 Problem Statement

In agriculture, managing resources like seeds, fertilizers, water, and tools is essential for productivity.

This project implements a **Farm Resource Management System** using C to efficiently perform **CRUD operations** on resources.

---

## 🌍 Real-Time Application

This system simulates how farmers or agricultural managers track and manage farm resources.

### Example:

Farm Resources
├── Fertilizer (50 kg)
├── Seeds (30 kg)
├── Water (100 litre)
├── Pesticides (20 litre)

---

## 🏗 Data Structure Used

**Linked List (Dynamic Data Structure)**

Implemented using:

* `struct`
* Pointer-based node linking (`next`)
* Dynamic memory allocation

---

## 🔁 Features (CRUD Operations)

| Operation      | Description                       |
| -------------- | --------------------------------- |
| Create         | Add new resource                  |
| Read           | Display all resources             |
| Update         | Modify resource details           |
| Delete         | Remove resource                   |
| Memory Cleanup | Free allocated memory before exit |

---

## ⚙️ Algorithm Explanation

### ➤ Add Resource

* Create new node using `malloc`
* Insert at beginning of linked list

### ➤ Display Resources

* Traverse list from head to NULL
* Print details of each node

### ➤ Update Resource

* Search by ID
* Modify name, quantity, and unit

### ➤ Delete Resource

* Search node by ID
* Adjust pointers and free memory

### ➤ Free Memory

* Traverse entire list
* Free all nodes before exiting

---

## 💻 Technologies Used

* C Programming Language
* GCC Compiler
* Dynamic Memory Allocation (`malloc`, `free`)

---

## ▶️ Compilation & Execution

```bash
gcc main.c -o farm

./farm
```

---

## 📊 Sample Output

```
🌿 Agriculture Monitoring System

1. Add Resource
2. Display Resources
3. Update Resource
4. Delete Resource
5. Exit

Enter choice: 1

Enter Resource ID: 1
Enter Resource Name: Fertilizer
Enter Quantity: 50
Enter Unit: kg

✅ Resource added successfully!
```

---

## 📂 Project Structure

```
farm-resource-crud-management/

│
├── src/
│   └── main.c
│
├── docs/
│   └── project_report.pdf
│
├── ppt/
│   └── presentation.pptx
│
├── sample_output.txt
│
└── README.md
```

--

## 📈 Results

* Successfully implemented linked list-based resource system
* Performed all CRUD operations efficiently
* Demonstrated dynamic memory allocation

---

## ✅ Conclusion

This project shows how **linked lists** can be used in real-world agricultural systems to manage dynamic data efficiently.

---

## 🔮 Future Enhancements

* Add search functionality 🔍
* Store data using files 💾
* Convert into GUI application 🖥️
* Add categorization (Tree/Graph-based system) 🌳

---

## 📚 References

* Data Structures in C – Books & Notes
* Online tutorials and documentatioN
