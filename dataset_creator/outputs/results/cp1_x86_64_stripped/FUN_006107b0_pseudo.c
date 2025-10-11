
int FUN_006107b0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_70;
  undefined4 local_68 [2];
  int *local_60;
  int local_58 [2];
  long local_50;
  undefined8 local_48;
  long local_40;
  
  iVar5 = -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = FUN_0059e6d0();
  local_58[1] = 0x16;
  local_60 = local_58;
  local_48 = 0;
  local_68[0] = 2;
LAB_00610810:
  iVar5 = FUN_005a9a30(uVar7,0xd,iVar5);
  if (iVar5 == -1) {
    iVar6 = 0;
  }
  else {
    uVar8 = FUN_005a9a70(uVar7,iVar5);
    uVar8 = FUN_005aa210(uVar8);
    iVar6 = FUN_005b7230(&local_70,uVar8);
    lVar4 = local_70;
    if (-1 < iVar6) {
      if (iVar6 != 0) {
        lVar10 = (long)iVar6;
        do {
          if (*(char *)(local_70 + -1 + lVar10) != '\0') {
            lVar9 = thunk_FUN_007134f0(local_70,0,lVar10);
            if (lVar9 == 0) {
              lVar9 = 0;
              bVar3 = false;
              goto LAB_00610900;
            }
            iVar6 = 0x35;
            FUN_0041ad60(lVar4,"../crypto/x509/v3_ncons.c",0x162);
            goto LAB_0061089c;
          }
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      goto LAB_006108d0;
    }
    iVar6 = 0x11;
  }
  goto LAB_0061089c;
LAB_00610900:
  do {
    bVar1 = *(byte *)(lVar4 + lVar9);
    if (((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (9 < (byte)(bVar1 - 0x30))) && (bVar1 != 0x5f)) {
      if ((lVar9 == 0) || ((int)lVar10 + -1 <= (int)lVar9)) goto LAB_006108d0;
      if (bVar1 != 0x2d) {
        if (((bVar1 != 0x2e) || (cVar2 = *(char *)(lVar4 + 1 + lVar9), cVar2 == '.')) ||
           ((*(char *)(lVar4 + -1 + lVar9) == '-' || (cVar2 == '-')))) goto LAB_006108d0;
        bVar3 = true;
      }
    }
    lVar9 = lVar9 + 1;
  } while (lVar10 != lVar9);
  if (bVar3) {
    local_50 = lVar4;
    local_58[0] = (int)lVar10;
    iVar6 = FUN_00610180(local_68,param_2);
    FUN_0041ad60(lVar4,"../crypto/x509/v3_ncons.c",0x1bc);
    if (iVar6 != 0) {
LAB_0061089c:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return iVar6;
    }
  }
  else {
LAB_006108d0:
    FUN_0041ad60(lVar4,"../crypto/x509/v3_ncons.c",0x192);
  }
  goto LAB_00610810;
}

