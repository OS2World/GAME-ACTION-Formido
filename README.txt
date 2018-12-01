Formido v1.0 - Win32 source release
Copyright (C) 2002, 2003 Mika Halttunen

	www.mhgames.cjb.net

Contact by email: lsoft@mbnet.fi
--------------------------------- -- -


--------------------------------------
1. LICENSE
--------------------------------- -- -

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  Read the file 'GPL_license.txt' for more detailed information.

 Basically, you have the right to modify/use the game (and it's source
code) in any way you like. This includes all kinds of distribution,
modifications or even new games derived from the source code.
However, if you distribute any modified/derived work, you must
give your licensees (ie. players) the same rights as you have.
This means releasing your work under the GNU GPL.

 As a side note, I'd appreciate if you told me about any modified
versions/new games based on Formido. You are not legally required
to do that, but I'd like to try them out =) If you use any Formido's
code, it would be nice if I was credited.


--------------------------------------
2. INFORMATION ABOUT THIS SOURCE RELEASE
--------------------------------- -- -

 This package contains the Formido's Win32 version source files,
which reside in /src and /include directories, and a MS VC++ 6
project/workspace files that can be used to build the
game right away. Keep reading..


--------------------------------------
3. HOW TO BUILD
--------------------------------- -- -

 Before you can build the game, you must have following
libraries: (download them all from www.libsdl.org)

SDL (v1.2.5)
SDL_Mixer (v1.2.4)
SDL_Image (v1.2.2)

I have used the versions shown in parentheses, so your
best bet is to use those versions. This is not strictly
required, however. You can probably build the game with
other versions too, at least if they're newer than those
I used.

 After you have built and installed the forementioned
libraries, you can launch your MS VC++ and open the
workspace file (Formido.dsw). After that, select
"Build | Set Active Configuration..." and choose
the "Win32 Release". You're ready to go.

 NOTE:
If you have MS VC++.net or MS VC++ 5, I'm not sure if you
can open the workspace directly, but you can try.
If not, then create a new workspace with Win32 project.
Set it to use Multithreaded-DLL and include the required
libraries (sdl.lib, sdl_main.lib, etc..).



 That's all for now.
 Have fun! (and possibly learn a thing or two =)

					- Mika Halttunen

