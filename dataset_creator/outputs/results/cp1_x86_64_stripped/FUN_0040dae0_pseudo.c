
uint FUN_0040dae0(undefined4 *param_1,long param_2,int param_3,undefined4 param_4,code *param_5,
                 undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)param_3;
  lVar6 = 0;
  bVar1 = false;
  if (0 < lVar7) {
    lVar5 = FUN_004abd40(param_2,0x51,0,0);
    lVar6 = 0;
    if (-1 < lVar5) {
      lVar6 = lVar5;
    }
    lVar5 = FUN_004abd40(param_2,0x50,lVar7,0);
    if (lVar5 < 1) {
      uVar4 = FUN_004aaa40();
      uVar4 = FUN_004ab550(uVar4);
      param_2 = FUN_004ac2c0(uVar4,param_2);
      if (param_2 == 0) {
        return 0;
      }
      lVar7 = FUN_004abd40(param_2,0x50,lVar7,0);
      if (lVar7 < 1) {
        FUN_004abd40(param_2,0x50,lVar6,0);
        FUN_004ac310(param_2);
        FUN_004ab560(param_2);
        return 0;
      }
      bVar1 = true;
    }
    else {
      lVar7 = FUN_004abd40(param_2,0x50,lVar7,0);
      bVar1 = false;
      if (lVar7 < 1) {
        FUN_004abd40(param_2,0x50,lVar6,0);
        return 0;
      }
    }
  }
  uVar4 = FUN_00518970(param_1,param_4,"TEXT",0,0);
  iVar2 = FUN_00516aa0(uVar4);
  if (iVar2 == 0) {
    FUN_00518590(uVar4);
  }
  else {
    uVar3 = FUN_00517230(uVar4,param_2);
    FUN_00518590(uVar4);
    if (uVar3 != 0xfffffffe) goto LAB_0040db62;
  }
  if (param_5 == (code *)0x0) {
    uVar3 = FUN_004abce0(param_2,0,0x80);
    if (uVar3 != 0) {
      uVar4 = FUN_00423c40(*param_1);
      iVar2 = FUN_004ae9e0(param_2,"%s algorithm \"%s\" unsupported\n","Public Key",uVar4);
      uVar3 = (uint)(0 < iVar2);
    }
  }
  else {
    uVar3 = (*param_5)(param_2,param_1,0,param_6);
  }
LAB_0040db62:
  FUN_004abd40(param_2,0x50,lVar6,0);
  if (bVar1) {
    FUN_004ac310(param_2);
    FUN_004ab560(param_2);
  }
  return uVar3;
}

