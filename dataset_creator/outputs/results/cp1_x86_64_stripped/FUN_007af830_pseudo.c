
long * FUN_007af830(long param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  bool bVar7;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
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
      if (pauVar5 == (undefined1 (*) [16])0x0) {
        return (long *)0x0;
      }
      DAT_0094b400 = pauVar5;
      *(undefined8 *)pauVar5[1] = 0;
      *pauVar5 = (undefined1  [16])0x0;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x230) ^ 0x26a8fa5e48af8061;
      if ((uVar6 < *(ulong *)*DAT_0094b400) &&
         (plVar1 = *(long **)(*(long *)DAT_0094b400[1] + uVar6 * 8), ((ulong)plVar1 & 1) == 0)) {
        if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("conf->__refcount > 0","resolv_conf.c",0xc2,"resolv_conf_get_1");
        }
        *plVar1 = *plVar1 + 1;
        iVar2 = DAT_0094b3f8;
        LOCK();
        DAT_0094b3f8 = 0;
        UNLOCK();
        if (1 < iVar2) {
          FUN_00709660(&DAT_0094b3f8);
        }
        cVar3 = FUN_007af030(param_1,plVar1);
        if (cVar3 != '\0') {
          return plVar1;
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
        if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_007af000();
        }
        lVar4 = *plVar1 + -1;
        if (lVar4 == 0) {
          FUN_007104f0(plVar1);
        }
        else {
          *plVar1 = lVar4;
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
  }
  return (long *)0x0;
}

