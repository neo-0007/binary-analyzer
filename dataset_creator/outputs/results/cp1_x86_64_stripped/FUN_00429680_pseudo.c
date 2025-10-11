
long FUN_00429680(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = FUN_00417730(param_1,5,&DAT_0091b6a0);
  if (lVar2 != 0) {
    lVar3 = FUN_00422380(lVar2 + 0x1c);
    if (lVar3 != 0) {
      return lVar3;
    }
    lVar3 = FUN_00429100(param_1);
    if (lVar3 != 0) {
      uVar4 = FUN_004174a0(param_1);
      lVar5 = FUN_00422380(lVar2 + 0x18);
      if ((lVar5 == 0) && (iVar1 = FUN_0041abd0(0,uVar4,&LAB_00428820), iVar1 == 0)) {
        return 0;
      }
      lVar3 = FUN_00428500(uVar4,lVar3,0x10000,0x1a4);
      FUN_00422390(lVar2 + 0x1c,lVar3);
      return lVar3;
    }
  }
  return 0;
}

