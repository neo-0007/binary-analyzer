
void FUN_006e8f40(undefined4 param_1,undefined **param_2,char param_3,char param_4)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  code *unaff_R15;
  long in_FS_OFFSET;
  bool bVar7;
  
  if ((PTR_0093afd8 != (undefined *)0x0) && (param_4 != '\0')) {
    func_0x00000000();
  }
  LOCK();
  bVar7 = DAT_009464e8 == 0;
  if (bVar7) {
    DAT_009464e8 = 1;
  }
  UNLOCK();
  if (!bVar7) {
    FUN_00709590(&DAT_009464e8);
  }
  puVar6 = &DAT_009464e8;
LAB_006e8f89:
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) goto LAB_006e90df;
LAB_006e8f98:
  lVar5 = plVar1[1];
  do {
    if (lVar5 == 0) {
      puVar3 = (undefined *)*plVar1;
      *param_2 = puVar3;
      if (puVar3 == (undefined *)0x0) goto LAB_006e90df;
      FUN_007104f0(plVar1);
      goto LAB_006e8f89;
    }
    lVar5 = lVar5 + -1;
    plVar1[1] = lVar5;
    iVar4 = DAT_009464e8;
    lVar2 = plVar1[lVar5 * 4 + 2];
    if (lVar2 == 3) {
      unaff_R15 = (code *)(((ulong)plVar1[lVar5 * 4 + 3] >> 0x11 | plVar1[lVar5 * 4 + 3] << 0x2f) ^
                          *(ulong *)(in_FS_OFFSET + 0x30));
      LOCK();
      DAT_009464e8 = 0;
      UNLOCK();
      if (1 < iVar4) {
        FUN_00709660(puVar6);
      }
      (*unaff_R15)();
      LOCK();
      bVar7 = DAT_009464e8 == 0;
      if (bVar7) {
        DAT_009464e8 = 1;
      }
      UNLOCK();
      if (!bVar7) {
        FUN_00709590(puVar6);
      }
      goto LAB_006e8f98;
    }
    if (lVar2 == 4) {
      lVar2 = plVar1[lVar5 * 4 + 4];
      plVar1[lVar5 * 4 + 2] = 0;
      iVar4 = DAT_009464e8;
      unaff_R15 = (code *)(((ulong)plVar1[lVar5 * 4 + 3] >> 0x11 | plVar1[lVar5 * 4 + 3] << 0x2f) ^
                          *(ulong *)(in_FS_OFFSET + 0x30));
      LOCK();
      DAT_009464e8 = 0;
      UNLOCK();
      if (1 < iVar4) {
        FUN_00709660(puVar6);
      }
      (*unaff_R15)(lVar2);
      LOCK();
      bVar7 = DAT_009464e8 == 0;
      if (bVar7) {
        DAT_009464e8 = 1;
      }
      UNLOCK();
      if (!bVar7) {
        FUN_00709590(puVar6);
      }
      goto LAB_006e8f98;
    }
  } while (lVar2 != 2);
  unaff_R15 = (code *)(((ulong)plVar1[lVar5 * 4 + 3] >> 0x11 | plVar1[lVar5 * 4 + 3] << 0x2f) ^
                      *(ulong *)(in_FS_OFFSET + 0x30));
  LOCK();
  DAT_009464e8 = 0;
  UNLOCK();
  if (1 < iVar4) goto LAB_006e9130;
  goto LAB_006e8ff8;
LAB_006e90df:
  iVar4 = DAT_009464e8;
  DAT_009464d4 = 1;
  LOCK();
  DAT_009464e8 = 0;
  UNLOCK();
  if (1 < iVar4) {
    FUN_00709660(&DAT_009464e8);
  }
  if (param_3 != '\0') {
    param_2 = &PTR_FUN_0093f988;
    puVar6 = (undefined4 *)&DAT_0093f990;
    do {
      (*(code *)*param_2)();
      param_2 = param_2 + 1;
    } while (param_2 < &DAT_0093f990);
  }
  FUN_00768c20(param_1);
LAB_006e9130:
  FUN_00709660(puVar6);
LAB_006e8ff8:
  (*unaff_R15)(param_1);
  LOCK();
  bVar7 = DAT_009464e8 == 0;
  if (bVar7) {
    DAT_009464e8 = 1;
  }
  UNLOCK();
  if (!bVar7) {
    FUN_00709590(puVar6);
  }
  goto LAB_006e8f98;
}

