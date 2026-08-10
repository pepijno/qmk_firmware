{
  description = "qmk";

  inputs = {
    nixpkgs-unstable.url = "nixpkgs/nixos-unstable";
    utils.url = github:numtide/flake-utils;
  };

  outputs = { self, nixpkgs-unstable, utils }:
    utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs-unstable.legacyPackages."${system}";

        buildInputs = with pkgs; [
          qmk
          gnumake
          python3
          pkgsCross.avr.buildPackages.gcc
          clang-tools
        ];
      in
      rec {
        # `nix develop`
        devShell = pkgs.mkShell {
          inherit buildInputs;
        };
      });
}
