
undefined8 FUN_004d5450(long param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar2 = FUN_004b7bb0(*(undefined8 *)(param_1 + 8));
  if (10000 < iVar2) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dh/dh_key.c",0x111,"generate_key");
    FUN_0051f8f0(5,0x67,0);
    return 0;
  }
  if ((*(long *)(param_1 + 0x10) != 0) && (iVar2 = FUN_004b7bb0(), 10000 < iVar2)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dh/dh_key.c",0x117,"generate_key");
    FUN_0051f8f0(5,0x82,0);
    return 0;
  }
  iVar2 = FUN_004b7bb0(*(undefined8 *)(param_1 + 8));
  if (iVar2 < 0x200) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dh/dh_key.c",0x11c,"generate_key");
    FUN_0051f8f0(5,0x7e,0);
    return 0;
  }
  lVar5 = FUN_004b2a70(*(undefined8 *)(param_1 + 0xb0));
  if (lVar5 == 0) {
LAB_004d5550:
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x78);
    if (lVar7 == 0) {
      lVar7 = FUN_004b7700();
      if (lVar7 == 0) goto LAB_004d5550;
      lVar6 = *(long *)(param_1 + 0x70);
      if ((lVar6 != 0) || (lVar6 = FUN_004b7690(), lVar6 != 0)) {
        iVar2 = FUN_004d4b10(param_1);
        if (iVar2 == 0) {
          if (*(long *)(param_1 + 0x10) == 0) {
            iVar2 = *(int *)(param_1 + 0x68);
            uVar8 = *(undefined8 *)(param_1 + 8);
            if (iVar2 == 0) {
LAB_004d5755:
              iVar2 = FUN_004b7bb0(uVar8);
              iVar2 = iVar2 + -1;
            }
            else {
              iVar4 = FUN_004b7bb0(uVar8);
              if (iVar4 <= iVar2) goto LAB_004d5556;
              iVar2 = *(int *)(param_1 + 0x68);
              if (iVar2 == 0) {
                uVar8 = *(undefined8 *)(param_1 + 8);
                goto LAB_004d5755;
              }
            }
            iVar2 = FUN_004bb500(lVar7,iVar2,0,0,0,lVar5);
            if (iVar2 != 0) {
              iVar2 = FUN_004b7cf0(*(undefined8 *)(param_1 + 0x18),2);
              if ((iVar2 == 0) || (iVar2 = FUN_004b78f0(*(undefined8 *)(param_1 + 8),2), iVar2 != 0)
                 ) goto LAB_004d54d4;
              iVar2 = FUN_004b8960(lVar7,0);
              goto joined_r0x004d56d7;
            }
          }
          else {
            iVar2 = FUN_00544ac0(*(undefined8 *)(param_1 + 0xb0),param_1 + 8,1,0);
            if (iVar2 != 0) {
              uVar3 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x10));
              iVar2 = FUN_00541b00(lVar5,param_1 + 8,uVar3,0x50,lVar7);
              goto joined_r0x004d56d7;
            }
          }
        }
        else {
          uVar3 = FUN_004b7bb0(*(undefined8 *)(param_1 + 8));
          uVar1 = FUN_0042bd50(uVar3);
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (iVar2 = *(int *)(param_1 + 0x68), iVar4 = FUN_004b7bb0(), iVar2 <= iVar4)) {
            iVar2 = FUN_00541b00(lVar5,param_1 + 8,*(undefined4 *)(param_1 + 0x68),uVar1,lVar7);
joined_r0x004d56d7:
            if (iVar2 != 0) goto LAB_004d54d4;
          }
        }
      }
    }
    else {
      lVar6 = *(long *)(param_1 + 0x70);
      if ((lVar6 == 0) && (lVar6 = FUN_004b7690(), lVar6 == 0)) goto LAB_004d5556;
LAB_004d54d4:
      iVar2 = FUN_004d5380(lVar5,param_1,lVar7,lVar6);
      if (iVar2 != 0) {
        *(long *)(param_1 + 0x78) = lVar7;
        uVar8 = 1;
        *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
        *(long *)(param_1 + 0x70) = lVar6;
        goto LAB_004d55ac;
      }
    }
  }
LAB_004d5556:
  FUN_0051f420();
  FUN_0051f540("../crypto/dh/dh_key.c",0x177,"generate_key");
  FUN_0051f8f0(5,0x80003,0);
  if (*(long *)(param_1 + 0x70) != lVar6) {
    FUN_004b7fa0(lVar6);
  }
  if (*(long *)(param_1 + 0x78) == lVar7) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    FUN_004b7fa0(lVar7);
  }
LAB_004d55ac:
  FUN_004b2b50(lVar5);
  return uVar8;
}

