
To more easily create and edit your files on snellius, you can mount your files on snellius on your local computer. That way you can use Visual Studio Code on your local computer to edit the files. I'm assuming you use Ubuntu, adjust the instructions based on your operating system:

First install 'sshfs' and 'fusermount':

```
sudo apt install sshfs fuse3
```

Now create a mount point, lets call it '~/mnt', on your local computer:

```
mkdir -p ~/mnt
```

Mount the files on snellius to this mount point with:

```
sshfs <username>@snellius.surf.nl: ~/mnt/
```

Now you can access the files on snellius on your local computer as normal, for example:

```
ls ~/mnt/
```

Use VS Code or your favorite EDI to edit/create files. This is much easier than working in the command line if you are not used to that. However, to run the files you sill need to use a separate ssh connection with snellius as discussed previously.

When you are done, unmount the mount point with:

```
fusermount -u ~/mnt/
```
