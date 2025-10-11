
undefined4 FUN_00554ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00518970(param_2,0x86,&DAT_0080656e,"SubjectPublicKeyInfo",param_4);
  iVar1 = FUN_00516aa0(uVar3);
  if (iVar1 != 0) {
    uVar2 = FUN_005172f0(uVar3,param_1);
    FUN_00518590(uVar3);
    return uVar2;
  }
  FUN_00518590(uVar3);
  uVar2 = FUN_00556350(FUN_005aeb80,"PUBLIC KEY",param_1,param_2,0,0,0,0,0);
  return uVar2;
}

