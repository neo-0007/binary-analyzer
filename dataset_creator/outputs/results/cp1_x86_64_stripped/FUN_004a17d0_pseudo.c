
void FUN_004a17d0(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    return;
  }
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x10),"../crypto/asn1/ameth_lib.c",0x114);
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x18),"../crypto/asn1/ameth_lib.c",0x115);
  FUN_0041ad60(param_1,"../crypto/asn1/ameth_lib.c",0x116);
  return;
}

