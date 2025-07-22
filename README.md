# 🎲 Roll a Dice Game – C Language

Welcome to **Roll a Dice**, a simple two-player console game written in C. Players take turns to roll a die by pressing ENTER. The first player to reach 100 points wins!

---

## 🕹️ How to Play

- This is a two-player game played via the terminal.
- On each player's turn:
  - Press **ENTER** to roll the dice.
  - Type any other key + ENTER to **resign** the game.
- The dice roll will generate a random number between 1 and 6.
- Your score increases by the rolled value.
- The first player to reach **100 points** wins!

---

## 📂 Project Structure

```
roll_a_dice_game/
│
├── main.c         # Main game logic
├── main.exe       # EXE File
└── README.md      # Project description
```

---

## ⚙️ How to Run

### 🖥️ On Windows (with Dev-C++ / TDM-GCC)

1. Open Dev-C++ or any C IDE.
2. Paste the `main.c` code or open the file.
3. Compile and Run.

### 💻 Or via Terminal (GCC)

```bash
gcc main.c -o roll_dice_game
./roll_dice_game
```

---

## 🌟 Features

- Turn-based gameplay
- Simple input: ENTER to play, anything else to quit
- Random dice roll
- Automatic score tracking
- Win/resign detection

---

## 🚀 Future Improvements (Optional Ideas)

- Add player names
- Show dice as ASCII art
- Allow custom winning score
- Extra turn on rolling 6
- Save match history to file

---

## 🙌 Author

Developed by **Induwara Uthsara**  
📧 induwarauthsara19@gmail.com  
🌐 [induwara.dev](https://induwara.dev)

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).
