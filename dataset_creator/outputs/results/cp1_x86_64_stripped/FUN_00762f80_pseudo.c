
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00762f80(undefined *param_1,undefined *param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = thunk_FUN_007129d0();
  lVar7 = lVar7 + 1;
  lVar8 = thunk_FUN_007129d0(param_2);
  FUN_007621d0("posixrules",lVar7 + lVar8 + 1,&local_48);
  if (DAT_0094aac8 != 0) {
    if (DAT_0094ab08 < 2) {
      DAT_0094aac8 = 0;
    }
    else {
      uVar9 = thunk_FUN_00713820(local_48,param_1,lVar7);
      thunk_FUN_00713a50(uVar9,param_2,lVar8 + 1);
      lVar6 = DAT_0094b5b8;
      lVar5 = DAT_0094ab18;
      lVar8 = DAT_0094ab10;
      piVar4 = DAT_0094ab00;
      DAT_0094ab08 = 2;
      DAT_0094aaf8 = local_48;
      if (DAT_0094ab18 != 0) {
        lVar10 = 0;
        cVar11 = '\0';
LAB_007630ad:
        do {
          bVar1 = *(byte *)(lVar8 + lVar10);
          cVar2 = (char)piVar4[(ulong)bVar1 * 2 + 1];
          *(char *)(lVar8 + lVar10) = cVar2;
          if (*(char *)((long)piVar4 + (ulong)bVar1 * 8 + 7) == '\0') {
            lVar3 = *(long *)(lVar6 + lVar10 * 8);
            if ((cVar11 == '\0') || (*(char *)((long)piVar4 + (ulong)bVar1 * 8 + 6) != '\0')) {
              *(long *)(lVar6 + lVar10 * 8) = lVar3 + (param_3 - DAT_0094aaf0);
              lVar10 = lVar10 + 1;
              cVar11 = cVar2;
              if (lVar10 == lVar5) break;
              goto LAB_007630ad;
            }
            *(long *)(lVar6 + lVar10 * 8) = lVar3 + (param_4 - DAT_0094aae8);
          }
          lVar10 = lVar10 + 1;
          cVar11 = cVar2;
        } while (lVar10 != lVar5);
      }
      *piVar4 = param_3;
      _DAT_0094aa40 = (long)-param_3;
      *(undefined2 *)(piVar4 + 1) = 0;
      DAT_0094ab30 = 0;
      DAT_0094ab28 = 0;
      DAT_0094ab20 = 0;
      DAT_0094aae8 = (long)param_4;
      DAT_0094aaf0 = (long)param_3;
      *(char *)((long)piVar4 + 0xd) = (char)lVar7;
      piVar4[2] = param_4;
      *(undefined1 *)(piVar4 + 3) = 1;
      PTR_DAT_0093ea00 = param_1;
      PTR_DAT_0093ea08 = param_2;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

