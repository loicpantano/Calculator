# 🧮 Calculator
This is a simple calculator that can perform basic operations such as addition, subtraction, multiplication and division made during my free time. It uses a grammar to parse the input and convert it to Reverse Polish Notation (RPN) to evaluate the expression.

## 🎬 Preview
There is no graphical interface for this project, the calculator is used in the terminal. Here is a preview of the calculator in action.<br>
![demo](https://i.imgur.com/aPEONI5.png)

## 🔌Download
To Download the project on windows/Ubuntu you first need to clone the repository with 
```
git clone https://github.com/loicpantano/Calculator.git <your directory>
```


## 💻 Installation
### 🪟 Windows
On windows the easiest way to launch the project is to use the ide clion where you will be able to start the project without any problem.
If Clion isn't available you can also use the commands cmake and make (cf linux).

### 🐧 Linux
To build the project on linux you will first have to go to the directory where you want your linux project to be, then you will have to use the command 
```
cmake -S <path-to-the-CMakeLists.txt> -B build -DCMAKE_BUILD_TYPE=Release
``` 
followed by the following command in the build folder created
```
make
```
to obtain the executable that you will be able to start with 
```
./Calculator
```
If the cmake command doesn't work that mean that you're missing some linux packages, to fix that you can run the following commands
```
sudo apt-get update
sudo apt install libsfml-dev gdb cmake build-essential libvorbis-dev libopenal-dev freetype2-demos libudev-dev libx11-dev libxrandr-dev
```

## 📜 License
This project is licensed under the MIT License - see the LICENSE file for details.
