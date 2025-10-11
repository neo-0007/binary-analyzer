
undefined4 FUN_00474770(long param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = FUN_0042c5c0();
  iVar1 = FUN_0043b840();
  if ((((param_1 == 0) || (iVar1 == 0)) || ((param_2 & 0x83) == 0)) ||
     (lVar4 = FUN_00547ef0(), lVar4 == 0)) {
    uVar2 = 0;
  }
  else {
    if (((((param_2 & 0x80) == 0) || (iVar1 = FUN_00433230(uVar3), iVar1 != 0)) ||
        (iVar1 = FUN_0042a8e0(uVar3,lVar4,0), iVar1 != 0)) &&
       (((param_2 & 3) == 0 || (iVar1 = FUN_0042a6f0(param_1,lVar4,0,param_2 & 1), iVar1 != 0)))) {
      lVar5 = FUN_00548720(lVar4);
      if (lVar5 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = (*param_3)(lVar5,param_4);
        FUN_0041ec30(lVar5);
      }
    }
    else {
      uVar2 = 0;
    }
    FUN_00547f60(lVar4);
  }
  return uVar2;
}

