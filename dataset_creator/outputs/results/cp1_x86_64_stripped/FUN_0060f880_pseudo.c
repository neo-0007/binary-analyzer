
undefined8 FUN_0060f880(int *param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  byte bVar11;
  long local_150;
  undefined1 local_148;
  undefined1 local_147 [263];
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_150 = 0xff;
  if (0 < param_2) {
    uVar10 = 0x35;
    lVar3 = thunk_FUN_007134f0(param_3,0,(long)param_2);
    if (lVar3 != 0) goto LAB_0060f9d0;
  }
  pcVar4 = (char *)FUN_0041c400(param_3,(long)param_2,"../crypto/x509/v3_ncons.c",0x28c);
  if (pcVar4 == (char *)0x0) {
    uVar10 = 0x11;
    goto LAB_0060f9d0;
  }
  uVar10 = 0x35;
  if (*param_1 == 0xc) {
    piVar1 = *(int **)(param_1 + 2);
    iVar2 = *piVar1;
    uVar8 = (ulong)iVar2;
    lVar3 = *(long *)(piVar1 + 2);
    if (iVar2 < 1) {
      if (iVar2 != 0) {
        pcVar5 = (char *)(lVar3 + -1 + uVar8);
LAB_0060f945:
        puVar9 = (undefined8 *)&local_148;
        for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
        }
        if (*pcVar4 == '.') {
          local_150 = local_150 + -1;
          local_148 = 0x2e;
          iVar2 = FUN_0061ac40(pcVar4,local_147,&local_150);
          if (iVar2 < 1) goto LAB_0060fa90;
          iVar2 = *piVar1;
          uVar8 = thunk_FUN_007129d0(&local_148);
          if (uVar8 < (ulong)(long)iVar2) {
            iVar2 = FUN_0060f830(&local_148,lVar3 + ((long)iVar2 - uVar8));
            goto joined_r0x0060fa48;
          }
        }
        else {
          iVar2 = FUN_0061ac40(pcVar4,&local_148,&local_150);
          if (iVar2 < 1) {
LAB_0060fa90:
            uVar10 = 1;
            goto LAB_0060f9c0;
          }
          lVar6 = (long)*piVar1 - ((long)(pcVar5 + 1) - *(long *)(piVar1 + 2));
          lVar3 = thunk_FUN_007129d0(&local_148);
          if (lVar6 == lVar3) {
            iVar2 = FUN_0060f830(&local_148,pcVar5 + 1,lVar6);
joined_r0x0060fa48:
            if (iVar2 == 0) {
              uVar10 = 0;
              goto LAB_0060f9c0;
            }
          }
        }
        uVar10 = 0x2f;
      }
    }
    else {
      pcVar5 = (char *)(lVar3 + -1 + (long)iVar2);
      do {
        if (*pcVar5 == '@') goto LAB_0060f945;
        pcVar5 = pcVar5 + -1;
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulong)uVar7;
      } while (uVar7 != 0);
      uVar10 = 0x35;
    }
  }
LAB_0060f9c0:
  FUN_0041ad60(pcVar4,"../crypto/x509/v3_ncons.c",0x2c0);
LAB_0060f9d0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar10;
}

