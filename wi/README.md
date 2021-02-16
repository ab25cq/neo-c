# wi 

vi clone implemented by neo-c

some compatibility for vim

version 1.0.2

/ → plain text search

g/ → regex search

C-F → open the side bar(filer mode)

In The Side Bar

enter → write the file of current window and open the cursor file

x → execute command to the cursor file

o → open the cursor file in the new window

: → open bash

\* → filter the files in the current directory by the result of inputed command

/ → search files

Back Space → move the parent directory

C-l → reread the current directory

n → next the searching files

N → preve the searching files

C-c, C-f → return the editor

* Command mode

run sevenstar shell.

wq,qw ---> write file and close win or exit application.
q --> close win or exit application.
texts() --> return list<string> of editor texts. In the vidual mode, return list<string> of seleted texts
sp [path]--> open texts in the new window

If there is a result of shell, pasted texts to the editor. Only the case is string type or list<string> type.


