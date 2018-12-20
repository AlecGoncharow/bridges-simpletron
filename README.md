# bridges-simpletron
To fully pull this repo, you need to also pull the submodules with:  
`git submodule init`  
`git submodule update`  

To build, you need to generate the Makefile with cmake:  
`cmake CMakeLists.txt`  
And then:  
`make`

Your compiled code should show up in your `./bin` directory.

You will need to have `BRIDGES_USER_NAME` and `BRIDGES_API_KEY` set in your `env`, otherwise you can pass
your BRIDGES user name and API key as args to the binary respectively.
