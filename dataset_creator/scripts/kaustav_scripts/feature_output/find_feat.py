#!/usr/bin/env python3
import os
import re
import numpy as np
from math import log2

def shannon_entropy(data):
    if not data: return 0
    freq = [data.count(c) for c in set(data)]
    probs = [f / len(data) for f in freq]
    return -sum(p * log2(p) for p in probs)

def extract_features_from_code(code):
    features = {}

    # 1. Operation counts
    features['xor_count'] = len(re.findall(r'\^', code))
    features['shift_count'] = len(re.findall(r'<<|>>', code))
    features['loop_count'] = len(re.findall(r'for\s*\(|while\s*\(', code))

    # 2. AES constant pattern detection
    sbox_pattern = r'0x63.*0x7C.*0x77.*0x7B'
    gf_pattern   = r'0x02.*0x03.*0x09.*0x0B.*0x0D.*0x0E'
    rcon_pattern = r'0x01.*0x02.*0x04.*0x08.*0x10'

    features['const_sbox_present'] = bool(re.search(sbox_pattern, code))
    features['const_gf_present']   = bool(re.search(gf_pattern, code))
    features['const_rcon_present'] = bool(re.search(rcon_pattern, code))

    # 3. Estimate entropy of static arrays
    arrays = re.findall(r'\{([^}]+)\}', code)
    entropies = []
    for arr in arrays:
        bytes_list = re.findall(r'0x[0-9A-Fa-f]+', arr)
        byte_values = [int(x, 16) for x in bytes_list]
        if len(byte_values) > 32:
            entropies.append(shannon_entropy(byte_values))
    features['entropy_mean'] = np.mean(entropies) if entropies else 0

    # 4. Size-based feature
    features['func_size'] = len(code.split('\n'))

    return features


def analyze_directory(folder):
    all_features = []
    for fname in os.listdir(folder):
        if not fname.endswith('.c'):
            continue
        with open(os.path.join(folder, fname), 'r', errors='ignore') as f:
            code = f.read()
        feats = extract_features_from_code(code)
        feats['filename'] = fname
        all_features.append(feats)
    return all_features


if __name__ == "__main__":
    folder = "/home/kaustav/sih2025/bn/binary-analyzer/dataset_creator/outputs/results/aes/"
    features = analyze_directory(folder)

    for f in features:
        print(f)
