
void FUN_005bfdd0(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 4) == 1) {
    do {
      lVar1 = *(long *)(param_1 + 0x28);
      FUN_0041ad60(*(undefined8 *)(param_1 + 0x18),"../crypto/bio/bio_addr.c",0x1c1);
      FUN_0041ad60(param_1,"../crypto/bio/bio_addr.c",0x1c2);
      param_1 = lVar1;
    } while (lVar1 != 0);
    return;
  }
  FUN_0076d5e0();
  return;
}

