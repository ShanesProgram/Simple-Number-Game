# Simple Number Game
## Description

The game starts with letting the player pick a number (1-9), then the computer picks a number (1-9 as well). If the numbers match, the player wins, if the numbers don't, the player can try again.

## Installation

### Windows

1. Clone Repository 
    - Go to the github page for this project
    - Click the green button labelled "code"
    - Go under the Local Tab
    - Click "Download Zip"
    - Once downloaded, unzip the folder
2. Go into the repositories directory on your device
3. Run the program "simpleNumberGameWin.exe"

### Linux (Ubuntu)

1. Ensure that Git is installed
```
sudo apt update
sudo apt install git
```
2. Clone the repository
```
git clone https://github.com/ShanesProgram/Simple-Number-Game.git
```
3. Run the binary file
```
cd Simple-Number-Game/
./simpleNumberGameLin
```

### Linux (Other)
I don't have instructions for other linux distros but if you are using a distro that isn't Ubuntu, you are probably smart enough to figure it out.

## Building From Source

### Linux

Prerequisites:
-GNU G++

1. Clone the repository
```
git clone https://github.com/ShanesProgram/Simple-Number-Game.git
```
2. Compile the source
```
cd Simple-Number-Game/
cd build/
cmake -G "Unix Makefiles" ../Linux
make
```
3.Execute by running the following command
```
-./simpleNumberGameLin
```

### Windows

Prerequisites:
- Visual Studio Code
- PowerShell
- GNU G++

1. Clone the repository
   - Go to the github page for this project
   - Click the green button labelled "code"
   - Go under the Local Tab
   - Click "Download Zip"
   - Once downloaded, unzip the folder
2. Inside a powershell window, located in the project's directory, run the following
```
cd build/
cmake -G "Visual Studio" ../Windows
make
```
3. Now you can execute with the following
```
simpleNumberGameWin.exe
```
