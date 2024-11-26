config/
-------

 - get-autotools.sh -- script to download and build the core GNU Autotools

      - **NOTE** Highly recommended that you run this script from a
        directory outside this source tree to avoid conflicts and/or
        confusion with installing missing files by automake, etc.

    ```
    $ cp config/get-autotools.sh ../
    $ cd ../
    $ ./get-autotools.sh

      # <...snip ouput...>

     === FOR EXAMPLE WITH BASH ===

     export PATH=/home/3t4/projects/dvast/hello-autotools/config/gnu/bin:$PATH
     export LD_LIBRARY_PATH=/home/3t4/projects/dvast/hello-autotools/config/gnu/lib:$LD_LIBRARY_PATH

     =============================
    ```

    Then, set the `PATH` and `LD_LIBRARY_PATH` environment variables to use the
    newly installed Autotools.


