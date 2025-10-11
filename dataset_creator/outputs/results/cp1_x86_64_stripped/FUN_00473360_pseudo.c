
undefined8
FUN_00473360(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_0041cdd0(param_2,"bits");
  if ((lVar2 != 0) && (iVar1 = thunk_FUN_0041d0b0(lVar2,param_3), iVar1 == 0)) {
    return 0;
  }
  lVar2 = FUN_0041cdd0(param_2,"security-bits");
  if ((lVar2 != 0) && (iVar1 = thunk_FUN_0041d0b0(lVar2,param_4), iVar1 == 0)) {
    return 0;
  }
  lVar2 = FUN_0041cdd0(param_2,"max-size");
  if ((lVar2 != 0) && (iVar1 = thunk_FUN_0041d0b0(lVar2,param_5), iVar1 == 0)) {
    return 0;
  }
  lVar2 = FUN_0041cdd0(param_2,"encoded-pub-key");
  if (((lVar2 != 0) && (*(uint *)(param_1 + 0x60) < 2)) &&
     (iVar1 = FUN_0041e220(lVar2,param_1 + 0x11,*(undefined8 *)(param_1 + 0x58)), iVar1 == 0)) {
    return 0;
  }
  uVar3 = FUN_004732c0(param_1,0,param_2,1);
  return uVar3;
}

