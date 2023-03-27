# lolcat

A Python program that emulates the behavior of the "lolcat" program.

## Usage

```
usage: lolcat [-h] [-a] [-f [FILES [FILES ...]]]

Emulate the "lolcat" program with Python!

optional arguments:
  -h, --help            show this help message and exit
  -a, --animate         animate the output text (default: False)
  -f [FILES [FILES ...]], --files [FILES [FILES ...]]
                        files to concatenate (default: None)
```

## Examples

Concatenate two files and colorize the text:

```
cat file1.txt file2.txt | python main.py
```

Concatenate three files, colorize the text, and animate it vertically:

```
python main.py -a -f file1.txt file2.txt file3.txt
```

**Note:** If the program is run without any command line arguments, it will expect input from standard input.
