
undefined8 FUN_004ee6d0(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar4 = FUN_004b2b20(*(undefined8 *)(param_1 + 0x58));
  uVar2 = FUN_004ee6c0(param_1);
  if ((lVar4 == 0) ||
     ((lVar7 = *(long *)(param_1 + 0x28), lVar7 == 0 && (lVar7 = FUN_004b7700(), lVar7 == 0)))) {
    lVar6 = 0;
    lVar7 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_004ef7e0(uVar1);
    if (lVar5 == 0) {
      lVar6 = 0;
      lVar5 = 0;
    }
    else {
      if ((uVar2 & 4) == 0) {
        lVar6 = FUN_004b82e0(lVar5);
        if (lVar6 != 0) {
LAB_004ee760:
          do {
            iVar3 = FUN_004bb5a0(lVar7,lVar6,0,lVar4);
            if (iVar3 == 0) goto LAB_004ee774;
            iVar3 = FUN_004b7ba0(lVar7);
          } while (iVar3 != 0);
          lVar5 = *(long *)(param_1 + 0x20);
          if (((lVar5 != 0) || (lVar5 = FUN_004efb90(uVar1), lVar5 != 0)) &&
             (iVar3 = FUN_004f1750(uVar1,lVar5,lVar7,0,0,lVar4), iVar3 != 0)) {
            *(long *)(param_1 + 0x28) = lVar7;
            lVar7 = 0;
            *(long *)(param_1 + 0x20) = lVar5;
            lVar5 = 0;
            *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
            uVar8 = 1;
            goto LAB_004ee79f;
          }
          goto LAB_004ee777;
        }
      }
      else {
        lVar6 = FUN_004b7690();
        if (lVar6 != 0) {
          uVar8 = FUN_004b75a0();
          iVar3 = FUN_004b18d0(lVar6,lVar5,uVar8);
          if (iVar3 != 0) goto LAB_004ee760;
        }
      }
LAB_004ee774:
      lVar5 = 0;
    }
  }
LAB_004ee777:
  FUN_0043b830("Conditional_PCT");
  FUN_004b7780(*(undefined8 *)(param_1 + 0x28));
  uVar8 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004f0830(uVar1);
  }
LAB_004ee79f:
  FUN_004efcc0(lVar5);
  FUN_004b7f20(lVar7);
  FUN_004b2b50(lVar4);
  FUN_004b7fa0(lVar6);
  return uVar8;
}

