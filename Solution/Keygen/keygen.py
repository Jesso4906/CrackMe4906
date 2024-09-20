inputUsername = input("Inputed username: ")
windowsUsername = input("Windows username: ")

minLen = len(inputUsername)
if len(inputUsername) > len(windowsUsername):
    minLen = len(windowsUsername)

password = ""
for i in range(0, minLen):
    password += chr((ord(inputUsername[i]) + ord(windowsUsername[i])) // 2)

print(password)
input()