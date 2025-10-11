
undefined8 FUN_00779830(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  bool bVar12;
  byte bVar13;
  undefined8 local_250;
  ulong local_248 [65];
  long local_40;
  
  bVar13 = 0;
  puVar1 = param_1 + 0x86;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = thunk_FUN_00712780(puVar1,"files");
  if (iVar3 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      puVar9 = &LAB_0077aa50;
LAB_007799ae:
      uVar6 = FUN_00779780(param_1,puVar9);
      return uVar6;
    }
    goto LAB_00779b88;
  }
  iVar3 = thunk_FUN_00712780(puVar1,"dns");
  if (iVar3 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      puVar9 = &LAB_007ad750;
      goto LAB_007799ae;
    }
    goto LAB_00779b88;
  }
  iVar3 = FUN_006f4ae0(&local_250,"libnss_%s.so%s",puVar1,".2");
  if (iVar3 < 0) {
LAB_0077995f:
    uVar6 = 0;
  }
  else {
    lVar4 = FUN_0078dfa0(local_250,0x80000002);
    FUN_007104f0(local_250);
    if (lVar4 == 0) {
      iVar3 = FUN_006f4ae0(&local_250,"libnss_%s-%d.%d.so",puVar1,2,0x23);
      if (iVar3 < 0) goto LAB_0077995f;
      lVar4 = FUN_0078dfa0(local_250,0x80000002);
      FUN_007104f0(local_250);
      if (lVar4 != 0) goto LAB_007798db;
      LOCK();
      bVar12 = DAT_0094acf0 == 0;
      if (bVar12) {
        DAT_0094acf0 = 1;
      }
      UNLOCK();
      if (!bVar12) {
        FUN_00709590(&DAT_0094acf0);
      }
      uVar2 = *param_1;
      uVar6 = 1;
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          uVar6 = 0;
        }
        else if (uVar2 == 0) {
          *param_1 = 2;
          uVar6 = 0;
        }
      }
      LOCK();
      UNLOCK();
    }
    else {
LAB_007798db:
      pcVar8 = "endaliasent";
      lVar7 = 0;
      do {
        iVar3 = FUN_006f4ae0(&local_250,"_nss_%s_%s",puVar1,pcVar8);
        if (iVar3 < 0) {
          FUN_0078e390(lVar4);
          goto LAB_0077995f;
        }
        pcVar8 = pcVar8 + 0x13;
        uVar5 = FUN_0078e120(lVar4,local_250);
        local_248[lVar7] = uVar5;
        FUN_007104f0(local_250);
        uVar5 = uVar5 ^ *(ulong *)(in_FS_OFFSET + 0x30);
        local_248[lVar7] = uVar5 << 0x11 | uVar5 >> 0x2f;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x40);
      LOCK();
      bVar12 = DAT_0094acf0 == 0;
      if (bVar12) {
        DAT_0094acf0 = 1;
      }
      UNLOCK();
      if (!bVar12) {
        FUN_00709590(&DAT_0094acf0);
      }
      if (*param_1 == 1) {
        FUN_0078e390(lVar4);
      }
      else if ((*param_1 & 0xfffffffd) == 0) {
        *(ulong *)(param_1 + 2) = local_248[0];
        lVar7 = (long)param_1 + (8 - (long)((ulong)(param_1 + 4) & 0xfffffffffffffff8));
        *(ulong *)(param_1 + 0x80) = local_248[0x3f];
        puVar10 = (undefined8 *)((long)local_248 - lVar7);
        puVar11 = (undefined8 *)((ulong)(param_1 + 4) & 0xfffffffffffffff8);
        for (uVar5 = (ulong)((int)lVar7 + 0x200U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
          puVar11 = puVar11 + (ulong)bVar13 * -2 + 1;
        }
        *(long *)(param_1 + 0x82) = lVar4;
        *param_1 = 1;
      }
      LOCK();
      UNLOCK();
      uVar6 = 1;
    }
    bVar12 = 1 < DAT_0094acf0;
    DAT_0094acf0 = 0;
    if (bVar12) {
      DAT_0094acf0 = 0;
      FUN_00709660(&DAT_0094acf0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_00779b88:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

