
long * FUN_004d9850(undefined8 param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  lVar4 = *(long *)(param_3 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (((lVar4 == 0) || (lVar4 = *(long *)(param_3 + 0x10), lVar4 == 0)) ||
     (lVar4 = *(long *)(param_3 + 0x18), lVar4 == 0)) {
    lVar9 = 0;
    plVar3 = (long *)0x0;
    uVar11 = 0x65;
  }
  else if (*(long *)(param_3 + 0x70) == 0) {
    lVar9 = 0;
    plVar3 = (long *)0x0;
    uVar11 = 0x6f;
    lVar4 = 0;
  }
  else {
    plVar3 = (long *)FUN_004da450();
    if (plVar3 == (long *)0x0) {
      lVar9 = 0;
      lVar4 = 0;
      uVar11 = 0x80003;
    }
    else {
      lVar4 = FUN_004b7690();
      *plVar3 = lVar4;
      lVar4 = FUN_004b7690();
      plVar3[1] = lVar4;
      if ((*plVar3 == 0) || (lVar4 == 0)) {
        lVar9 = 0;
        uVar11 = 0x80003;
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_004b2a70(*(undefined8 *)(param_3 + 0xb8));
        if (lVar4 == 0) {
          lVar9 = 0;
          uVar11 = 0x80003;
        }
        else {
          uVar5 = FUN_004b2df0(lVar4);
          uVar6 = FUN_004b2df0(lVar4);
          uVar7 = FUN_004b2df0(lVar4);
          lVar8 = FUN_004b2df0(lVar4);
          lVar9 = lVar8;
          if (lVar8 != 0) {
            do {
              iVar1 = FUN_004d9390(param_3,lVar4,&local_48,*plVar3,param_1,param_2);
              if (iVar1 == 0) {
LAB_004d99dd:
                uVar11 = 0x80003;
                lVar9 = local_48;
                goto LAB_004d99fb;
              }
              iVar2 = FUN_004b7bb0(*(undefined8 *)(param_3 + 0x10));
              iVar1 = iVar2 + 7;
              if (iVar2 + 7 < 0) {
                iVar1 = iVar2 + 0xe;
              }
              if (iVar1 >> 3 < param_2) {
                iVar1 = FUN_004b7bb0(*(undefined8 *)(param_3 + 0x10));
                param_2 = iVar1 + 0xe;
                if (-1 < iVar1 + 7) {
                  param_2 = iVar1 + 7;
                }
                param_2 = param_2 >> 3;
              }
              lVar9 = FUN_004b84d0(param_1,param_2,uVar5);
              if (lVar9 == 0) goto LAB_004d99dd;
              do {
                iVar1 = FUN_004b7bb0(*(undefined8 *)(param_3 + 0x10));
                iVar1 = FUN_004bb500(uVar6,iVar1 + -1,0xffffffff,0,0,lVar4);
                if (iVar1 == 0) goto LAB_004d99dd;
                iVar1 = FUN_004b7ba0(uVar6);
              } while (iVar1 != 0);
              FUN_004b7e70(uVar6,4);
              FUN_004b7e70(uVar7,4);
              FUN_004b7e70(lVar8,4);
              iVar1 = FUN_004b8fe0(lVar8,uVar6,*(undefined8 *)(param_3 + 0x70),
                                   *(undefined8 *)(param_3 + 0x10),lVar4);
              lVar9 = local_48;
              if (((iVar1 == 0) ||
                  (iVar1 = FUN_004b8fe0(lVar8,lVar8,*plVar3,*(undefined8 *)(param_3 + 0x10),lVar4),
                  iVar1 == 0)) ||
                 ((iVar1 = FUN_004b8fe0(uVar7,uVar6,uVar5,*(undefined8 *)(param_3 + 0x10),lVar4),
                  iVar1 == 0 ||
                  ((((iVar1 = FUN_004b8d50(plVar3[1],lVar8,uVar7,*(undefined8 *)(param_3 + 0x10)),
                     iVar1 == 0 ||
                     (iVar1 = FUN_004b8fe0(plVar3[1],plVar3[1],lVar9,*(undefined8 *)(param_3 + 0x10)
                                           ,lVar4), iVar1 == 0)) ||
                    (lVar10 = FUN_004b6c40(uVar6,uVar6,*(undefined8 *)(param_3 + 0x10),lVar4),
                    lVar10 == 0)) ||
                   (iVar1 = FUN_004b8fe0(plVar3[1],plVar3[1],uVar6,*(undefined8 *)(param_3 + 0x10),
                                         lVar4), iVar1 == 0)))))) goto LAB_004d9bff;
              iVar1 = FUN_004b7ba0(*plVar3);
            } while ((iVar1 != 0) || (iVar1 = FUN_004b7ba0(plVar3[1]), iVar1 != 0));
            goto LAB_004d9a33;
          }
LAB_004d9bff:
          uVar11 = 0x80003;
        }
      }
    }
  }
LAB_004d99fb:
  FUN_0051f420();
  FUN_0051f540("../crypto/dsa/dsa_ossl.c",0xb1,"ossl_dsa_do_sign_int");
  FUN_0051f8f0(10,uVar11,0);
  FUN_004da4d0(plVar3);
  plVar3 = (long *)0x0;
LAB_004d9a33:
  FUN_004b2b50(lVar4);
  FUN_004b7f20(lVar9);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return plVar3;
}

