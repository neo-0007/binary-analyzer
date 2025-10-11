## Feature extraction using python:

The python script will:
1.Iterate over .c files (from Ghidra or your dataset)

2.Parse code (using regex or a proper parser)

3.Count operations, constants, and patterns

4.Output a feature vector per file (or per binary)

we will need to install: pip install pycparser lief capstone numpy

pycparser --> Parses C files → builds AST (Abstract Syntax Tree)
re (regex) -->	Quick pattern matching for constants or keywords
capstone -->	For low-level opcode disassembly if you work directly on ELF
lief -->	Extracts ELF sections, symbols, and constants
numpy -->	For feature vector storage and numeric ops

## Aes focused feature set:

Here’s a good AES-focused feature set:

xor_count -->	Number of XOR operations (^)
shift_count	--> Number of << or >>
const_sbox_present --> Whether AES S-Box constants appear
const_gf_present --> GF(2⁸) multipliers {0x02,0x03,0x09,0x0B,0x0D,0x0E} found
const_rcon_present --> Round constants {0x01,0x02,0x04,...} found
entropy_tables --> Entropy of any large arrays (detect random-looking S-Boxes)
loop_count --> Number of for / while loops
func_size --> Approx. number of lines or tokens in the funct

