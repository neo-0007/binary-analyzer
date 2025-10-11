
int FUN_00770420(void)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  char local_448 [768];
  char local_148 [256];
  char local_48 [8];
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0076e620("/proc/stat",0x80000);
  if (iVar1 != -1) {
    iVar6 = 0;
    pcVar3 = local_48;
    pcVar5 = local_48;
    do {
      lVar4 = (long)pcVar5 - (long)pcVar3;
      lVar2 = thunk_FUN_007134f0(pcVar3,10,lVar4);
      pcVar7 = pcVar5;
      if (lVar2 == 0) {
        if ((pcVar3 != local_448) && (pcVar5 == local_48)) {
          pcVar7 = local_448 + lVar4;
          thunk_FUN_00713610(local_448,pcVar3,lVar4);
          lVar2 = FUN_0076e770(iVar1,pcVar7,(long)pcVar5 - (long)pcVar7);
          if (lVar2 < 0) goto LAB_007704b5;
          pcVar5 = pcVar7 + lVar2;
          lVar2 = thunk_FUN_007134f0(local_448,10,(long)pcVar5 - (long)local_448);
          pcVar3 = local_448;
          pcVar7 = pcVar5;
          if (lVar2 != 0) goto LAB_007704a2;
          if (pcVar5 == local_48) {
            do {
              lVar2 = FUN_0076e770(iVar1,local_148,0x100);
              if (lVar2 < 0) goto LAB_007704b5;
              pcVar5 = local_148 + lVar2;
              lVar2 = thunk_FUN_007134f0(local_148,10,lVar2);
              local_148[0] = '\n';
              pcVar7 = pcVar5;
              if (lVar2 != 0) goto LAB_007704a2;
            } while (pcVar5 == local_48);
          }
        }
      }
      else {
LAB_007704a2:
        pcVar5 = (char *)(lVar2 + 1);
        if (pcVar7 < pcVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("*cp <= *re","../sysdeps/unix/sysv/linux/getsysstats.c",0x68,"next_line");
        }
      }
      if ((((pcVar7 == pcVar3) || (*pcVar3 != 'c')) || (pcVar3[1] != 'p')) || (pcVar3[2] != 'u'))
      goto LAB_007704b5;
      iVar6 = iVar6 + (uint)((int)pcVar3[3] - 0x30U < 10);
      pcVar3 = pcVar5;
      pcVar5 = pcVar7;
    } while( true );
  }
LAB_007704bd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar6;
LAB_007704b5:
  FUN_0076e4b0(iVar1);
  goto LAB_007704bd;
}

