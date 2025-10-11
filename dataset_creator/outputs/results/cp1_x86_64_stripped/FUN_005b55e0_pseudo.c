
bool FUN_005b55e0(undefined8 param_1,int *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  char local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (int *)0x0) {
LAB_005b56d8:
    bVar3 = false;
  }
  else {
    lVar1 = *(long *)(param_2 + 2);
    if (0 < *param_2) {
      lVar5 = 0;
      iVar4 = 0;
      do {
        while (cVar2 = *(char *)(lVar1 + lVar5), cVar2 == '\x7f') {
          local_88[iVar4] = '.';
          if (iVar4 != 0x4f) goto LAB_005b564c;
LAB_005b5671:
          iVar4 = FUN_004ab7e0(param_1,local_88);
          if (iVar4 < 1) goto LAB_005b56d8;
          iVar4 = 0;
          lVar5 = lVar5 + 1;
          if (*param_2 <= (int)lVar5) goto LAB_005b5690;
        }
        if ((cVar2 < ' ' && cVar2 != '\n') && (cVar2 != '\r')) {
          cVar2 = '.';
        }
        local_88[iVar4] = cVar2;
        if (iVar4 == 0x4f) goto LAB_005b5671;
LAB_005b564c:
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *param_2);
LAB_005b5690:
      if (iVar4 != 0) {
        iVar4 = FUN_004ab7e0(param_1,local_88);
        bVar3 = 0 < iVar4;
        goto LAB_005b5699;
      }
    }
    bVar3 = true;
  }
LAB_005b5699:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar3;
}

