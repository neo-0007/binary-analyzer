#!/usr/bin/env python3

# extract_features.py
import os
import re
import math
import pandas as pd

def shannon_entropy(data):
    if not data:
        return 0
    counts = {}
    for c in data:
        counts[c] = counts.get(c, 0) + 1
    probs = [float(v)/len(data) for v in counts.values()]
    return -sum(p * math.log2(p) for p in probs)

def analyze_file(path):
    with open(path, "r") as f:
        code = f.read()

    # Lines & size
    lines = code.splitlines()
    n_lines = len(lines)
    
    # Count loops and conditionals
    loops = sum(1 for l in lines if re.search(r"\b(for|while|do)\b", l))
    conditionals = sum(1 for l in lines if re.search(r"\b(if|else if|switch)\b", l))
    
    # Arithmetic operations
    xor_ops = len(re.findall(r"\^", code))
    add_ops = len(re.findall(r"\+", code))
    mul_ops = len(re.findall(r"\*", code))
    
    # Entropy of code (as string)
    entropy = shannon_entropy(code)

    # AES-specific operations (S-box lookup)
    sbox_ops = len(re.findall(r"sbox|aes_sbox", code, re.IGNORECASE))

    return {
        "file": os.path.basename(path),
        "n_lines": n_lines,
        "loops": loops,
        "conditionals": conditionals,
        "xor_ops": xor_ops,
        "add_ops": add_ops,
        "mul_ops": mul_ops,
        "entropy": entropy,
        "sbox_ops": sbox_ops
    }

def analyze_directory(folder):
    features = []
    for fname in os.listdir(folder):
        if fname.endswith(".c"):
            path = os.path.join(folder, fname)
            features.append(analyze_file(path))
    return pd.DataFrame(features)

if __name__ == "__main__":
    folder = "/home/kaustav/sih2025/bn/binary-analyzer/dataset_creator/outputs/results/aes/"  # AES function export folder
    df = analyze_directory(folder)
    df.to_csv("aes_features.csv", index=False)
    print(f"Saved features for {len(df)} functions to aes_features.csv")
