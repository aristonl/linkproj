Link Website Template
=====================

This is a basic template for anyone needing to quickly setup a 
new website using `Link <https://github.com/N11Software/Link>`
as a web library.

Building and Running
--------------------
Make sure you have Link installed on your system before using
this. You will also need CMake and Ninja on your system. Make
will *probably* work fine but this isn't tested. To build the
site, run
::
	$ cmake -GNinja .
	$ ninja

This will create the executable ``website`` which you can run
with
::
	$ ./website

which hosts the site at port 3000.

	**NOTE**: *Link doesn't work well natively on Windows and
	will have to run via WSL to work correctly.
