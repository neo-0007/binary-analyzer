
undefined8 FUN_007b9350(undefined8 param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [48];
  long local_88;
  
  iVar1 = FUN_0076e620(param_1,0x80000);
  if (-1 < iVar1) {
    iVar2 = FUN_0076d7f0(iVar1,auStack_b8);
    if ((iVar2 < 0) || (*param_2 = local_88, local_88 == 0)) {
      uVar3 = 0xffffffffffffffff;
    }
    else {
      uVar3 = FUN_0076f020(0,local_88,param_3,2,iVar1,0);
    }
    FUN_0076e4b0(iVar1);
    return uVar3;
  }
  return 0xffffffffffffffff;
}

