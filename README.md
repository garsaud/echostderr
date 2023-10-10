# echostderr
echo to stderr instead of stdin.

## building
```bash
make
```

## usage
```bash
./echostderr Hello world # Will send "Hello world\n" to stderr
./echostderr -n Hello world # Will send "Hello world" to stderr
./echostderr Hello world > /dev/null # The text will still appear in your TTY
./echostderr Hello world 2> /dev/null # Nothing will appear in your TTY, because stderr is silenced
```

## installing
```bash
make
make install
```
Default INSTALL_DIR is `/usr/local/bin`
