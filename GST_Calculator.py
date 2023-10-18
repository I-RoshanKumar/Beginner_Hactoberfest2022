def calculate_gst(amount):
    gst_rate = 0.18  # 18% GST rate, you can modify this according to your requirement
    gst_amount = amount * gst_rate
    total_amount = amount + gst_amount
    return gst_amount, total_amount

# Example usage
amount = float(input("Enter the amount: "))
gst_amount, total_amount = calculate_gst(amount)
print("GST amount: ", gst_amount)
print("Total amount (including GST): ", total_amount)
