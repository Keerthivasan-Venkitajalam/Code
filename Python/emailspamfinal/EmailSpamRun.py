import tkinter as tk
from EmailSpamPreload import msg_classify

def process_text():
    entered_text = text_entry.get("1.0", tk.END)
    result = msg_classify(entered_text)
    result_label.config(text=f"Classification:\n{result}")

window = tk.Tk()
window.title("Email Spam Detection GUI")

text_entry = tk.Text(window, height=10, width=50, font=("Montserrat, 16"))
text_entry.pack(padx=10, pady=10)

process_button = tk.Button(window, text="Classify", command=process_text, height=1,width=8, font=("Montserrat, 16"))
process_button.pack(pady=15)

result_label = tk.Label(window, text="Classification:", font=("Montserrat, 16"))
result_label.pack(pady=15)

window.mainloop()
