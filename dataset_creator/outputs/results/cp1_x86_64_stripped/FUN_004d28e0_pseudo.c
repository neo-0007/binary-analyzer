
ulong FUN_004d28e0(uint *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_2 == 9) {
    uVar2 = (ulong)*param_1;
    if ((*param_1 != 0) && (uVar2 = 0, *(long *)(param_1 + 0x18) == 0)) {
      uVar1 = FUN_00410bd0();
      uVar2 = FUN_004d5800(uVar1,param_4,param_3);
      return uVar2;
    }
  }
  else {
    if (param_2 != 10) {
      return 0xfffffffe;
    }
    uVar1 = thunk_FUN_00410bd0();
    uVar2 = FUN_004d5900(uVar1,param_4,0,1);
  }
  return uVar2;
}

