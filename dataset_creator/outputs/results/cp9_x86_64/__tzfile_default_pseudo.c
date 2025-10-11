
void __tzfile_default(char *param_1,char *param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  size_t sVar8;
  size_t sVar9;
  void *__dest;
  long lVar10;
  char cVar11;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar8 = strlen(param_1);
  sVar8 = sVar8 + 1;
  sVar9 = strlen(param_2);
  __tzfile_read("posixrules",sVar8 + sVar9 + 1,&local_48);
  if (__use_tzfile != 0) {
    if (num_types < 2) {
      __use_tzfile = 0;
    }
    else {
      __dest = mempcpy(local_48,param_1,sVar8);
      memcpy(__dest,param_2,sVar9 + 1);
      lVar7 = transitions;
      lVar6 = num_transitions;
      lVar5 = type_idxs;
      piVar4 = types;
      num_types = 2;
      zone_names = local_48;
      if (num_transitions != 0) {
        lVar10 = 0;
        cVar11 = '\0';
LAB_007596ad:
        do {
          bVar1 = *(byte *)(lVar5 + lVar10);
          cVar2 = (char)piVar4[(ulong)bVar1 * 2 + 1];
          *(char *)(lVar5 + lVar10) = cVar2;
          if (*(char *)((long)piVar4 + (ulong)bVar1 * 8 + 7) == '\0') {
            lVar3 = *(long *)(lVar7 + lVar10 * 8);
            if ((cVar11 == '\0') || (*(char *)((long)piVar4 + (ulong)bVar1 * 8 + 6) != '\0')) {
              *(long *)(lVar7 + lVar10 * 8) = lVar3 + (param_3 - rule_stdoff);
              lVar10 = lVar10 + 1;
              cVar11 = cVar2;
              if (lVar10 == lVar6) break;
              goto LAB_007596ad;
            }
            *(long *)(lVar7 + lVar10 * 8) = lVar3 + (param_4 - rule_dstoff);
          }
          lVar10 = lVar10 + 1;
          cVar11 = cVar2;
        } while (lVar10 != lVar6);
      }
      *piVar4 = param_3;
      timezone = (long)-param_3;
      *(undefined2 *)(piVar4 + 1) = 0;
      tzfile_dev = 0;
      tzfile_ino = 0;
      tzfile_mtime = 0;
      rule_dstoff = (long)param_4;
      rule_stdoff = (long)param_3;
      *(char *)((long)piVar4 + 0xd) = (char)sVar8;
      piVar4[2] = param_4;
      *(undefined1 *)(piVar4 + 3) = 1;
      tzname = param_1;
      PTR_DAT_00931a28 = param_2;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

