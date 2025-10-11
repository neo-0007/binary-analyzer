
long * FUN_004743a0(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    plVar2 = (long *)FUN_0041aec0(0x50,"../providers/implementations/keymgmt/mac_legacy_kmgmt.c",
                                  0x47);
    if (plVar2 != (long *)0x0) {
      lVar3 = FUN_00422240();
      *plVar2 = lVar3;
      if (lVar3 != 0) {
        plVar2[1] = param_1;
        LOCK();
        *(undefined4 *)(plVar2 + 2) = 1;
        UNLOCK();
        *(undefined4 *)(plVar2 + 9) = param_2;
        return plVar2;
      }
      FUN_0041ad60(plVar2,"../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x4d);
    }
  }
  return (long *)0x0;
}

