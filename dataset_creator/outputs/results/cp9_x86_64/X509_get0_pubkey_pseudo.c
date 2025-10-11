
undefined8 X509_get0_pubkey(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = X509_PUBKEY_get0(*(undefined8 *)(param_1 + 0x50));
    return uVar1;
  }
  return 0;
}

