
bool FUN_00463520(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(int *)((long)param_2 + 0x34) == 0) {
    iVar1 = FUN_00461e70(param_1,"P:   ",*param_2);
    if ((((iVar1 != 0) &&
         ((((param_2[1] == 0 || (iVar1 = FUN_00461e70(param_1,"Q:   "), iVar1 != 0)) &&
           (iVar1 = FUN_00461e70(param_1,"G:   ",param_2[2]), iVar1 != 0)) &&
          ((param_2[3] == 0 || (iVar1 = FUN_00461e70(param_1,"J:   "), iVar1 != 0)))))) &&
        ((param_2[4] == 0 ||
         (iVar1 = FUN_00462ae0(param_1,"SEED:",param_2[4],param_2[5]), iVar1 != 0)))) &&
       (((*(int *)(param_2 + 7) == -1 || (iVar1 = FUN_004ae9e0(param_1,"gindex: %d\n"), 0 < iVar1))
        && ((*(int *)(param_2 + 6) == -1 ||
            (iVar1 = FUN_004ae9e0(param_1,"pcounter: %d\n"), 0 < iVar1)))))) {
      if (*(int *)((long)param_2 + 0x3c) == 0) {
        return true;
      }
      iVar1 = FUN_004ae9e0(param_1,&DAT_007e404e);
      return 0 < iVar1;
    }
  }
  else {
    uVar2 = FUN_00541930();
    lVar3 = FUN_00541a40(uVar2);
    if (lVar3 != 0) {
      iVar1 = FUN_004ae9e0(param_1,"GROUP: %s\n",lVar3);
      return 0 < iVar1;
    }
  }
  return false;
}

