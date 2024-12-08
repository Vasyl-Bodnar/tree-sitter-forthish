package tree_sitter_forthish_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_forthish "github.com/tree-sitter/tree-sitter-forthish/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_forthish.Language())
	if language == nil {
		t.Errorf("Error loading Forthish grammar")
	}
}
