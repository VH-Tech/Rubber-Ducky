# Rubber-Ducky

This Rubber-Ducky script downloads and executes the payload.ps1 powershell script which essentially opens a netcat reverse shell from a Windows machine to the host computer.

#On the host machine :
1. Open a netcat listener on any port (4444 is used by script by default): nc -vlp \<your port number\>
![](https://github.com/VH-Tech/Rubber-Ducky/blob/master/netcat.PNG)
2. Allow ports 80 and 4444 in host machine. 
3. Download and modify payload.ps1 by changing the IP address of your host machine and the port you choose earlier.
4. You now need to host the payload on a web server so it can be downloaded on the Windows computer. There are many ways to do this, but for anyone who wants a quick and easy solution you can host a php web server from the linux terminal like this: sudo php -S 0.0.0.0:80 -t /directory/to/folder/of/powershellScript/
![](https://github.com/VH-Tech/Rubber-Ducky/blob/master/php.PNG)
5. Download and edit the Reverse_Shell.ino DigiSpark script to change the IP address where the ps1 powershell script is hosted and compile and load Reverse_Shell.ino to your DigiSpark.
<br><i>**See Linux.mkv to see how it works on linux system</i>

On the Windows machine:
Plug in the Rubber-Ducky and enjoy your reverse shell on the host machine!<br>
<i>**See windows.mkv to see how it works on a victim's computer</i>

Hope You like my work!!
PS: Plz use it responsibly.

