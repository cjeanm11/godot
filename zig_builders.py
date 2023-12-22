from platform_methods import subprocess_main
import os

def build_with_zig(source, target):
    if source == "arm64":
        source = "a64fx"

    command = f"zig build -Dcpu={source}"
    print("Building with Zig: ", command)
    os.system(command)

if __name__ == "__main__":
    subprocess_main(globals())
