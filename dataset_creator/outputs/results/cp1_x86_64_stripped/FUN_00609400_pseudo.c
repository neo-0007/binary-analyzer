
bool FUN_00609400(undefined8 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  long in_FS_OFFSET;
  bool bVar13;
  int local_c4;
  int local_a0;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [15];
  undefined1 auStack_69 [17];
  undefined1 local_58 [24];
  long local_40;
  
  iVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar4 = FUN_00436480(param_1);
    if (iVar4 <= iVar11) {
      FUN_00435d20(param_1,FUN_00607580);
      FUN_00436510(param_1);
      iVar11 = FUN_00608bf0(param_1);
      bVar13 = iVar11 != 0;
LAB_00609625:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return bVar13;
    }
    lVar6 = FUN_004364a0(param_1,iVar11);
    if (**(int **)(lVar6 + 8) == 1) {
      iVar12 = 4;
      iVar4 = FUN_00608560(lVar6);
      uVar3 = *(undefined8 *)(*(long *)(lVar6 + 8) + 8);
      if (iVar4 != 1) {
        iVar12 = (uint)(iVar4 == 2) << 4;
      }
      lVar6 = (long)iVar12;
      FUN_00436510(uVar3);
      local_c4 = 0;
      while (iVar4 = FUN_00436480(uVar3), local_c4 < iVar4 + -1) {
        uVar7 = FUN_004364a0(uVar3,local_c4);
        iVar4 = local_c4 + 1;
        uVar8 = FUN_004364a0(uVar3,iVar4);
        iVar5 = FUN_00607a10(uVar7,local_88,local_78,iVar12);
        if (iVar5 == 0) goto LAB_00609623;
        puVar1 = auStack_69 + 1;
        iVar5 = FUN_00607a10(uVar8,puVar1,local_58,iVar12);
        if ((((iVar5 == 0) || (iVar5 = thunk_FUN_00713570(local_88,local_78,lVar6), 0 < iVar5)) ||
            (iVar5 = thunk_FUN_00713570(puVar1,local_58,lVar6), 0 < iVar5)) ||
           (iVar5 = thunk_FUN_00713570(local_78,puVar1,lVar6), -1 < iVar5)) goto LAB_00609623;
        if (iVar12 == 0) {
LAB_006095f0:
          iVar5 = FUN_00607ab0(local_88,local_58,iVar12);
          if (iVar5 < 0) {
            iVar5 = FUN_00607fa0(&local_90,local_88,local_58,iVar12);
          }
          else {
            iVar5 = FUN_00607ea0(&local_90,local_88,iVar5);
          }
          if (iVar5 == 0) goto LAB_00609623;
          local_a0 = local_c4;
          FUN_004364d0(uVar3,local_c4,local_90);
          FUN_00435ec0(uVar3,iVar4);
          FUN_00607e80(uVar7);
          FUN_00607e80(uVar8);
        }
        else {
          puVar9 = puVar1 + lVar6;
          do {
            cVar2 = puVar9[-1];
            puVar9[-1] = cVar2 + -1;
            if (cVar2 != '\0') break;
            puVar9 = puVar9 + -1;
          } while (puVar9 != auStack_69 + (lVar6 - (ulong)(iVar12 - 1)));
          iVar5 = thunk_FUN_00713570(local_78,puVar1,lVar6);
          local_a0 = iVar4;
          if (iVar5 == 0) goto LAB_006095f0;
        }
        local_c4 = local_a0;
      }
      iVar4 = FUN_00436480(uVar3);
      piVar10 = (int *)FUN_004364a0(uVar3,iVar4 + -1);
      if ((piVar10 != (int *)0x0) && (*piVar10 == 1)) {
        iVar4 = FUN_00607a10(piVar10,auStack_69 + 1,local_58,iVar12);
        if ((iVar4 == 0) || (iVar4 = thunk_FUN_00713570(auStack_69 + 1,local_58,iVar12), 0 < iVar4))
        {
LAB_00609623:
          bVar13 = false;
          goto LAB_00609625;
        }
      }
    }
    iVar11 = iVar11 + 1;
  } while( true );
}

