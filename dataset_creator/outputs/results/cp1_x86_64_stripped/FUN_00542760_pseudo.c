
undefined8
FUN_00542760(undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9,undefined8 param_10
            ,int *param_11,uint *param_12)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  long in_FS_OFFSET;
  int local_110;
  int local_8c;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004b2c00();
  uVar4 = FUN_004b2df0(param_1);
  uVar5 = FUN_004b2df0(param_1);
  uVar6 = FUN_004b2df0(param_1);
  uVar7 = FUN_004b2df0(param_1);
  lVar8 = FUN_004b2df0(param_1);
  if (lVar8 != 0) {
    uVar9 = FUN_004b75a0();
    iVar1 = FUN_004bc220(uVar7,uVar9,param_9 + -1);
    if ((iVar1 != 0) && (iVar1 = FUN_0040ac10(param_2), 0 < iVar1)) {
      if (-1 < param_3) {
        local_8c = 0;
        local_110 = (int)param_6;
        do {
          FUN_004b7b50(uVar4);
          if (-1 < param_4) {
            iVar12 = 0;
            iVar13 = 0;
            uVar2 = local_110 - 1;
            do {
              pcVar11 = (char *)(param_5 + (int)uVar2);
              if (-1 < (int)uVar2) {
                do {
                  *pcVar11 = *pcVar11 + '\x01';
                  if (*pcVar11 != '\0') break;
                  pcVar11 = pcVar11 + -1;
                } while (pcVar11 != (char *)((param_5 + -2 + (long)local_110) - (ulong)uVar2));
              }
              iVar3 = FUN_00407440(param_5,param_6,local_88,0,param_2,0);
              if ((((iVar3 == 0) || (lVar10 = FUN_004b84d0(local_88,iVar1,lVar8), lVar10 == 0)) ||
                  (iVar3 = FUN_004bc220(lVar8,lVar8,iVar12), iVar3 == 0)) ||
                 (iVar3 = FUN_004b1810(uVar4,uVar4,lVar8), iVar3 == 0)) goto LAB_00542850;
              iVar13 = iVar13 + 1;
              iVar12 = iVar12 + iVar1 * 8;
            } while (iVar13 <= param_4);
          }
          iVar12 = FUN_004b89b0(uVar4,param_9 + -1);
          if (((iVar12 == 0) || (lVar10 = FUN_004b8260(uVar5,uVar4), lVar10 == 0)) ||
             ((iVar12 = FUN_004b1810(uVar5,uVar5,uVar7), iVar12 == 0 ||
              ((iVar12 = FUN_004bbf30(lVar8,param_7), iVar12 == 0 ||
               (iVar12 = FUN_004b34a0(0,uVar6,uVar5,lVar8,param_1), iVar12 == 0))))))
          goto LAB_00542850;
          uVar9 = FUN_004b75a0();
          iVar12 = FUN_004b18d0(lVar8,uVar6,uVar9);
          if ((iVar12 == 0) || (iVar12 = FUN_004b18d0(param_8,uVar5,lVar8), iVar12 == 0))
          goto LAB_00542850;
          iVar12 = FUN_004b7840(param_8,uVar7);
          if (-1 < iVar12) {
            iVar12 = FUN_005c4db0(param_8,param_1,param_10);
            if (0 < iVar12) {
              uVar4 = 1;
              *param_11 = local_8c;
              goto LAB_00542856;
            }
            if (iVar12 != 0) goto LAB_00542850;
          }
          local_8c = local_8c + 1;
          if (param_3 < local_8c) break;
          iVar12 = FUN_005c3bd0(param_10,0,local_8c);
          if (iVar12 == 0) goto LAB_00542850;
        } while( true );
      }
      uVar4 = 0;
      *param_12 = *param_12 | 1;
      goto LAB_00542856;
    }
  }
LAB_00542850:
  uVar4 = 0xffffffff;
LAB_00542856:
  FUN_004b2d50(param_1);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

