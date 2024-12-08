from unittest import TestCase

import tree_sitter, tree_sitter_forthish


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_forthish.language())
        except Exception:
            self.fail("Error loading Forthish grammar")
