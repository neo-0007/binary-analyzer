
undefined4 FUN_005119c0(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar4 = FUN_00547ef0();
  if (lVar4 == 0) {
    return 0;
  }
  iVar2 = FUN_005485f0(lVar4,&DAT_007ce5e4,lVar1 + 0x11,*(undefined8 *)(lVar1 + 0x58));
  if (iVar2 == 0) {
LAB_00511a60:
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    if (*(long *)(lVar1 + 0x50) == 0) {
      uVar6 = 2;
    }
    else {
      uVar6 = 3;
      iVar2 = FUN_005485f0(lVar4,&DAT_007ce5df,*(long *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58)
                          );
      if (iVar2 == 0) goto LAB_00511a60;
    }
    uVar5 = FUN_00548720(lVar4);
    uVar3 = (*param_3)(param_2,uVar6,uVar5);
  }
  FUN_00547f60(lVar4);
  FUN_0041ec30(uVar5);
  return uVar3;
}

