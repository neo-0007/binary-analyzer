
undefined1 * ossl_rsa_digestinfo_encoding(int param_1,undefined8 *param_2)

{
  if (param_1 == 0x2a3) {
    *param_2 = 0x13;
    return digestinfo_sha224_der;
  }
  if (param_1 < 0x2a4) {
    if (param_1 == 0x101) {
      *param_2 = 0x12;
      return digestinfo_md4_der;
    }
    if (param_1 < 0x102) {
      if (param_1 == 0x40) {
        *param_2 = 0xf;
        return digestinfo_sha1_der;
      }
      if (param_1 == 0x75) {
        *param_2 = 0xf;
        return digestinfo_ripemd160_der;
      }
      if (param_1 == 4) {
        *param_2 = 0x12;
        return digestinfo_md5_der;
      }
    }
    else {
      if (param_1 == 0x2a1) {
        *param_2 = 0x13;
        return digestinfo_sha384_der;
      }
      if (param_1 == 0x2a2) {
        *param_2 = 0x13;
        return digestinfo_sha512_der;
      }
      if (param_1 == 0x2a0) {
        *param_2 = 0x13;
        return digestinfo_sha256_der;
      }
    }
  }
  else if (param_1 - 0x446U < 6) {
    if (param_1 - 0x447U < 5) {
      *param_2 = 0x13;
      switch(param_1) {
      case 0x447:
        return digestinfo_sha512_256_der;
      case 0x448:
        return digestinfo_sha3_224_der;
      case 0x449:
        return digestinfo_sha3_256_der;
      case 0x44a:
        return digestinfo_sha3_384_der;
      case 1099:
        return digestinfo_sha3_512_der;
      }
    }
    *param_2 = 0x13;
    return digestinfo_sha512_224_der;
  }
  return (undefined1 *)0x0;
}

