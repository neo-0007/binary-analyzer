
long FUN_004ac4e0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar4 = 0;
  lVar5 = 0;
  do {
    lVar2 = FUN_004ab550(*(undefined8 *)(param_1 + 8));
    if (lVar2 == 0) {
LAB_004ac5c8:
      FUN_004ac4a0(lVar5);
      return 0;
    }
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    lVar3 = FUN_004abd40(param_1,0xc,0,lVar2);
    if ((lVar3 == 0) || (iVar1 = FUN_004196d0(0xc,lVar2 + 0x70,param_1 + 0x70), iVar1 == 0)) {
      FUN_004ab560(lVar2);
      goto LAB_004ac5c8;
    }
    if (lVar5 == 0) {
      param_1 = *(long *)(param_1 + 0x48);
      lVar4 = lVar2;
      lVar5 = lVar2;
      if (param_1 == 0) {
        return lVar2;
      }
    }
    else {
      FUN_004ac2c0(lVar4,lVar2);
      param_1 = *(long *)(param_1 + 0x48);
      lVar4 = lVar2;
      if (param_1 == 0) {
        return lVar5;
      }
    }
  } while( true );
}

