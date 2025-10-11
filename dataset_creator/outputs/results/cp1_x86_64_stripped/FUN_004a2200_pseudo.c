
void FUN_004a2200(long param_1,int param_2)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x10) & 0x10) == 0) {
    FUN_0041ad60(*(undefined8 *)(param_1 + 8),"../crypto/asn1/asn1_lib.c",0x16c);
  }
  if (param_2 == 0) {
    FUN_0041ad60(param_1,"../crypto/asn1/asn1_lib.c",0x16e);
    return;
  }
  return;
}

