
undefined8 FUN_00791b80(char *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) ||
     (lVar4 = thunk_FUN_00712710(param_1,0x3d), lVar4 != 0)) {
    uVar7 = 0xffffffff;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  }
  else {
    lVar4 = thunk_FUN_007129d0(param_1);
    LOCK();
    bVar8 = DAT_0094b128 == 0;
    if (bVar8) {
      DAT_0094b128 = 1;
    }
    UNLOCK();
    if (!bVar8) {
      FUN_00709590(&DAT_0094b128);
    }
    plVar6 = DAT_0094ab80;
    if (DAT_0094ab80 != (long *)0x0) {
      while (lVar2 = *plVar6, lVar2 != 0) {
        iVar3 = thunk_FUN_00712ab0(lVar2,param_1,lVar4);
        if ((iVar3 == 0) && (plVar5 = plVar6, *(char *)(lVar2 + lVar4) == '=')) {
          do {
            plVar1 = plVar5 + 1;
            *plVar5 = *plVar1;
            plVar5 = plVar5 + 1;
          } while (*plVar1 != 0);
        }
        else {
          plVar6 = plVar6 + 1;
        }
      }
    }
    iVar3 = DAT_0094b128;
    LOCK();
    DAT_0094b128 = 0;
    UNLOCK();
    uVar7 = 0;
    if (1 < iVar3) {
      FUN_00709660(&DAT_0094b128);
    }
  }
  return uVar7;
}

