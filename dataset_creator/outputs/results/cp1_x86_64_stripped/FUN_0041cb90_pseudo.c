
undefined8 FUN_0041cb90(long param_1,long *param_2,ulong *param_3,ulong *param_4,int param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (param_4 != (ulong *)0x0) {
    *param_4 = uVar1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (param_2 == (long *)0x0) {
      return 1;
    }
    if (*param_2 == 0) {
      uVar3 = (param_5 == 4 || uVar1 == 0) + uVar1;
      lVar2 = FUN_0041ad90(uVar3,"../crypto/params.c",1099);
      if (lVar2 == 0) {
        return 0;
      }
      *param_2 = lVar2;
      *param_3 = uVar3;
    }
    else {
      uVar3 = *param_3;
    }
    if (uVar1 <= uVar3) {
      thunk_FUN_00713a50(*param_2,*(undefined8 *)(param_1 + 0x10),uVar1);
      return 1;
    }
  }
  return 0;
}

