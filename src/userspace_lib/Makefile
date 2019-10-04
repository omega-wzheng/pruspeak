all:
	python3 setup.py build

install: all
	python3 setup.py install
	install -m 755 bs_tcp_server.py /usr/bin
	install -m 755 bs_shell.py /usr/bin
