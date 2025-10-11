
void FUN_004d6590(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_0041ad60(*(undefined8 *)(lVar1 + 0x40),"../crypto/dh/dh_pmeth.c",0x4f);
    FUN_004a06b0(*(undefined8 *)(lVar1 + 0x30));
    FUN_0041ad60(lVar1,"../crypto/dh/dh_pmeth.c",0x51);
    return;
  }
  return;
}

