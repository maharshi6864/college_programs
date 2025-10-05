import tkinter as tk
from tkinter import messagebox

root=tk.Tk()
root.geometry("1200x1200")
label=tk.Label(root,text="Choose Your Favourite Food.")
label.pack()
label1=tk.Label(root)
var1=tk.BooleanVar()
var2=tk.BooleanVar()
var3=tk.BooleanVar()

def display_selected_values():
  food_items=[]
  if var1.get():
    food_items.append("Banana")
  if var2.get():
    food_items.append("Chicken")
  if var3.get():
    food_items.append("Stuffed Peppers")
  # print(len(food_items))
  label1.config(text=", ".join(food_items))
  food_items.clear()

c1=tk.Checkbutton(root,text="Banana",command=display_selected_values,variable=var1)
c2=tk.Checkbutton(root,text="Chicken",command=display_selected_values,variable=var2)
c3=tk.Checkbutton(root,text="Stuffed Peppers",command=display_selected_values,variable=var3)

c1.pack()
c2.pack()
c3.pack()

label1.pack()


root.mainloop()