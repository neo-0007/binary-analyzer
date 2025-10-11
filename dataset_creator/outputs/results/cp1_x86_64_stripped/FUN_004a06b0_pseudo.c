
void FUN_004a06b0(undefined8 *param_1)

{
  uint uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 & 4) != 0) {
    FUN_0041ad60(*param_1,"../crypto/asn1/a_object.c",0x16e);
    FUN_0041ad60(param_1[1],"../crypto/asn1/a_object.c",0x16f);
    uVar1 = *(uint *)(param_1 + 4);
    param_1[1] = 0;
    *param_1 = 0;
  }
  if ((uVar1 & 8) != 0) {
    FUN_0041ad60(param_1[3],"../crypto/asn1/a_object.c",0x174);
    uVar1 = *(uint *)(param_1 + 4);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
  }
  if ((uVar1 & 1) != 0) {
    FUN_0041ad60(param_1,"../crypto/asn1/a_object.c",0x179);
    return;
  }
  return;
}

