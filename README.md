# ioi

<h6> wiki/codebase for ioi </h6>

### [Docs](https://lazydukk.github.io/ioi/docs/basic/basic.cpp)

---

### Setting up Windows / VS Code for development

- Install mysys2
- Run `pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain`
- Check whether the libraries are added `gcc --version && g++ --version && gdb --version`

### To Compile
- Run `g++ -o ./path/to/compiled/executable ./path/to/source`

### Linting errors in Zed (Windows)
- Run `pacman -S mingw-w64-ucrt-x86_64-clang-tools-extra` to install clang using mysys2
- Then edit the `settings.json` in Zed edito and add the following ->
`"lsp": {
    "clangd": {
      "binary": {
        "path": "C:\\msys64\\ucrt64\\bin\\clangd.exe",
      },
    },
  },
`
- Then restart the editor.
