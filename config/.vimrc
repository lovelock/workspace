set et
set sw=4
set ts=4
set nu
set nocompatible
set enc=utf-8
filetype plugin on
set history=500
syntax on
set ai
set ci
set si
set showmatch
set relativenumber
set incsearch
set foldenable
set fdm=syntax
set modeline
if has('autocmd')
    filetype plugin indent on
endif

autocmd BufNewFile *.php exec ":call SetTitle()"
func SetTitle()
if &filetype == 'php'
    call setline(1, "<?php")
endif
endfunc
autocmd BufNewFile * normal G
