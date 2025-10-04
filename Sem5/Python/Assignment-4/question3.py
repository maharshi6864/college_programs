class MenuItem:
    def __init__(self, item_no, name, price):
        self.item_no = item_no
        self.name = name
        self.price = price
        
    def get_item_info(self):
        return f"Item No: {self.item_no}, Name: {self.name}, Price: {self.price}"

class Order:
    def __init__(self, table_no, order_no):
        self.items = []
        self.order_no = order_no
        self.table = table_no

    def add_item(self, menu_item, quantity):
        for _ in range(quantity):
            self.items.append(menu_item)

    def compute_total(self):
        total = sum(item.price for item in self.items)
        return total

    def display_order_info(self):
        print(f"Order No: {self.order_no}")
        print(f"Table No: {self.table}")
        print("Ordered Items:")
        item_counts = {}
        for item in self.items:
            if item.name in item_counts:
                item_counts[item.name] += 1
            else:
                item_counts[item.name] = 1
        
        for item_name, count in item_counts.items():
            item = next(item for item in self.items if item.name == item_name)
            print(f"{item.get_item_info()} x {count}")
        
        total_without_tax = self.compute_total()
        tax = total_without_tax * 0.18
        total_with_tax = total_without_tax + tax
        print(f"Total (without tax): {total_without_tax}")
        print(f"Tax (18%): {tax}")
        print(f"Total (with tax): {total_with_tax}")

def main():
    menu_items = [
        MenuItem(1, "Pizza", 300),
        MenuItem(2, "Burger", 150),
        MenuItem(3, "Pasta", 250),
        MenuItem(4, "Salad", 100),
        MenuItem(5, "Soup", 120),
        MenuItem(6, "Fries", 80)
    ]

    order_no = int(input("Enter order number: "))
    table_no = int(input("Enter table number: "))
    order1 = Order(table_no, order_no)

    print("Select items to add to the order:")
    while True:
        print("Menu:")
        for item in menu_items:
            print(item.get_item_info())
        item_no = int(input("Enter item number to add to order: "))
        quantity = int(input("Enter quantity: "))
        selected_item = next(item for item in menu_items if item.item_no == item_no)
        order1.add_item(selected_item, quantity)
        more = input("Do you want to add another item? (yes/no): ")
        if more.lower() != 'yes':
            break

    order1.display_order_info()

if __name__ == "__main__":
    main()
