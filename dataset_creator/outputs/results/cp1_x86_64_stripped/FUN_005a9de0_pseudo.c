
bool FUN_005a9de0(undefined8 *param_1,uint param_2,long param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((param_1 != (undefined8 *)0x0) && ((param_3 != 0 || (param_4 == 0)))) {
    if ((0 < (int)param_2) && ((param_2 & 0x1000) != 0)) {
      uVar2 = FUN_00423da0(*param_1);
      lVar3 = FUN_004a0da0(param_1 + 1,param_3,param_4,param_2,uVar2);
      return lVar3 != 0;
    }
    if (param_4 < 0) {
      param_4 = thunk_FUN_007129d0(param_3);
    }
    iVar1 = FUN_004a1fa0(param_1[1],param_3,param_4);
    if (iVar1 != 0) {
      if (param_2 == 0xffffffff) {
        return true;
      }
      lVar3 = param_1[1];
      if (param_2 == 0xfffffffe) {
        uVar2 = FUN_005b5450(param_3,param_4);
        *(undefined4 *)(lVar3 + 4) = uVar2;
        return true;
      }
      *(uint *)(lVar3 + 4) = param_2;
      return true;
    }
  }
  return false;
}

