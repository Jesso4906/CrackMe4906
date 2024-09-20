inputUsername = input("Inputed username: ")
windowsUsername = input("Windows username: ")

password = ""
if len(inputUsername) > len(windowsUsername):
    for i in range(0, len(windowsUsername)):
        password += chr((ord(inputUsername[i]) + ord(windowsUsername[i])) // 2)
else:
    for i in range(0, len(inputUsername)):
        password += chr((ord(inputUsername[i]) + ord(windowsUsername[i])) // 2)

print(password)
input()