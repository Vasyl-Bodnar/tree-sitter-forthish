// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterForthish",
    products: [
        .library(name: "TreeSitterForthish", targets: ["TreeSitterForthish"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterForthish",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterForthishTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterForthish",
            ],
            path: "bindings/swift/TreeSitterForthishTests"
        )
    ],
    cLanguageStandard: .c11
)
