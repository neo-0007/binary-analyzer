
undefined8 FUN_006e5980(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  
  LOCK();
  bVar11 = DAT_00946408 == 0;
  if (bVar11) {
    DAT_00946408 = 1;
  }
  UNLOCK();
  if (!bVar11) {
    FUN_00709590(&DAT_00946408);
  }
  if (DAT_009463e0 == (char *)0x0) {
    DAT_009463e0 = "/usr/share/locale";
  }
  if (DAT_009463f0 != 0) goto LAB_006e5a58;
  do {
    do {
      bVar11 = false;
      cVar4 = *DAT_009463e0;
      pcVar2 = DAT_009463e0;
      do {
        if (cVar4 == '\0') {
          if (bVar11) {
LAB_006e5ac0:
            DAT_009463e0 = pcVar2;
          }
          uVar7 = 0;
          goto LAB_006e5aca;
        }
        pcVar5 = pcVar2;
        if (cVar4 == ':') {
          do {
            pcVar2 = pcVar2 + 1;
          } while (*pcVar2 == ':');
          pcVar5 = pcVar2;
          if (*pcVar2 == '\0') goto LAB_006e5ac0;
        }
        do {
          pcVar2 = pcVar2 + 1;
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
        } while (cVar4 != ':');
        bVar11 = true;
      } while (pcVar2 <= pcVar5);
      DAT_009463e0 = pcVar2;
      lVar3 = FUN_006e5480(pcVar5,(int)pcVar2 - (int)pcVar5);
    } while ((lVar3 == 0) || (DAT_009463f0 == 0));
LAB_006e5a58:
    lVar3 = DAT_0094b5a8;
    uVar9 = 0;
    uVar10 = DAT_009463f0;
    do {
      uVar6 = uVar9 + uVar10 >> 1;
      puVar8 = (undefined8 *)(uVar6 * 0x10 + lVar3);
      iVar1 = thunk_FUN_007139b0(param_1,*puVar8,&PTR_PTR_00939c40);
      if (-1 < iVar1) {
        if (iVar1 == 0) {
          uVar7 = puVar8[1];
LAB_006e5aca:
          iVar1 = DAT_00946408;
          LOCK();
          DAT_00946408 = 0;
          UNLOCK();
          if (1 < iVar1) {
            FUN_00709660(&DAT_00946408);
          }
          return uVar7;
        }
        uVar9 = uVar6 + 1;
        uVar6 = uVar10;
      }
      uVar10 = uVar6;
    } while (uVar9 < uVar6);
  } while( true );
}

