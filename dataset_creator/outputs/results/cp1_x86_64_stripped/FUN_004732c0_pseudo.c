
uint FUN_004732c0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00548b90(param_2,param_3,&DAT_007ce5e4,param_1 + 0x11,*(undefined8 *)(param_1 + 0x58))
  ;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if ((param_4 != 0) && (uVar2 = param_4, *(long *)(param_1 + 0x50) != 0)) {
      iVar1 = FUN_00548b90(param_2,param_3,&DAT_007ce5df,*(long *)(param_1 + 0x50),
                           *(undefined8 *)(param_1 + 0x58));
      return (uint)(iVar1 != 0);
    }
  }
  return uVar2;
}

