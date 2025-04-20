/*
Problem Statement



AV's Construction Company specializes in building residential and commercial properties. They are currently working on multiple construction projects simultaneously, and each project requires different construction materials. 



To manage the inventory efficiently, the company needs a system to keep track of the available construction materials and their quantities. They want to implement a program with functions to add new materials, update material quantities, and display the current inventory status. 



Help them write a program for the same using function templates.

Input format :
The first line consists of an integer 'n' representing the number of materials to add to the inventory.

In the next 'n' lines, each line consists of a string 'name' and an integer 'quantity', separated by a space, representing the name and quantity of material to add to the inventory.

The last line consists of a string 'name' and an integer 'quantity', separated by a space, representing the name and updated quantity of a material in the inventory.

Output format :
The program displays the messages as it adds materials to the inventory, updates the quantity of existing material, and displays the current inventory status.

The output displays the name and quantity of each material in the current inventory status.



Refer to the sample output for the formatting specifications.

Code constraints :
1 <= n <= 10

Sample test cases :
Input 1 :
3
Cement 100
Bricks 500
SteelBars 200
Cement 50
Output 1 :
Added 100 units of Cement to the inventory.
Added 500 units of Bricks to the inventory.
Added 200 units of SteelBars to the inventory.
Updated Cement quantity to 50 units in the inventory.
Current Inventory Status:
Cement: 50 units
Bricks: 500 units
SteelBars: 200 units
Input 2 :
3
Cement 100
Bricks 500
SteelBars 200
Steel 50
Output 2 :
Added 100 units of Cement to the inventory.
Added 500 units of Bricks to the inventory.
Added 200 units of SteelBars to the inventory.
Material Steel not found in the inventory.
Current Inventory Status:
Cement: 100 units
Bricks: 500 units
SteelBars: 200 units
*/

#include <iostream>
#include <string>

struct Material {
    std::string name;
    int quantity;
};

template <typename T>
void addMaterial(Material* inventory, size_t& size, size_t capacity, const std::string& name, T quantity) {
    if (size >= capacity) {
        // Increase capacity if needed
        capacity *= 2;
        Material* newInventory = new Material[capacity];
        for (size_t i = 0; i < size; i++) {
            newInventory[i] = inventory[i];
        }
        delete[] inventory;
        inventory = newInventory;
    }

    bool found = false;
    for (size_t i = 0; i < size; i++) {
        if (inventory[i].name == name) {
            inventory[i].quantity += quantity;
            found = true;
            break;
        }
    }
    if (!found) {
        inventory[size].name = name;
        inventory[size].quantity = quantity;
        size++;
    }

    std::cout << "Added " << quantity << " units of " << name << " to the inventory." << std::endl;
}

// Function template to update the quantity of an existing material in the inventory
template <typename T>
void updateQuantity(Material* inventory, size_t size, const std::string& name, T quantity) {
    for (size_t i = 0; i < size; i++) {
        if (inventory[i].name == name) {
            inventory[i].quantity = quantity;
            std::cout << "Updated " << name << " quantity to " << quantity << " units in the inventory." << std::endl;
            return;
        }
    }

    std::cout << "Material " << name << " not found in the inventory." << std::endl;
}

// Function to display the current inventory status
void displayInventory(Material* inventory, size_t size) {
    std::cout << "Current Inventory Status:" << std::endl;
    for (size_t i = 0; i < size; i++) {
        std::cout << inventory[i].name << ": " << inventory[i].quantity << " units" << std::endl;
    }
}

int main() {
    size_t capacity = 10;
    Material* inventory = new Material[capacity];
    size_t size = 0;

    std::string name;
    int quantity;
    int n;
    std::cin >> n;
    while (n!=0) {
        std::cin >> name;
        std::cin >> quantity;
        addMaterial(inventory, size, capacity, name, quantity);
        n--;
    }

    std::cin >> name;
    std::cin >> quantity;
    updateQuantity(inventory, size, name, quantity);

    displayInventory(inventory, size);
    delete[] inventory;
    return 0;
}