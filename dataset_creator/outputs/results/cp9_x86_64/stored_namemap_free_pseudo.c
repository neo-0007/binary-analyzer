
void stored_namemap_free(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    *param_1 = *param_1 & 0xfe;
    ossl_namemap_free();
    return;
  }
  return;
}

