@echo off
rem ##############################################
rem Remote Desktop Protocol connect
rem 127.0.0.1 ... adjust hostname & passwd
rem ##############################################
Set SERVER=127.0.0.1
Set USERNAME=127.0.0.1\(^^)/
Set PASSWORD=<(_ _)>
Cmdkey /generic:TERMSRV/%SERVER% /user:%USERNAME% /pass:%PASSWORD%
start "" mstsc /v:%SERVER% /console
timeout 1
Cmdkey /delete:TERMSRV/%SERVER%
exit /b
