
undefined8 FUN_005238f0(int param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00521cc0();
  if (0 < (int)uVar2) {
    if (*(int *)(param_3 + 8) == 2) {
      if (param_1 == 4) {
        uVar1 = FUN_006e94d0(*(undefined8 *)(param_3 + 0x20),0,10);
        uVar2 = FUN_00526130(uVar1);
        *(undefined8 *)(param_3 + 0x20) = uVar2;
        uVar1 = thunk_FUN_007129d0(uVar2);
        *(undefined4 *)(param_3 + 0x1c) = uVar1;
      }
      uVar2 = FUN_00521e40(param_1,param_2,param_3);
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}

