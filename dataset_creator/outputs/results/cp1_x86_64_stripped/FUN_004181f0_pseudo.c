
undefined4 FUN_004181f0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_0041aec0(0x10,"../crypto/core_namemap.c",0xfe);
  if (plVar3 != (long *)0x0) {
    lVar4 = FUN_0041c400(param_3,param_4,"../crypto/core_namemap.c",0xff);
    *plVar3 = lVar4;
    if (lVar4 != 0) {
      if (param_2 == 0) {
        LOCK();
        piVar1 = (int *)(param_1 + 0x18);
        param_2 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        param_2 = param_2 + 1;
      }
      *(int *)(plVar3 + 1) = param_2;
      FUN_005457f0(*(undefined8 *)(param_1 + 0x10),plVar3);
      iVar2 = FUN_00545d90(*(undefined8 *)(param_1 + 0x10));
      if (iVar2 == 0) {
        return (int)plVar3[1];
      }
      lVar4 = *plVar3;
    }
    FUN_0041ad60(lVar4,"../crypto/core_namemap.c",0x39);
  }
  FUN_0041ad60(plVar3,"../crypto/core_namemap.c",0x3a);
  return 0;
}

