
int FUN_00770230(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  long in_FS_OFFSET;
  char *local_450;
  char local_448 [768];
  char local_148 [256];
  char local_48 [8];
  long local_40;
  
  iVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0076e620("/sys/devices/system/cpu/online",0x80000);
  if (iVar1 == -1) goto LAB_0077026d;
  pcVar5 = local_448;
  lVar2 = FUN_0076e770(iVar1,pcVar5,0x400);
  if (lVar2 < 0) {
LAB_00770338:
    iVar7 = 0;
  }
  else {
    pcVar6 = pcVar5 + lVar2;
    lVar2 = thunk_FUN_007134f0(pcVar5,10,lVar2);
    if (lVar2 == 0) {
      if (pcVar6 == local_48) {
        do {
          lVar2 = FUN_0076e770(iVar1,local_148,0x100);
          if (lVar2 < 0) goto LAB_00770338;
          pcVar6 = local_148 + lVar2;
          lVar2 = thunk_FUN_007134f0(local_148,10,lVar2);
          local_148[0] = '\n';
          if (lVar2 != 0) goto LAB_007703e0;
        } while (pcVar6 == local_48);
      }
    }
    else {
LAB_007703e0:
      if (pcVar6 < (char *)(lVar2 + 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("*cp <= *re","../sysdeps/unix/sysv/linux/getsysstats.c",0x68,"next_line");
      }
    }
    if (pcVar6 == pcVar5) goto LAB_00770338;
    iVar7 = 0;
    do {
      uVar3 = FUN_006e9510(pcVar5,&local_450,10);
      if (local_450 == pcVar5) goto LAB_00770338;
      uVar4 = uVar3;
      if (*local_450 == '-') {
        pcVar5 = local_450 + 1;
        uVar4 = FUN_006e9510(pcVar5,&local_450,10);
        if (local_450 == pcVar5) goto LAB_00770338;
        if (uVar3 <= uVar4) goto LAB_00770360;
      }
      else {
LAB_00770360:
        iVar7 = ((iVar7 + 1) - (int)uVar3) + (int)uVar4;
      }
    } while ((local_450 < pcVar6) &&
            (((pcVar5 = local_450, *local_450 != ',' || (pcVar5 = local_450 + 1, pcVar5 < pcVar6))
             && (*pcVar5 != '\n'))));
  }
  FUN_0076e4b0(iVar1);
LAB_0077026d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar7;
}

