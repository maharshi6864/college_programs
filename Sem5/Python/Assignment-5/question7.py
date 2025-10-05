import tkinter as tk

root=tk.Tk()

root.geometry("1200x1200")

l1=tk.Label(root,text="Enter Num 1")
l1.pack()
i1=tk.Entry(root)
i1.pack()
l2=tk.Label(root,text="Enter Num 2")
l2.pack()
i2=tk.Entry(root)
i2.pack()
l3=tk.Label(root,text="The Sum is :")
l3.pack()
i3=tk.Entry(root)
i3.pack()

def get_values_and_operate():
  a=int(i1.get())
  b=int(i2.get())
  i3.delete(0,tk)
  i3.insert(0,a+b)

def close_program():
  exit()

but=tk.Button(root,text="Show",command=get_values_and_operate)
but.pack()
but1=tk.Button(root,text="Close",command=close_program)
but1.pack()

root.mainloop()