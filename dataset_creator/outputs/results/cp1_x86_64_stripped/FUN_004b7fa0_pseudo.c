
void FUN_004b7fa0(long param_1)

{
  byte bVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = FUN_004b7e80(param_1,2);
  if (iVar2 == 0) {
    FUN_004b7e90(param_1,0);
    bVar1 = *(byte *)(param_1 + 0x14);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x14);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_0041ad60(param_1,"../crypto/bn/bn_lib.c",0xe8);
  return;
}

