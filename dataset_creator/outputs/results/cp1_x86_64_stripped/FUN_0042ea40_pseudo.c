
ulong FUN_0042ea40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_3 == 0) {
    uVar2 = FUN_004b20e0(param_2,0,param_1);
    return uVar2;
  }
  uVar1 = FUN_004b1cc0();
  if (uVar1 == 0) {
    return (ulong)uVar1;
  }
  uVar1 = FUN_004b20e0(param_2,param_3,param_1,param_4);
  FUN_004b1cd0(param_1);
  return (ulong)uVar1;
}

