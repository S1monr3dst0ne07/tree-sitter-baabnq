cat init.lua >> ~/.config/lvim/config.lua

mkdir -p ~/.config/nvim/queries/baabnq
cp queries/highlights.scm "$_"
mkdir -p ~/.local/share/nvim/queries/baabnq
cp queries/highlights.scm "$_"

if [ -d ~/.local/share/lunarvim ]; then
    mkdir -p ~/.local/share/lunarvim/site/pack/lazy/opt/nvim-treesitter/queries/baabnq/
    cp queries/highlights.scm "$_"
fi

