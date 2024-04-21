package tree_sitter_baabnq_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-baabnq"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_baabnq.Language())
	if language == nil {
		t.Errorf("Error loading Baabnq grammar")
	}
}
