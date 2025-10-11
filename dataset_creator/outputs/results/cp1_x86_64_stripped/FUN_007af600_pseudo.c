
long * FUN_007af600(void)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  long *plVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined1 auStack_98 [48];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = FUN_007aba10(auStack_98,"/etc/resolv.conf");
  if (cVar3 == '\0') {
LAB_007af788:
    plVar6 = (long *)0x0;
    goto LAB_007af6ad;
  }
  LOCK();
  bVar7 = DAT_0094b3f8 == 0;
  if (bVar7) {
    DAT_0094b3f8 = 1;
  }
  UNLOCK();
  if (!bVar7) {
    FUN_00709590(&DAT_0094b3f8);
  }
  if (DAT_0094b400 == (undefined1 (*) [16])0x0) {
    pauVar5 = (undefined1 (*) [16])FUN_00711600(1,0x58);
    if (pauVar5 == (undefined1 (*) [16])0x0) goto LAB_007af788;
    DAT_0094b400 = pauVar5;
    *(undefined8 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
    if (*(long *)pauVar5[2] != 0) goto LAB_007af664;
LAB_007af710:
    plVar6 = (long *)FUN_007adeb0(0,&local_68);
    if (plVar6 != (long *)0x0) {
      plVar1 = *(long **)pauVar5[2];
      if (plVar1 != (long *)0x0) {
        if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_007af000();
        }
        lVar4 = *plVar1 + -1;
        if (lVar4 == 0) {
          FUN_007104f0();
        }
        else {
          *plVar1 = lVar4;
        }
      }
      *(long **)pauVar5[2] = plVar6;
      cVar3 = FUN_007ab940(auStack_98,&local_68);
      if (cVar3 == '\0') {
        *(undefined8 *)(pauVar5[2] + 8) = 0xffffffffffffffff;
      }
      else {
        *(undefined8 *)(pauVar5[2] + 8) = local_68;
        *(undefined8 *)pauVar5[3] = uStack_60;
        *(undefined8 *)(pauVar5[3] + 8) = local_58;
        *(undefined8 *)pauVar5[4] = uStack_50;
        *(undefined8 *)(pauVar5[4] + 8) = local_48;
        *(undefined8 *)pauVar5[5] = uStack_40;
      }
      goto LAB_007af67c;
    }
  }
  else {
    pauVar5 = DAT_0094b400;
    if (*(long *)DAT_0094b400[2] == 0) goto LAB_007af710;
LAB_007af664:
    cVar3 = FUN_007ab940(auStack_98,pauVar5[2] + 8);
    if (cVar3 == '\0') goto LAB_007af710;
    plVar6 = *(long **)pauVar5[2];
LAB_007af67c:
    if (plVar6 != (long *)0x0) {
      if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("conf->__refcount > 0","resolv_conf.c",0xa4,"__resolv_conf_get_current");
      }
      lVar4 = *plVar6 + 1;
      *plVar6 = lVar4;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("conf->__refcount > 0","resolv_conf.c",0xa6,"__resolv_conf_get_current");
      }
    }
  }
  iVar2 = DAT_0094b3f8;
  LOCK();
  DAT_0094b3f8 = 0;
  UNLOCK();
  if (1 < iVar2) {
    FUN_00709660(&DAT_0094b3f8);
  }
LAB_007af6ad:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return plVar6;
}

