
void __malloc_hugepage_config(ulong param_1,ulong *param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  char local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_2 = 0;
  *param_3 = 0;
  if (param_1 == 0) {
    pcVar6 = (char *)0x0;
    iVar2 = __open64_nocancel("/proc/meminfo",0);
    if (iVar2 != -1) {
      while (lVar4 = __pread64_nocancel(iVar2,local_448,0x1ff,pcVar6), -1 < lVar4) {
        local_448[lVar4] = '\0';
        pcVar5 = strstr(local_448,"Hugepagesize:");
        if (pcVar5 != (char *)0x0) {
          cVar1 = pcVar5[0xe];
          if (((byte)(cVar1 - 0x30U) < 10) || (cVar1 == ' ')) {
            pcVar5 = pcVar5 + 0xf;
            lVar4 = 0;
            do {
              if (cVar1 != ' ') {
                lVar4 = (long)(cVar1 + -0x30) + lVar4 * 10;
              }
              while( true ) {
                cVar1 = *pcVar5;
                pcVar5 = pcVar5 + 1;
                if ((byte)(cVar1 - 0x30U) < 10) break;
                if (cVar1 != ' ') {
                  uVar7 = lVar4 << 10;
                  __close_nocancel(iVar2);
                  *param_2 = uVar7;
                  if (uVar7 != 0) {
                    iVar2 = 0;
                    for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
                      iVar2 = iVar2 + 1;
                    }
                    *param_3 = iVar2 << 0x1a | 0x40000;
                  }
                  goto LAB_00767300;
                }
              }
            } while( true );
          }
          break;
        }
        pcVar5 = rindex(local_448,10);
        if (pcVar5 == (char *)0x0) break;
        pcVar6 = pcVar5 + (long)(pcVar6 + (1 - (long)local_448));
      }
      __close_nocancel(iVar2);
    }
    *param_2 = 0;
  }
  else {
    iVar2 = __open64_nocancel("/sys/kernel/mm/hugepages",0x10000,0);
    if (iVar2 != -1) {
LAB_00767239:
      do {
        lVar4 = getdents64(iVar2,local_448,0x400);
        if (lVar4 + 1U < 2) goto LAB_007672f7;
        pcVar6 = local_448 + lVar4;
        pcVar5 = local_448;
        if (pcVar6 != local_448) {
LAB_00767275:
          pcVar8 = pcVar5 + *(ushort *)(pcVar5 + 0x10);
          if (((pcVar5[0x13] == '.') || (iVar3 = strncmp(pcVar5 + 0x13,"hugepages-",10), iVar3 != 0)
              ) || (cVar1 = pcVar5[0x1d], 9 < (byte)(cVar1 - 0x30U))) goto LAB_00767270;
          lVar4 = 0;
          pcVar5 = pcVar5 + 0x1e;
          do {
            lVar4 = (long)(char)(cVar1 + -0x30) + lVar4 * 10;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while ((byte)(cVar1 - 0x30U) < 10);
          if (param_1 != lVar4 * 0x400) goto LAB_00767270;
          *param_2 = param_1;
          iVar3 = 0;
          for (; (param_1 & 1) == 0; param_1 = param_1 >> 1 | 0x8000000000000000) {
            iVar3 = iVar3 + 1;
          }
          *param_3 = iVar3 << 0x1a | 0x40000;
          goto LAB_007672f7;
        }
      } while( true );
    }
  }
LAB_00767300:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
LAB_00767270:
  pcVar5 = pcVar8;
  if (pcVar6 == pcVar8) goto LAB_00767239;
  goto LAB_00767275;
LAB_007672f7:
  __close_nocancel(iVar2);
  goto LAB_00767300;
}

