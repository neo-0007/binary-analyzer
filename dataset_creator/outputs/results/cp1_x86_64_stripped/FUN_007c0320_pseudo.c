
undefined1  [16] FUN_007c0320(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  uVar1 = FUN_007101b0();
  *param_2 = uVar1;
  if (uVar1 == 0) {
    uVar1 = 0;
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + uVar1;
    if (CARRY8(param_1,uVar1)) {
      FUN_007a3000(uVar1,param_1);
    }
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}

