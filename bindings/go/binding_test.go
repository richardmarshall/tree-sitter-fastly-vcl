package tree_sitter_fastly_vcl_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-fastly_vcl"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_fastly_vcl.Language())
	if language == nil {
		t.Errorf("Error loading Fastly VCL grammar")
	}
}
