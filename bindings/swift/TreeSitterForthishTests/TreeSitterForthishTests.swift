import XCTest
import SwiftTreeSitter
import TreeSitterForthish

final class TreeSitterForthishTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_forthish())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Forthish grammar")
    }
}
