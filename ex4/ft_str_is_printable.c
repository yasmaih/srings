Traceback (most recent call last):
  File "/home/yasmine.aichi/.local/bin/c_formatter_42", line 8, in <module>
    sys.exit(main())
             ~~~~^^
  File "/home/yasmine.aichi/.local/lib/python3.13/site-packages/c_formatter_42/__main__.py", line 43, in main
    print(run_all(content), end="")
          ~~~~~~~^^^^^^^^^
  File "/home/yasmine.aichi/.local/lib/python3.13/site-packages/c_formatter_42/run.py", line 29, in run_all
    content = clang_format(content)
  File "/home/yasmine.aichi/.local/lib/python3.13/site-packages/c_formatter_42/formatters/clang_format.py", line 70, in clang_format
    with _config_context():
         ~~~~~~~~~~~~~~~^^
  File "/usr/lib64/python3.13/contextlib.py", line 141, in __enter__
    return next(self.gen)
  File "/home/yasmine.aichi/.local/lib/python3.13/site-packages/c_formatter_42/formatters/clang_format.py", line 34, in _config_context
    CONFIG_FILENAME.symlink_to(config_path)
    ~~~~~~~~~~~~~~~~~~~~~~~~~~^^^^^^^^^^^^^
  File "/usr/lib64/python3.13/pathlib/_local.py", line 789, in symlink_to
    os.symlink(target, self, target_is_directory)
    ~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
FileNotFoundError: [Errno 2] No such file or directory: '/home/yasmine.aichi/.local/lib/python3.13/site-packages/c_formatter_42/data/.clang-format' -> '.clang-format'
