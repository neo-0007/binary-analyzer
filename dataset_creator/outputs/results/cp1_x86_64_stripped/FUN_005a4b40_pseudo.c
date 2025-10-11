
undefined8 FUN_005a4b40(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  
  iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 0x98));
  iVar5 = iVar1 + -1;
  lVar3 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar5);
  *(int *)(param_1 + 0xac) = iVar5;
  lVar6 = 0;
  if (((*(int *)(param_1 + 0xf8) == 0) &&
      (iVar2 = FUN_0059ba80(lVar3,lVar3), lVar6 = lVar3, iVar2 != 0)) &&
     ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) & 8) == 0)) {
    if (iVar5 < 1) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      lVar4 = lVar3;
      if (lVar3 == 0) {
        lVar4 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(long *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0x15;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      iVar5 = iVar1 + -2;
      *(int *)(param_1 + 0xac) = iVar5;
      lVar3 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar5);
    }
  }
  if (iVar5 < 0) {
    return 1;
  }
  do {
    if (lVar6 != 0) {
      iVar1 = iVar5 + 1;
      if (lVar6 == lVar3) {
        if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 0x40) == 0) ||
           ((*(uint *)(lVar6 + 0xe8) & 0x2000) == 0)) goto LAB_005a4bda;
        iVar1 = iVar5;
        if ((*(uint *)(lVar6 + 0xe8) & 0x10) != 0) {
          iVar2 = FUN_0059ae90(lVar6,lVar3);
          goto joined_r0x005a4c5f;
        }
      }
      else {
        iVar2 = FUN_0059ae90(lVar6,lVar3);
joined_r0x005a4c5f:
        if (iVar2 != 0) {
          *(int *)(param_1 + 0xac) = iVar1;
          *(long *)(param_1 + 0xb8) = lVar6;
          *(int *)(param_1 + 0xb0) = iVar2;
          iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar2 == 0) {
            return 0;
          }
        }
      }
      lVar4 = FUN_0059ef80(lVar6);
      if (lVar4 == 0) {
        *(int *)(param_1 + 0xac) = iVar1;
        *(long *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 6;
      }
      else {
        iVar1 = FUN_005aa400(lVar3,lVar4);
        if (0 < iVar1) goto LAB_005a4bda;
        *(int *)(param_1 + 0xac) = iVar5;
        lVar4 = lVar3;
        if (lVar3 == 0) {
          lVar4 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar5);
        }
        *(long *)(param_1 + 0xb8) = lVar4;
        *(undefined4 *)(param_1 + 0xb0) = 7;
      }
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
LAB_005a4bda:
    iVar1 = FUN_005a3c90(param_1,lVar3,iVar5);
    if (iVar1 == 0) {
      return 0;
    }
    *(long *)(param_1 + 0xc0) = lVar6;
    *(long *)(param_1 + 0xb8) = lVar3;
    *(int *)(param_1 + 0xac) = iVar5;
    iVar1 = (**(code **)(param_1 + 0x38))(1,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    bVar7 = iVar5 == 0;
    iVar5 = iVar5 + -1;
    if (bVar7) {
      return 1;
    }
    lVar4 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar5);
    lVar6 = lVar3;
    lVar3 = lVar4;
  } while( true );
}

