
undefined4
FUN_004d9390(long param_1,long param_2,long *param_3,undefined8 param_4,long param_5,int param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  long local_50;
  
  if (((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dsa/dsa_ossl.c",0xd0,"dsa_sign_setup");
    FUN_0051f8f0(10,0x65,0);
    return 0;
  }
  iVar3 = FUN_004b7ba0();
  if (((iVar3 != 0) || (iVar3 = FUN_004b7ba0(*(undefined8 *)(param_1 + 0x10)), iVar3 != 0)) ||
     (iVar3 = FUN_004b7ba0(*(undefined8 *)(param_1 + 0x18)), iVar3 != 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dsa/dsa_ossl.c",0xd8,"dsa_sign_setup");
    FUN_0051f8f0(10,0x70,0);
    return 0;
  }
  uVar10 = 0;
  if (*(long *)(param_1 + 0x70) == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dsa/dsa_ossl.c",0xdc,"dsa_sign_setup");
    FUN_0051f8f0(10,0x6f,0);
    return 0;
  }
  lVar6 = FUN_004b7690();
  lVar7 = FUN_004b7690();
  if (((lVar6 == 0) || (lVar7 == 0)) ||
     ((local_50 = param_2, param_2 == 0 && (local_50 = FUN_004b2a70(0), local_50 == 0)))) {
    local_50 = 0;
  }
  else {
    uVar4 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x10));
    iVar3 = FUN_004b7380(*(undefined8 *)(param_1 + 0x10));
    iVar3 = iVar3 + 2;
    lVar8 = FUN_004b8240(lVar6,iVar3);
    if ((lVar8 != 0) && (lVar8 = FUN_004b8240(lVar7,iVar3), lVar8 != 0)) {
      do {
        if (param_5 == 0) {
          iVar5 = FUN_004bb5a0(lVar6,*(undefined8 *)(param_1 + 0x10),0,local_50);
        }
        else {
          iVar5 = FUN_004bb600(lVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x70)
                               ,param_5,(long)param_6,local_50);
        }
        if (iVar5 == 0) goto LAB_004d9550;
        iVar5 = FUN_004b7ba0(lVar6);
      } while (iVar5 != 0);
      FUN_004b7e70(lVar6,4);
      FUN_004b7e70(lVar7,4);
      if (((((*(byte *)(param_1 + 0x78) & 1) == 0) ||
           (lVar8 = FUN_004b9bc0(param_1 + 0x80,*(undefined8 *)(param_1 + 0xb0),
                                 *(undefined8 *)(param_1 + 8),local_50), lVar8 != 0)) &&
          (iVar5 = FUN_004b1810(lVar7,lVar6,*(undefined8 *)(param_1 + 0x10)), iVar5 != 0)) &&
         (iVar5 = FUN_004b1810(lVar6,lVar7,*(undefined8 *)(param_1 + 0x10)), iVar5 != 0)) {
        iVar5 = FUN_004b78f0(lVar7,uVar4);
        FUN_004b7a20((long)iVar5,lVar6,lVar7,iVar3);
        pcVar1 = *(code **)(*(long *)(param_1 + 0xa0) + 0x28);
        if (pcVar1 == (code *)0x0) {
          iVar3 = FUN_004b4eb0(param_4,*(undefined8 *)(param_1 + 0x18),lVar6,
                               *(undefined8 *)(param_1 + 8),local_50,*(undefined8 *)(param_1 + 0x80)
                              );
        }
        else {
          iVar3 = (*pcVar1)(param_1,param_4,*(undefined8 *)(param_1 + 0x18),lVar6,
                            *(undefined8 *)(param_1 + 8),local_50);
        }
        if ((iVar3 != 0) &&
           (iVar3 = FUN_004b34a0(0,param_4,param_4,*(undefined8 *)(param_1 + 0x10),local_50),
           iVar3 != 0)) {
          uVar2 = *(undefined8 *)(param_1 + 0x10);
          lVar8 = FUN_004b7690();
          if (lVar8 != 0) {
            FUN_004b2c00(local_50);
            lVar9 = FUN_004b2df0(local_50);
            if (((lVar9 != 0) && (iVar3 = FUN_004b8190(lVar8,2), iVar3 != 0)) &&
               ((iVar3 = FUN_004b18d0(lVar9,uVar2,lVar8), iVar3 != 0 &&
                (iVar3 = FUN_004b4eb0(lVar8,lVar6,lVar9,uVar2,local_50,0), iVar3 != 0)))) {
              uVar10 = 1;
              FUN_004b2d50(local_50);
              FUN_004b7f20(*param_3);
              *param_3 = lVar8;
              goto LAB_004d9580;
            }
            FUN_004b7fa0(lVar8);
            FUN_004b2d50(local_50);
          }
        }
      }
    }
  }
LAB_004d9550:
  FUN_0051f420();
  FUN_0051f540("../crypto/dsa/dsa_ossl.c",0x136,"dsa_sign_setup");
  FUN_0051f8f0(10,0x80003,0);
LAB_004d9580:
  if (param_2 != local_50) {
    FUN_004b2b50(local_50);
  }
  FUN_004b7f20(lVar6);
  FUN_004b7f20(lVar7);
  return uVar10;
}

