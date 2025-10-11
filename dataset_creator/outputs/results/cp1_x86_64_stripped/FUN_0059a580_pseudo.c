
void FUN_0059a580(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    if ((*(uint *)(param_1 + 8) & 2) != 0) {
      FUN_0041ad60(*(undefined8 *)(param_1 + 0x18),"../crypto/x509/v3_purp.c",0xe2);
      FUN_0041ad60(*(undefined8 *)(param_1 + 0x20),"../crypto/x509/v3_purp.c",0xe3);
    }
    FUN_0041ad60(param_1,"../crypto/x509/v3_purp.c",0xe5);
    return;
  }
  return;
}

