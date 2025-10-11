
ulong FUN_00415720(int *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  FUN_0051f000();
  thunk_FUN_007129d0(param_3);
  uVar1 = FUN_00412900(param_1,0xffffffff,0xffffffff,0xffffffff,param_2,param_3);
  if (uVar1 == 0xfffffffe) {
    FUN_0051f050();
  }
  else {
    FUN_0051f1a0();
    if (((int)uVar1 < 1) || (*param_1 == 0)) {
      return (ulong)uVar1;
    }
  }
  uVar2 = FUN_00415600(param_1,param_2,param_3);
  return uVar2;
}

