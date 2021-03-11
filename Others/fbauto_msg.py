import pyautogui
import time

m = 0
while m < 100:
    time.sleep(3)
    pyautogui.typewrite('Khanki-magi, tore chudi')
    pyautogui.press('enter')
    m += 1

# distance = 200;
# while distance > 0:
#     pyautogui.drag(distance, 0, duration=0.5)   # move right
#     distance -= 5
#     pyautogui.drag(0, distance, duration=0.5)   # move down
#     pyautogui.drag(-distance, 0, duration=0.5)  # move left
#     distance -= 5
#     pyautogui.drag(0, -distance, duration=0.5)  # move up
