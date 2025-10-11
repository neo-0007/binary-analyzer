
void FUN_00614350(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 4) & 1) != 0) {
    if ((*(uint *)(param_1 + 4) & 2) != 0) {
      FUN_0041ad60(*(undefined8 *)(param_1 + 0x10),"../crypto/x509/x509_trust.c",0xbf);
    }
    FUN_0041ad60(param_1,"../crypto/x509/x509_trust.c",0xc0);
    return;
  }
  return;
}

