# ExportCode.py
# Ghidra Headless Python script to export pseudo-C and ASM for all functions
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from java.io import File
import os
import re

# -----------------------------
# Step 1: Set the output folder from command line argument
# -----------------------------
# Get script arguments from Ghidra
script_args = getScriptArgs()

#regex to identify aes function:
aes_pattern = re.compile(r".*aes.*|.*AES.*", re.IGNORECASE)

print("[DEBUG] Script arguments: " + str(script_args))
print("[DEBUG] Number of arguments: " + str(len(script_args)))

if len(script_args) < 1:
    print("[!] No output folder provided as argument. Exiting.")
    print("[!] Usage: -postScript ExportCode.py <output_directory>")
    exit(1)

# First argument is the output directory
results_dir = script_args[0]
print("[*] Output directory will be: " + results_dir)

# Create directory if it doesn't exist
results_file = File(results_dir)
if not results_file.exists():
    results_file.mkdirs()
    print("[*] Created output directory")

# -----------------------------
# Step 2: Initialize decompiler
# -----------------------------
print("[*] Initializing decompiler...")
decomp = DecompInterface()
decomp.openProgram(currentProgram)

# -----------------------------
# Step 3: Get all functions
# -----------------------------
func_manager = currentProgram.getFunctionManager()
funcs = list(func_manager.getFunctions(True))

print("[*] Found " + str(len(funcs)) + " functions")

if len(funcs) == 0:
    print("[!] WARNING: No functions found! Make sure the binary is analyzed.")
    exit(1)

# -----------------------------
# Step 4: Export each function
# -----------------------------
success_count = 0
error_count = 0

for i, f in enumerate(funcs):
    try:
        func_name = f.getName()
        #filter only AES functions using regex
        # if not aes_pattern.match(func_name):
        #     continue

        # Sanitize file name - remove/replace invalid characters
        func_name = re.sub(r"[<>:/\\*?]", "_", func_name)
        
        if (i + 1) % 10 == 0 or i == 0:
            print("[*] Processing function " + str(i + 1) + "/" + str(len(funcs)) + ": " + func_name)
        
        # Step 4a: Get pseudo C
        res = decomp.decompileFunction(f, 60, ConsoleTaskMonitor())
        
        if res and res.decompileCompleted():
            decomp_func = res.getDecompiledFunction()
            if decomp_func:
                pseudo = decomp_func.getC()
                
                pseudo_file = os.path.join(results_dir, func_name + "_pseudo.c")
                with open(pseudo_file, "w") as pf:
                    pf.write(pseudo)
            else:
                error_count += 1
                continue
        else:
            error_count += 1
            continue
        
        # Step 4b: Get ASM
        asm_file = os.path.join(results_dir, func_name + "_asm.txt")
        with open(asm_file, "w") as af:
            listing = currentProgram.getListing()
            addr_set = f.getBody()
            
            if addr_set:
                instrs = addr_set.getAddresses(True)
                for addr in instrs:
                    instr = listing.getInstructionAt(addr)
                    if instr:
                        af.write(str(addr) + " " + str(instr) + "\n")
        
        success_count += 1
        
    except Exception as e:
        print("[ERROR] Failed to process function " + str(i) + ": " + str(e))
        import traceback
        traceback.print_exc()
        error_count += 1
        continue

print("\n" + "="*60)
print("[SUCCESS] Export completed!")
print("   Output folder: " + results_dir)
print("   Successfully exported: " + str(success_count) + " functions")
print("   Errors: " + str(error_count) + " functions")
print("="*60)

# List some files to verify
print("\n[*] Sample output files:")
files = results_file.listFiles()
if files:
    for i, f in enumerate(files[:10]):
        print("    " + f.getName())
    if len(files) > 10:
        print("    ... and " + str(len(files) - 10) + " more files")
else:
    print("    [!] No files found in output directory!")
    print("    [!] Check if script has write permissions")