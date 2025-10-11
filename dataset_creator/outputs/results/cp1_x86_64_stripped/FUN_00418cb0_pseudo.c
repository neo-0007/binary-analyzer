
long FUN_00418cb0(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0041aec0(0x20,"../crypto/core_namemap.c",0x1ff);
  if (lVar1 != 0) {
    lVar2 = FUN_00422240();
    *(long *)(lVar1 + 8) = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_00545610(FUN_004181b0,&LAB_004181a0);
      *(long *)(lVar1 + 0x10) = lVar2;
      if (lVar2 != 0) {
        return lVar1;
      }
    }
  }
  FUN_00418c30(lVar1);
  return 0;
}

