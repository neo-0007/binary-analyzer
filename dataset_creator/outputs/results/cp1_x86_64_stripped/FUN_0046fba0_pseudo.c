
undefined4 FUN_0046fba0(long param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_0043b840();
  if (((iVar1 == 0) || (param_1 == 0)) || (lVar3 = FUN_00547ef0(), lVar3 == 0)) {
    return 0;
  }
  if ((param_2 & 0x84) == 0) {
LAB_0046fbd7:
    if (((param_2 & 3) == 0) || (iVar1 = FUN_0046f9b0(param_1,lVar3,0,param_2 & 1), iVar1 != 0)) {
      lVar4 = FUN_00548720(lVar3);
      if (lVar4 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = (*param_3)(lVar4,param_4);
        FUN_0041ec30(lVar4);
      }
      goto LAB_0046fc34;
    }
  }
  else {
    uVar5 = FUN_004d8e60(param_1);
    iVar1 = FUN_00542360(uVar5,lVar3,0);
    if (iVar1 != 0) goto LAB_0046fbd7;
  }
  uVar2 = 0;
LAB_0046fc34:
  FUN_00547f60(lVar3);
  return uVar2;
}

